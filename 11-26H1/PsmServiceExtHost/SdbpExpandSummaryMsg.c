/*
 * XREFs of SdbpExpandSummaryMsg @ 0x180090D20
 * Callers:
 *     SdbpConvertResourcesToStrings @ 0x180090B18 (SdbpConvertResourcesToStrings.c)
 * Callees:
 *     AslStringDuplicate @ 0x180099864 (AslStringDuplicate.c)
 *     AslStringReplaceArray @ 0x180099DCC (AslStringReplaceArray.c)
 */

__int64 __fastcall SdbpExpandSummaryMsg(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v7[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v8[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF

  v9 = 0LL;
  v8[0] = L"<APP>";
  v8[1] = L"<VENDOR>";
  v8[2] = L"<PARAMETER1>";
  a5 = a1;
  if ( a1 )
  {
    v7[0] = a2;
    v7[1] = a3;
    v7[2] = a4;
    if ( (int)AslStringReplaceArray(&v9, a1, v8, v7) >= 0 )
      return v9;
  }
  AslStringDuplicate(&a5, a1);
  return a5;
}
