/*
 * XREFs of MiMarkSystemVaAllocated @ 0x1405044E8
 * Callers:
 *     MiReservePoolMemory @ 0x1402A41EC (MiReservePoolMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x1402A42B4 (MiSystemVaToDynamicBitmap.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     MiExtendDynamicBitMap @ 0x1404F924C (MiExtendDynamicBitMap.c)
 *     MiSystemVaPreserveGuardPage @ 0x1406FA448 (MiSystemVaPreserveGuardPage.c)
 */

__int64 __fastcall MiMarkSystemVaAllocated(int a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // r13
  unsigned int v6; // ebp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  volatile LONG *v14; // rcx
  KIRQL v15; // r12
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r14
  __int64 *v18; // rdx
  __int64 v19; // r10
  __int64 *v20; // r9
  bool v21; // zf
  bool i; // zf
  volatile LONG *v23; // rcx

  v5 = a1;
  v6 = 1;
  v7 = (a3 - a2) >> 3;
  v8 = a2 << 25 >> 16 << 25 >> 16;
  v9 = (unsigned __int64 *)MiSystemVaToDynamicBitmap(a1);
  v10 = v9[4];
  if ( v8 < v10 )
    return 0LL;
  v12 = (v8 - v10) >> 21;
  v13 = v12 + v7;
  v14 = (volatile LONG *)(v9 + 8);
  if ( KeGetCurrentIrql() == 2 )
  {
    v15 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v14);
  }
  else
  {
    v15 = ExAcquireSpinLockExclusive(v14);
  }
  if ( !a5
    || v13 <= *v9
    || v13 < v9[2]
    && (unsigned int)MiExtendDynamicBitMap((__int64)v9, v9, (v13 - *v9 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, v5) )
  {
    if ( !a4 )
    {
      if ( v13 == v9[2] && (unsigned int)MiSystemVaPreserveGuardPage(v9, (unsigned int)v5) )
        --v7;
      RtlClearBitsEx((__int64)v9, v12, v7);
      v7 = -(__int64)v7;
      goto LABEL_31;
    }
    if ( v12 < *v9 )
    {
      if ( v7 > 1 )
      {
        if ( *v9 - v12 >= v7 )
        {
          v16 = v9[1];
          v17 = v13 - 1;
          v18 = (__int64 *)(v16 + 8 * (v12 >> 6));
          v19 = *v18;
          v20 = (__int64 *)(v16 + 8 * (v17 >> 6));
          if ( v18 == v20 )
          {
            v21 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << v12) & v19) == 0;
LABEL_25:
            if ( v21 )
              goto LABEL_26;
          }
          else
          {
            for ( i = ((-1LL << v12) & v19) == 0; i; i = *v18 == 0 )
            {
              if ( ++v18 == v20 )
              {
                v21 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17) & *v18) == 0;
                goto LABEL_25;
              }
            }
          }
        }
      }
      else if ( v7 == 1 && !_bittest64((const signed __int64 *)(v9[1] + 8 * (v12 >> 6)), v12 & 0x3F) )
      {
LABEL_26:
        RtlSetBitsEx((__int64)v9, v12, v7);
LABEL_31:
        _InterlockedAdd64((volatile signed __int64 *)&MiState + v5 + 5769, v7);
        goto LABEL_32;
      }
    }
  }
  v6 = 0;
LABEL_32:
  v23 = (volatile LONG *)(v9 + 8);
  if ( v15 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v23);
  else
    ExReleaseSpinLockExclusive(v23, v15);
  return v6;
}
