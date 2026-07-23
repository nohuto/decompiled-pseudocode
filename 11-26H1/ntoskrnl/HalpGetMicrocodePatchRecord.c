/*
 * XREFs of HalpGetMicrocodePatchRecord @ 0x1405958A4
 * Callers:
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 * Callees:
 *     HalpGetCurrentMicrocodePlatform @ 0x140595854 (HalpGetCurrentMicrocodePlatform.c)
 *     PrExtExtractDataRecordTable @ 0x1406E0E7C (PrExtExtractDataRecordTable.c)
 *     PrExtGetRecord @ 0x1406E0F1C (PrExtGetRecord.c)
 */

__int64 __fastcall HalpGetMicrocodePatchRecord(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // r9
  unsigned int Record; // ecx
  int v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+48h] [rbp-8h] BYREF

  v9 = 0LL;
  v8 = 0;
  v10 = 0LL;
  v11 = 0LL;
  result = HalpGetCurrentMicrocodePlatform();
  if ( (int)result >= 0 )
  {
    if ( (int)PrExtExtractDataRecordTable(*(PVOID *)(v6 + 48)) >= 0 )
    {
      Record = PrExtGetRecord(v9, 0, MicrocodeRecordType, (unsigned int)&v10, (__int64)&v11, (__int64)&v8);
      result = 3221225485LL;
      if ( Record != -1073741811 )
      {
        *a2 = v10;
        *a3 = v11;
        return Record;
      }
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
