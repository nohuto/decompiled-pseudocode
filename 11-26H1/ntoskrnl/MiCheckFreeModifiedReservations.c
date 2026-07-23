/*
 * XREFs of MiCheckFreeModifiedReservations @ 0x1403FFC58
 * Callers:
 *     MiModifiedPageWriter @ 0x1403FF5C0 (MiModifiedPageWriter.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializePagefileBitmapsCache @ 0x140445150 (MiInitializePagefileBitmapsCache.c)
 *     MiFreeModifiedReservations @ 0x1404D5AC4 (MiFreeModifiedReservations.c)
 */

unsigned __int64 __fastcall MiCheckFreeModifiedReservations(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v3; // r12
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned __int64 v8; // r15
  __int64 *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdi
  KIRQL v12; // al
  char v13; // dl
  KIRQL v14; // r13
  volatile LONG *v15; // rcx
  signed __int32 v16[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 23456);
  v3 = *(_QWORD *)(a1 + 4368);
  v4 = *(_QWORD *)(a1 + 22528);
  result = *(_QWORD *)(a1 + 960);
  if ( result < 0x800 )
  {
    result = *(_QWORD *)(a1 + 22288) >> 2;
    if ( v1 > result )
      goto LABEL_6;
    v6 = 0LL;
    if ( v4 >= 0 )
      v6 = v4;
    result = v6 >> 2;
    if ( v1 > result )
    {
LABEL_6:
      v7 = *(_DWORD *)(a1 + 976);
      if ( v7 >= 0x40 )
      {
        result = *(_DWORD *)(a1 + 968) / v7;
        if ( (unsigned int)result < (unsigned int)dword_140FBF21C >> 3 )
        {
          result = *(unsigned int *)(a1 + 22296);
          v8 = 3 * (v1 >> 2);
          if ( (_DWORD)result )
          {
            v9 = (__int64 *)(a1 + 22304);
            v10 = (unsigned int)result;
            do
            {
              v11 = *v9;
              if ( (*(_BYTE *)(*v9 + 172) & 0x60) == 0 )
              {
                if ( v3 > v8 )
                {
                  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 200));
                  v13 = *(_BYTE *)(v11 + 175);
                  v14 = v12;
                  if ( (v13 & 1) == 0 )
                  {
                    *(_BYTE *)(v11 + 175) = v13 | 1;
                    MiInitializePagefileBitmapsCache(v11);
                    *(_DWORD *)(v11 + 92) = dword_140FBF21C;
                  }
                  v15 = (volatile LONG *)(v11 + 200);
                  if ( v14 == 17 )
                    ExReleaseSpinLockExclusiveFromDpcLevel(v15);
                  else
                    ExReleaseSpinLockExclusive(v15, v14);
                }
                result = MiFreeModifiedReservations(v11, 0LL);
              }
              ++v9;
              --v10;
            }
            while ( v10 );
          }
          ++*(_DWORD *)(a1 + 984);
          if ( v3 > v8 )
          {
            result = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
            *(_QWORD *)(a1 + 992) = result;
            _InterlockedOr(v16, 0);
            *(_WORD *)(a1 + 1004) |= 1u;
            ++*(_DWORD *)(a1 + 980);
          }
          *(_DWORD *)(a1 + 976) = 0;
          *(_QWORD *)(a1 + 968) = 0LL;
        }
      }
    }
  }
  return result;
}
