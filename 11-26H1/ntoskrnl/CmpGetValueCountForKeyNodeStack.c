/*
 * XREFs of CmpGetValueCountForKeyNodeStack @ 0x14048C600
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14048C128 (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14048C7C0 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpValueEnumStackAdvance @ 0x140942ABC (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140943268 (CmpValueEnumStackCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140944550 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A4FF48 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackCleanup @ 0x140A50038 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackAdvance @ 0x140A5009C (CmpSortedValueEnumStackAdvance.c)
 *     CmpValueEnumStackInitialize @ 0x140AEDC18 (CmpValueEnumStackInitialize.c)
 *     CmpSortedValueEnumStackInitialize @ 0x140B071C4 (CmpSortedValueEnumStackInitialize.c)
 */

__int64 __fastcall CmpGetValueCountForKeyNodeStack(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // r10
  _QWORD *EntryAtLayerHeight; // rax
  char v6; // r9
  __int16 v7; // r10
  __int16 v8; // r11
  int v9; // ebx
  int i; // edi
  int v11; // eax
  int v13; // eax
  int v14; // eax
  _BYTE v15[96]; // [rsp+20h] [rbp-99h] BYREF
  _BYTE v16[96]; // [rsp+80h] [rbp-39h] BYREF

  memset_0(v15, 0, 0x58uLL);
  memset_0(v16, 0, 0x58uLL);
  CmpSortedValueEnumStackInitialize(v15);
  CmpValueEnumStackInitialize(v16);
  v4 = *a1;
  if ( *a1 < 0 )
    goto LABEL_13;
  do
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v4);
    if ( EntryAtLayerHeight[2] && (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight) )
      break;
    v4 = v7 - 1;
  }
  while ( v4 >= 0 );
  if ( !v8 )
  {
LABEL_13:
    *a2 = 0;
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  if ( !v6 )
  {
    *a2 = *(_DWORD *)(*(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, 0LL) + 16) + 36LL);
    goto LABEL_14;
  }
  if ( v8 > 1 )
  {
    v13 = CmpSortedValueEnumStackStartFromKeyNodeStack(v15, a1);
    v9 = v13;
    if ( v13 >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        v14 = CmpSortedValueEnumStackAdvance(v15);
        v9 = v14;
        if ( v14 == -2147483622 )
          break;
        if ( v14 < 0 )
          goto LABEL_15;
      }
      goto LABEL_16;
    }
    if ( v13 != -1073741670 )
      goto LABEL_15;
    CmpSortedValueEnumStackCleanup(v15);
    CmpSortedValueEnumStackInitialize(v15);
  }
  v9 = CmpValueEnumStackStartFromKeyNodeStack(v16, a1);
  if ( v9 >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      v11 = CmpValueEnumStackAdvance(v16);
      v9 = v11;
      if ( v11 == -2147483622 )
        break;
      if ( v11 < 0 )
        goto LABEL_15;
    }
LABEL_16:
    *a2 = i;
    goto LABEL_14;
  }
LABEL_15:
  CmpValueEnumStackCleanup(v16);
  CmpSortedValueEnumStackCleanup(v15);
  return (unsigned int)v9;
}
