/*
 * XREFs of WPP_SF_qii @ 0x180102870
 * Callers:
 *     _lambda_e56d8910bbf57adb71c0704c39bb5897_::operator() @ 0x180100F20 (_lambda_e56d8910bbf57adb71c0704c39bb5897_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qii(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_315cf95596543faf822237737ca2f47c_Traceguids, 10LL, (__int64 *)va);
}
