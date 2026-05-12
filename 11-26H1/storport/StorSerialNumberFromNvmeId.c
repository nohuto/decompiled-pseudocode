/*
 * XREFs of StorSerialNumberFromNvmeId @ 0x14004B8A0
 * Callers:
 *     StorBuildNVMeSerialNumber @ 0x140047788 (StorBuildNVMeSerialNumber.c)
 *     StorBuildZnsSerialNumber @ 0x1400C711C (StorBuildZnsSerialNumber.c)
 * Callees:
 *     RaidHexFromUchar @ 0x140053630 (RaidHexFromUchar.c)
 */

__int64 __fastcall StorSerialNumberFromNvmeId(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // edi
  unsigned int v9; // r9d
  int v10; // r9d
  __int64 v11; // rbx
  int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rax

  v4 = a4;
  v5 = a3;
  v6 = a1;
  if ( (a2 >> 1) + 2 * a2 > a4 || (a2 & 1) != 0 )
    return 3238002694LL;
  v7 = 0LL;
  v8 = a2 - 1;
  v9 = 0;
  if ( a2 != 1 )
  {
    do
    {
      LOBYTE(a1) = *(_BYTE *)(v7 + v6);
      RaidHexFromUchar(a1, v5 + v9, v4 - v9);
      v11 = (unsigned int)(v7 + 1);
      LOBYTE(v14) = *(_BYTE *)(v11 + v6);
      RaidHexFromUchar(v14, v13 + (unsigned int)(v10 + 2), (unsigned int)(v12 - (v10 + 2)));
      v16 = (unsigned int)(v15 + 2);
      v7 = (unsigned int)(v11 + 1);
      v9 = v15 + 3;
      *(_BYTE *)(v16 + v5) = 95;
    }
    while ( (unsigned int)v7 < v8 );
    if ( v9 )
    {
      if ( v9 <= v4 )
        *(_BYTE *)(v16 + v5) = 46;
    }
  }
  return 0LL;
}
