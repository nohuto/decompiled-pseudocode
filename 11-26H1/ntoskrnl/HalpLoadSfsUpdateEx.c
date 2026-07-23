/*
 * XREFs of HalpLoadSfsUpdateEx @ 0x14059D2B0
 * Callers:
 *     <none>
 * Callees:
 *     PrExtApplyPatch @ 0x1405322A8 (PrExtApplyPatch.c)
 *     PrExtExtractDataRecordTable @ 0x1406E0E7C (PrExtExtractDataRecordTable.c)
 *     PrExtGetRecord @ 0x1406E0F1C (PrExtGetRecord.c)
 */

__int64 __fastcall HalpLoadSfsUpdateEx(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+68h] [rbp+20h] BYREF
  __int64 v5; // [rsp+70h] [rbp+28h]
  __int64 v6; // [rsp+78h] [rbp+30h] BYREF

  v1 = *(void **)(a1 + 48);
  v3 = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  v4 = 0;
  for ( result = PrExtExtractDataRecordTable(v1); (int)result >= 0; result = PrExtApplyPatch(v3, v6, 14LL) )
  {
    result = PrExtGetRecord(v5, 0, 14, (unsigned int)&v3, (__int64)&v6, (__int64)&v4);
    if ( (int)result < 0 )
      break;
  }
  return result;
}
