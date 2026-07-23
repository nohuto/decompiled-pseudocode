/*
 * XREFs of ViFreeTrackedPool @ 0x140C4C9BC
 * Callers:
 *     ExpFreeHeapSpecialPool @ 0x140347BA8 (ExpFreeHeapSpecialPool.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

volatile signed __int64 *__fastcall ViFreeTrackedPool(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        char a3,
        int a4)
{
  ULONG_PTR v5; // rbp
  __int64 *v7; // rdi
  ULONG_PTR v8; // rsi
  unsigned __int64 v9; // r15
  _SLIST_HEADER *v10; // r14
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rbp
  unsigned int v13; // r13d
  volatile signed __int32 *v14; // rdx
  volatile signed __int64 *result; // rax
  __int64 v16; // rcx

  v5 = BugCheckParameter3;
  if ( a4 == 1 )
  {
    v7 = (__int64 *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 16);
  }
  else if ( (BugCheckParameter2 & 0xFFF) != 0 )
  {
    v5 = BugCheckParameter3 - 16;
    v7 = (__int64 *)(BugCheckParameter3 - 16 + BugCheckParameter2 - 8);
  }
  else
  {
    v7 = (__int64 *)(BugCheckParameter2 + BugCheckParameter3 - 8);
  }
  v8 = *v7;
  v9 = *v7 & 0xFFFFFFFFFFFFF000uLL;
  v10 = *(_SLIST_HEADER **)(v9 + 8);
  if ( (VfRuleClasses & 1) != 0 )
  {
    if ( (v8 & 3) != 0 || !MmIsAddressValidEx(*v7) )
      CarReportRuleViolationFromNt(196, 314LL, BugCheckParameter2, v8, (__int64)v7, 0, 0LL);
    if ( *(_QWORD *)(v9 + 16) != 556929861LL )
      CarReportRuleViolationFromNt(196, 315LL, BugCheckParameter2, v9 + 16, (__int64)v7, 0, 0LL);
    if ( ((unsigned __int8)v10 & 3) != 0 || !MmIsAddressValidEx((__int64)&v10[2].Region) )
      CarReportRuleViolationFromNt(196, 316LL, BugCheckParameter2, (ULONG_PTR)v10, v9 + 8, 0, 0LL);
    if ( v10[2].Region != 2557876544 )
      CarReportRuleViolationFromNt(196, 317LL, BugCheckParameter2, (ULONG_PTR)&v10[2].Region, 2557876544LL, 0, 0LL);
    if ( *(_QWORD *)v8 != BugCheckParameter2 )
      CarReportRuleViolationFromNt(196, 318LL, BugCheckParameter2, *(_QWORD *)v8, v8, 0, 0LL);
    v11 = (_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v8 + 16) != v5 )
      CarReportRuleViolationFromNt(196, 319LL, BugCheckParameter2, v5, v8 + 16, 0, 0LL);
  }
  else
  {
    v11 = (_QWORD *)(v8 + 16);
  }
  *v11 |= 1uLL;
  RtlpInterlockedPushEntrySList(v10 + 5, (PSLIST_ENTRY)v8);
  v12 = -(__int64)v5;
  v13 = a3 & 1;
  v14 = &dword_140F08A64;
  if ( !v13 )
    v14 = &dword_140F08A68;
  result = &qword_140F08A78;
  if ( !v13 )
    result = &qword_140F08A80;
  v16 = v13 ^ 1LL;
  _InterlockedAdd64((volatile signed __int64 *)&v10[8].Alignment + v16, v12);
  _InterlockedDecrement((volatile signed __int32 *)&v10[7] + v16);
  _InterlockedAdd64(result, v12);
  _InterlockedDecrement(v14);
  _InterlockedIncrement(&dword_140F08A50);
  return result;
}
