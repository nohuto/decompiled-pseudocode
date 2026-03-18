/*
 * XREFs of SerialNumberFromNvmeId @ 0x140022A5C
 * Callers:
 *     FormInquirySerialNumberData @ 0x14001ABD4 (FormInquirySerialNumberData.c)
 * Callees:
 *     HexFromUchar @ 0x14001AF54 (HexFromUchar.c)
 */

__int64 __fastcall SerialNumberFromNvmeId(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r11
  __int64 v7; // rbx
  unsigned int v8; // edi
  unsigned int v9; // r9d
  int v10; // r9d
  __int64 v11; // rbx
  int v12; // r10d
  __int64 v13; // r11
  int v14; // r9d
  __int64 v15; // rax

  v4 = a4;
  v5 = a3;
  if ( (a2 >> 1) + 2 * a2 > a4 || (a2 & 1) != 0 )
    return 3238002694LL;
  v7 = 0LL;
  v8 = a2 - 1;
  v9 = 0;
  if ( a2 != 1 )
  {
    do
    {
      HexFromUchar(*(_BYTE *)(v7 + a1), (_BYTE *)(v5 + v9), v4 - v9);
      v11 = (unsigned int)(v7 + 1);
      HexFromUchar(*(_BYTE *)(v11 + a1), (_BYTE *)(v13 + (unsigned int)(v10 + 2)), v12 - (v10 + 2));
      v15 = (unsigned int)(v14 + 2);
      v7 = (unsigned int)(v11 + 1);
      v9 = v14 + 3;
      *(_BYTE *)(v15 + v5) = 95;
    }
    while ( (unsigned int)v7 < v8 );
    if ( v9 )
    {
      if ( v9 <= v4 )
        *(_BYTE *)(v15 + v5) = 46;
    }
  }
  return 0LL;
}
