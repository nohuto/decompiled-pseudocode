/*
 * XREFs of MiStartingOffsetNeedLock @ 0x14036EF30
 * Callers:
 *     MiPfConvertFileOffsetToProto @ 0x14036E9D0 (MiPfConvertFileOffsetToProto.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 */

unsigned __int64 __fastcall MiStartingOffsetNeedLock(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r8
  volatile LONG *v5; // rbx
  KIRQL v6; // di
  unsigned __int64 v7; // rsi

  v2 = *a1;
  if ( (*(_DWORD *)(*a1 + 56) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
  {
    v6 = 17;
    v5 = (volatile LONG *)(v2 + 72);
  }
  else
  {
    v5 = (volatile LONG *)(v2 + 72);
    v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
  }
  v7 = MiStartingOffset(a1, a1[1], a2);
  if ( v6 != 17 )
    ExReleaseSpinLockShared(v5, v6);
  return v7;
}
