/*
 * XREFs of CmpValueEnumStackAdvance @ 0x140942ABC
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14048C600 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409426FC (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140942C58 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 */

__int64 __fastcall CmpValueEnumStackAdvance(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  ULONG_PTR v6; // rcx
  __int64 CellFlat; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edi
  unsigned int v12; // eax
  char v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0LL;
  v14 = 0;
  HvpGetCellContextInitialize(&v15);
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(_DWORD *)a1 == -1 )
      return (unsigned int)-2147483622;
    v2 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v2;
  }
  else
  {
    *(_WORD *)(a1 + 6) = *(_WORD *)(a1 + 12);
    *(_BYTE *)(a1 + 4) = 1;
    *(_DWORD *)(a1 + 8) = 0;
    v2 = 0LL;
  }
  *(_DWORD *)a1 = -1;
  while ( 1 )
  {
    v3 = *(__int16 *)(a1 + 6);
    if ( (v3 & 0x8000u) != 0LL )
      break;
    if ( (int)v3 >= 2 )
      v4 = *(_QWORD *)(a1 + 80) + 32LL * (__int16)(v3 - 2);
    else
      v4 = a1 + 32 * v3 + 16;
    while ( (unsigned int)v2 < *(_DWORD *)(v4 + 24) )
    {
      v5 = *(unsigned int *)(*(_QWORD *)(v4 + 8) + 4 * v2);
      v6 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(*(_QWORD *)v4 + 140LL) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v6, v5, (unsigned int *)&v15);
      else
        CellFlat = HvpGetCellPaged(v6, v5);
      v8 = *(_QWORD *)v4;
      if ( (*(_DWORD *)(*(_QWORD *)v4 + 160LL) & 0x80000) != 0 && (*(_BYTE *)(CellFlat + 16) & 2) != 0 )
      {
        if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v8, (__int64)&v15);
        else
          HvpReleaseCellPaged(v8, (unsigned int *)&v15);
        v2 = (unsigned int)++*(_DWORD *)(a1 + 8);
      }
      else
      {
        v9 = CmpValueEnumStackMatchingValueInUpperLayer(a1, *(unsigned __int16 *)(a1 + 6), CellFlat, &v14);
        v10 = *(_QWORD *)v4;
        v11 = v9;
        if ( (*(_BYTE *)(*(_QWORD *)v4 + 140LL) & 1) != 0 )
          HvpReleaseCellFlat(v10, (__int64)&v15);
        else
          HvpReleaseCellPaged(v10, (unsigned int *)&v15);
        if ( v11 < 0 )
          return (unsigned int)v11;
        v12 = *(_DWORD *)(a1 + 8);
        if ( !v14 )
        {
          v11 = 0;
          *(_DWORD *)a1 = *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4LL * v12);
          return (unsigned int)v11;
        }
        v2 = v12 + 1;
        *(_DWORD *)(a1 + 8) = v2;
      }
    }
    --*(_WORD *)(a1 + 6);
    *(_DWORD *)(a1 + 8) = 0;
    v2 = 0LL;
  }
  return (unsigned int)-2147483622;
}
