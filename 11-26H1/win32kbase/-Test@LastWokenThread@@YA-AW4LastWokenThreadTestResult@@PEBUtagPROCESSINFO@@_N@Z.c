/*
 * XREFs of ?Test@LastWokenThread@@YA?AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z @ 0x140141540
 * Callers:
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?Test@CLastWokenThread@@QEAA?AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z @ 0x14014156C (-Test@CLastWokenThread@@QEAA-AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z.c)
 */

__int64 __fastcall LastWokenThread::Test(__int64 a1, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return CLastWokenThread::Test(*(_QWORD *)(*(_QWORD *)(a1 + 1208) + 3048LL), a1, a3);
}
