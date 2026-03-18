/*
 * XREFs of RtlRemovePointerMapping @ 0x14061A760
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x14061A930 (RtlpAcquirePropStoreLockExclusive.c)
 *     RtlpReleasePropStoreLockExclusive @ 0x14061A9EC (RtlpReleasePropStoreLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, _QWORD *a2)
{
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  char v8; // si
  unsigned __int64 v9; // rax

  v4 = RtlpAcquirePropStoreLockExclusive((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead);
  v6 = qword_140E0C638;
  v7 = (unsigned __int64)RtlpPtrTree;
  v8 = v4;
  if ( (qword_140E0C638 & 1) != 0 && RtlpPtrTree )
    v7 = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree;
  while ( v7 )
  {
    if ( a1 - *(_QWORD *)(v7 + 24) < 0 )
    {
      v9 = *(_QWORD *)v7;
    }
    else
    {
      if ( a1 - *(_QWORD *)(v7 + 24) <= 0 )
        break;
      v9 = *(_QWORD *)(v7 + 8);
    }
    if ( (qword_140E0C638 & 1) != 0 && v9 )
      v7 ^= v9;
    else
      v7 = v9;
  }
  if ( v7 )
    RtlRbRemoveNode((__int64)&RtlpPtrTree, v7);
  LOBYTE(v5) = v8;
  RtlpReleasePropStoreLockExclusive(&RtlpBootStatHandleLock.Header.WaitListHead, v5, v6);
  if ( !v7 )
    return 3221226021LL;
  *a2 = *(_QWORD *)(v7 + 32);
  ExFreePoolWithTag((PVOID)v7, 0);
  return 0LL;
}
