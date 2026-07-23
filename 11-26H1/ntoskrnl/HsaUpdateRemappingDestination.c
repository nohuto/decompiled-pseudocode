/*
 * XREFs of HsaUpdateRemappingDestination @ 0x1405AD5E0
 * Callers:
 *     <none>
 * Callees:
 *     HsaInvalidateRemappingTableEntries @ 0x140477CB8 (HsaInvalidateRemappingTableEntries.c)
 *     HsaGetDeviceAperture @ 0x1405300CC (HsaGetDeviceAperture.c)
 *     IvtUpdateExtendedDestination @ 0x1405AA46C (IvtUpdateExtendedDestination.c)
 */

__int64 __fastcall HsaUpdateRemappingDestination(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int128 v5; // rax
  unsigned int v6; // edi
  char v7; // bl
  __int64 v9; // r13
  unsigned int v10; // esi
  __int64 v11; // rbp
  __int64 v12; // r14
  unsigned __int64 v13; // r10
  int v14; // ebx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int128 v17; // rt0
  unsigned __int8 v18; // tt
  unsigned int i; // [rsp+A0h] [rbp+8h]
  char v21; // [rsp+A8h] [rbp+10h]

  *((_QWORD *)&v5 + 1) = a2;
  v21 = BYTE8(v5);
  v6 = 0;
  v7 = BYTE8(v5);
  for ( i = 0; v6 < dword_140F8774C; i = v6 )
  {
    *(_QWORD *)&v5 = HsaGetDeviceAperture(v6 << 9);
    v9 = v5;
    if ( !v6 || *(_QWORD *)(v5 + 16) )
    {
      v10 = 0;
      if ( *(_DWORD *)(a1 + 180) )
      {
        do
        {
          v11 = *(_QWORD *)(v9 + 16);
          v12 = 16LL * v10;
          *((_QWORD *)&v5 + 1) = v10;
          v13 = *(_QWORD *)(v12 + v11);
          if ( (v13 & 1) != 0 )
          {
            if ( !v7
              || (*((_QWORD *)&v5 + 1) = (unsigned __int64)v10 >> 3,
                  BYTE8(v5) = *(char *)(*((_QWORD *)&v5 + 1) + *(_QWORD *)(v9 + 40)) >> (v10 & 7),
                  (BYTE8(v5) & 1) != 0) )
            {
              v14 = (*(unsigned __int8 *)(v12 + v11 + 15) << 24) | (v13 >> 8) & 0xFFFFFF;
              LODWORD(v5) = IvtUpdateExtendedDestination(v14, (v13 & 0x40) != 0, a3, a5, a4);
              if ( v14 != (_DWORD)v5 )
              {
                v15 = *(_QWORD *)(v12 + v11 + 8) & 0xFFFFFFFFFFFFFFLL | ((unsigned __int64)((unsigned int)v5 & 0xFF000000) << 32);
                v16 = *(_QWORD *)(v12 + v11) & 0xFFFFFFFF000000FFuLL | ((unsigned __int64)(v5 & 0xFFFFFF) << 8);
                v5 = *(_OWORD *)(v12 + v11);
                do
                {
                  v17 = v5;
                  v18 = _InterlockedCompareExchange128(
                          (volatile signed __int64 *)(v12 + v11),
                          v15,
                          v16,
                          (signed __int64 *)&v17);
                  v5 = v17;
                }
                while ( !v18 );
              }
              v7 = v21;
            }
          }
          ++v10;
        }
        while ( v10 < *(_DWORD *)(a1 + 180) );
        v6 = i;
      }
    }
    ++v6;
  }
  return HsaInvalidateRemappingTableEntries(a1, *((__int64 *)&v5 + 1), 0);
}
