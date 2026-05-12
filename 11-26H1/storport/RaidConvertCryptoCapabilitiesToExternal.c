/*
 * XREFs of RaidConvertCryptoCapabilitiesToExternal @ 0x140071458
 * Callers:
 *     RaidGetStorageAdapterCryptoProperty @ 0x14006C6B0 (RaidGetStorageAdapterCryptoProperty.c)
 *     RaidUnitGetCryptoProperty @ 0x1400A754C (RaidUnitGetCryptoProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidConvertCryptoCapabilitiesToExternal(__int64 a1, _QWORD *a2, unsigned __int16 *a3, int a4)
{
  __int64 v5; // r10
  unsigned int v6; // r11d
  unsigned int v7; // ecx
  int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rdx

  v5 = *(_QWORD *)(a1 + 24);
  v6 = 32 * (a3[1] + 1);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  if ( v7 < 8 )
    return 3221225507LL;
  *(_DWORD *)v5 = 1;
  *(_DWORD *)(v5 + 4) = v6;
  if ( v7 >= v6 )
  {
    *(_DWORD *)(v5 + 8) = *a3;
    v9 = a3[1];
    *(_DWORD *)(v5 + 24) = a4;
    v10 = 0;
    *(_DWORD *)(v5 + 12) = v9;
    *(_DWORD *)(v5 + 16) = 32;
    *(_DWORD *)(v5 + 20) = 32;
    *(_BYTE *)(v5 + 28) = *((_BYTE *)a3 + 12);
    for ( *(_BYTE *)(v5 + 29) = *((_BYTE *)a3 + 4); v10 < a3[1]; *(_BYTE *)(v11 + v5 + 60) = a3[4 * v12 + 15] )
    {
      v11 = 32LL * v10;
      v12 = v10++;
      v12 *= 2LL;
      *(_DWORD *)(v11 + v5 + 32) = 1;
      *(_DWORD *)(v11 + v5 + 36) = 32;
      *(_DWORD *)(v11 + v5 + 40) = a3[4 * v12 + 8];
      *(_DWORD *)(v11 + v5 + 44) = *(_DWORD *)&a3[4 * v12 + 10];
      *(_DWORD *)(v11 + v5 + 48) = *(_DWORD *)&a3[4 * v12 + 12];
      *(_DWORD *)(v11 + v5 + 52) = a3[4 * v12 + 9];
      *(_WORD *)(v11 + v5 + 56) = a3[4 * v12 + 14];
      *(_WORD *)(v11 + v5 + 58) = 0;
    }
    *a2 = v6;
  }
  else
  {
    *a2 = 8LL;
  }
  return 0LL;
}
