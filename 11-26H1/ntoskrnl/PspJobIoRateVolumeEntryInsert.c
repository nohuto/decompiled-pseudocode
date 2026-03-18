/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x140615C54
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x140B5A3A0 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     PspIoRateEntryVolumeCompare @ 0x1404BCA3C (PspIoRateEntryVolumeCompare.c)
 */

void __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rdi
  bool v7; // bl
  KIRQL v8; // r13
  int v9; // ebp
  unsigned __int64 v10; // rax

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1688));
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_QWORD *)(a1 + 1696);
  v7 = 0;
  v8 = v4;
  if ( (*(_BYTE *)(a1 + 1704) & 1) != 0 )
  {
    if ( v6 )
      v6 ^= a1 + 1696;
    else
      v6 = 0LL;
  }
  v9 = *(_BYTE *)(a1 + 1704) & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( (int)PspIoRateEntryVolumeCompare(v5, v6) < 0 )
      {
        v10 = *(_QWORD *)v6;
        if ( v9 )
        {
          if ( !v10 )
            break;
          v10 ^= v6;
        }
        if ( !v10 )
          break;
      }
      else
      {
        v10 = *(_QWORD *)(v6 + 8);
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_11;
          v10 ^= v6;
        }
        if ( !v10 )
        {
LABEL_11:
          v7 = 1;
          break;
        }
      }
      v6 = v10;
    }
  }
  RtlRbInsertNodeEx(a1 + 1696, v6, v7, a2);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1688), v8);
}
