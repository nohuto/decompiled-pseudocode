/*
 * XREFs of RtlpInitUppercaseTables @ 0x1800DD2A0
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800DCF9C (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x180160E70 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitUppercaseTables(__int16 a1)
{
  PVOID v2; // rax
  PVOID SectionPointer; // [rsp+48h] [rbp+10h] BYREF

  SectionPointer = 0LL;
  if ( a1
    && (ZwGetNlsSectionPtr(0xEu, 0, 0LL, &SectionPointer, 0LL) >= 0
      ? (v2 = SectionPointer)
      : (v2 = 0LL, SectionPointer = 0LL),
        v2) )
  {
    _InterlockedExchange64(&qword_1801C5038, (__int64)v2 + 4);
    _InterlockedExchange64(
      &qword_1801C5040,
      (__int64)SectionPointer + 2 * *((unsigned __int16 *)SectionPointer + 1) + 4);
    qword_1801C5030 = (__int64)SectionPointer;
  }
  else
  {
    qword_1801C5038 = 0LL;
    qword_1801C5040 = 0LL;
    qword_1801C5030 = 0LL;
  }
  return 0LL;
}
