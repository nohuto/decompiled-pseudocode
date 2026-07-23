/*
 * XREFs of RtlRemovePointerMapping @ 0x14061D7B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x14061D980 (RtlpAcquirePropStoreLockExclusive.c)
 *     RtlpReleasePropStoreLockExclusive @ 0x14061DA3C (RtlpReleasePropStoreLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, _QWORD *a2)
{
  char v4; // al
  __int64 v5; // rdx
  _RTL_BALANCED_NODE *Min; // r8
  unsigned __int64 Root; // rbx
  char v8; // si
  unsigned __int64 v9; // rax

  v4 = RtlpAcquirePropStoreLockExclusive((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead);
  Min = RtlpPtrTree.Min;
  Root = (unsigned __int64)RtlpPtrTree.Root;
  v8 = v4;
  if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && RtlpPtrTree.Root )
    Root = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree.Root;
  while ( Root )
  {
    if ( a1 - *(_QWORD *)(Root + 24) < 0 )
    {
      v9 = *(_QWORD *)Root;
    }
    else
    {
      if ( a1 - *(_QWORD *)(Root + 24) <= 0 )
        break;
      v9 = *(_QWORD *)(Root + 8);
    }
    if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && v9 )
      Root ^= v9;
    else
      Root = v9;
  }
  if ( Root )
    RtlRbRemoveNode(&RtlpPtrTree, (PRTL_BALANCED_NODE)Root);
  LOBYTE(v5) = v8;
  RtlpReleasePropStoreLockExclusive(&RtlpBootStatHandleLock.Header.WaitListHead, v5, Min);
  if ( !Root )
    return 3221226021LL;
  *a2 = *(_QWORD *)(Root + 32);
  ExFreePoolWithTag((PVOID)Root, 0);
  return 0LL;
}
