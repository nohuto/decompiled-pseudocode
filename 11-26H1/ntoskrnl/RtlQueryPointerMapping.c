/*
 * XREFs of RtlQueryPointerMapping @ 0x14061D650
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAcquirePropStoreLockShared @ 0x14061D9CC (RtlpAcquirePropStoreLockShared.c)
 *     RtlpReleasePropStoreLockShared @ 0x14061DA70 (RtlpReleasePropStoreLockShared.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  unsigned __int64 Root; // rbx
  unsigned __int64 v6; // rax

  LOBYTE(v4) = RtlpAcquirePropStoreLockShared((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead);
  Root = (unsigned __int64)RtlpPtrTree.Root;
  if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && RtlpPtrTree.Root )
    Root = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree.Root;
  while ( Root )
  {
    if ( a1 - *(_QWORD *)(Root + 24) < 0 )
    {
      v6 = *(_QWORD *)Root;
    }
    else
    {
      if ( a1 - *(_QWORD *)(Root + 24) <= 0 )
        break;
      v6 = *(_QWORD *)(Root + 8);
    }
    if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && v6 )
      Root ^= v6;
    else
      Root = v6;
  }
  if ( Root )
    *a2 = *(_QWORD *)(Root + 32);
  RtlpReleasePropStoreLockShared(&RtlpBootStatHandleLock.Header.WaitListHead, v4);
  return Root == 0 ? 0xC0000225 : 0;
}
