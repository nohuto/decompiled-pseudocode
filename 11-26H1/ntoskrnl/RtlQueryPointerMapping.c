/*
 * XREFs of RtlQueryPointerMapping @ 0x14061A600
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAcquirePropStoreLockShared @ 0x14061A97C (RtlpAcquirePropStoreLockShared.c)
 *     RtlpReleasePropStoreLockShared @ 0x14061AA20 (RtlpReleasePropStoreLockShared.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax

  LOBYTE(v4) = RtlpAcquirePropStoreLockShared((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead);
  v5 = (unsigned __int64)RtlpPtrTree;
  if ( (qword_140E0C638 & 1) != 0 && RtlpPtrTree )
    v5 = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree;
  while ( v5 )
  {
    if ( a1 - *(_QWORD *)(v5 + 24) < 0 )
    {
      v6 = *(_QWORD *)v5;
    }
    else
    {
      if ( a1 - *(_QWORD *)(v5 + 24) <= 0 )
        break;
      v6 = *(_QWORD *)(v5 + 8);
    }
    if ( (qword_140E0C638 & 1) != 0 && v6 )
      v5 ^= v6;
    else
      v5 = v6;
  }
  if ( v5 )
    *a2 = *(_QWORD *)(v5 + 32);
  RtlpReleasePropStoreLockShared(&RtlpBootStatHandleLock.Header.WaitListHead, v4);
  return v5 == 0 ? 0xC0000225 : 0;
}
