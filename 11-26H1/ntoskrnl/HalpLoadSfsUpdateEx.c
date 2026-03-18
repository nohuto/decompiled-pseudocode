/*
 * XREFs of HalpLoadSfsUpdateEx @ 0x14059AB30
 * Callers:
 *     <none>
 * Callees:
 *     PrExtApplyPatch @ 0x14052FDA8 (PrExtApplyPatch.c)
 *     PrExtExtractDataRecordTable @ 0x1406DCBDC (PrExtExtractDataRecordTable.c)
 *     PrExtGetRecord @ 0x1406DCC7C (PrExtGetRecord.c)
 */

__int64 __fastcall HalpLoadSfsUpdateEx(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF
  int v6; // [rsp+68h] [rbp+20h] BYREF
  __int64 v7; // [rsp+70h] [rbp+28h] BYREF
  __int64 v8; // [rsp+78h] [rbp+30h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v4 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  v5 = 0;
  v6 = 0;
  result = PrExtExtractDataRecordTable(v1, &v7, &v5);
  if ( (int)result >= 0 )
  {
    v3 = v5;
    do
    {
      result = PrExtGetRecord(v7, v3, 14, (unsigned int)&v4, (__int64)&v8, (__int64)&v6);
      if ( (int)result < 0 )
        break;
      result = PrExtApplyPatch(v4, v8, 14LL);
    }
    while ( (int)result >= 0 );
  }
  return result;
}
