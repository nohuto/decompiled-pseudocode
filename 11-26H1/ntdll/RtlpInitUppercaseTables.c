/*
 * XREFs of RtlpInitUppercaseTables @ 0x1800D5550
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800D5244 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x180160F70 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitUppercaseTables(__int16 a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( a1 && ((int)ZwGetNlsSectionPtr(14LL, 0LL, 0LL, &v3, 0LL) >= 0 ? (v2 = v3) : (v2 = 0LL, v3 = 0LL), v2) )
  {
    _InterlockedExchange64(&qword_1801C6038, v2 + 4);
    _InterlockedExchange64(&qword_1801C6040, v3 + 2LL * *(unsigned __int16 *)(v3 + 2) + 4);
    qword_1801C6030 = v3;
  }
  else
  {
    qword_1801C6038 = 0LL;
    qword_1801C6040 = 0LL;
    qword_1801C6030 = 0LL;
  }
  return 0LL;
}
