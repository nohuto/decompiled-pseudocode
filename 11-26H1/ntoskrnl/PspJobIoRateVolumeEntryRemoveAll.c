/*
 * XREFs of PspJobIoRateVolumeEntryRemoveAll @ 0x1404C4AF0
 * Callers:
 *     PspJobIoRateControlDisable @ 0x140AFC11C (PspJobIoRateControlDisable.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PspJobIoRateVolumeEntryRemoveAll(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rsi
  KIRQL v5; // al
  unsigned __int64 v6; // r9
  KIRQL v7; // r11
  unsigned __int64 v8; // rcx
  int v9; // r8d
  _QWORD *v10; // rdx
  unsigned __int64 **v11; // r10
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // rdx
  char v15; // al

  v2 = (volatile LONG *)(a1 + 1688);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1688));
  v6 = a1 + 1696;
  v7 = v5;
  v8 = *(_QWORD *)(a1 + 1696);
  if ( (*(_BYTE *)(a1 + 1704) & 1) != 0 && v8 )
    v8 ^= v6;
  v9 = *(_BYTE *)(a1 + 1704) & 1;
  if ( v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (_QWORD *)v8;
          if ( !*(_QWORD *)v8 )
            break;
          if ( v9 )
            v8 ^= *(_QWORD *)v8;
          else
            v8 = *(_QWORD *)v8;
          *v10 = 0LL;
        }
        v11 = (unsigned __int64 **)(v8 + 8);
        v12 = *(_QWORD *)(v8 + 8);
        if ( !v12 )
          break;
        if ( v9 )
          v8 ^= v12;
        else
          v8 = *(_QWORD *)(v8 + 8);
        *v11 = 0LL;
      }
      v13 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v9 && v13 )
        v13 ^= v8;
      v14 = *(unsigned __int64 **)(a2 + 8);
      if ( *v14 != a2 )
        __fastfail(3u);
      *(_QWORD *)v8 = a2;
      *v11 = v14;
      *v14 = v8;
      *(_QWORD *)(a2 + 8) = v8;
      *(_QWORD *)(v8 + 16) = -1LL;
      if ( !v13 )
        break;
      v8 = v13;
    }
  }
  v15 = *(_BYTE *)(a1 + 1704);
  *(_QWORD *)v6 = 0LL;
  *(_QWORD *)(a1 + 1704) = 0LL;
  if ( (v15 & 1) != 0 )
    *(_BYTE *)(a1 + 1704) = 1;
  ExReleaseSpinLockExclusive(v2, v7);
}
