/*
 * XREFs of HalpIommuProcessMemoryErrata @ 0x140590758
 * Callers:
 *     HalpIommuProcessReservationsInternal @ 0x1405908A8 (HalpIommuProcessReservationsInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpIommuProcessMemoryErrata(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 i; // r10
  __int64 v7; // r11
  __int64 j; // r8
  __int64 v9; // rdx
  ULONG_PTR k; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  bool v14; // zf

  for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(a2 + 8 * i);
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v7 + 32); j = (unsigned int)(j + 1) )
    {
      v9 = v7 + 24 * j;
      if ( !*(_BYTE *)(v9 + 56) )
      {
        for ( k = *(_QWORD *)(a3 + 32); k != a3 + 32; k = *(_QWORD *)k )
        {
          v11 = *(int *)(k + 24);
          if ( (_DWORD)v11 != 30 )
          {
            if ( (unsigned int)v11 > 0x25 || (v12 = 0x2580C00048LL, !_bittest64(&v12, v11)) )
            {
              v13 = *(_QWORD *)(k + 32) << 12;
              if ( *(_QWORD *)(v9 + 40) <= v13 + (*(_QWORD *)(k + 40) << 12) - 1LL && *(_QWORD *)(v9 + 48) >= v13 )
              {
                v14 = HalpIommuDmaGuardTableOptIn == 0;
                *(_BYTE *)(v9 + 56) = 1;
                if ( !v14 )
                  KeBugCheckEx(0x5Cu, 0x501uLL, v9 + 40, k, 0LL);
              }
            }
          }
        }
      }
    }
  }
  return 1LL;
}
