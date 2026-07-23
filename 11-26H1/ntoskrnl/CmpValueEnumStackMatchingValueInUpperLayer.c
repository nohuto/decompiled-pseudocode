/*
 * XREFs of CmpValueEnumStackMatchingValueInUpperLayer @ 0x140942C58
 * Callers:
 *     CmpValueEnumStackAdvance @ 0x140942ABC (CmpValueEnumStackAdvance.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140942D30 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpFindNameInListCellWithStatus @ 0x140942DA0 (CmpFindNameInListCellWithStatus.c)
 */

__int64 __fastcall CmpValueEnumStackMatchingValueInUpperLayer(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        char *a4)
{
  unsigned __int16 v8; // bp
  int v9; // ebp
  char v10; // bl
  __int64 result; // rax
  ULONG_PTR *EntryAtLayerHeight; // rax
  UNICODE_STRING v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v13 = 0LL;
  RtlInitUnicodeString(&v13, 0LL);
  v8 = a3[8];
  v13.Buffer = a3 + 10;
  v9 = (v8 & 1) << 16;
  v13.Length = a3[1];
  v10 = 0;
  v13.MaximumLength = v13.Length;
  while ( ++a2 <= *(_WORD *)(a1 + 12) )
  {
    EntryAtLayerHeight = (ULONG_PTR *)CmpValueEnumStackGetEntryAtLayerHeight(a1, a2);
    result = CmpFindNameInListCellWithStatus(*EntryAtLayerHeight, v9, 0LL, (__int64)&v14);
    if ( (int)result >= 0 )
    {
      v10 = 1;
      break;
    }
    if ( (_DWORD)result != -1073741772 )
      return result;
  }
  *a4 = v10;
  return 0LL;
}
