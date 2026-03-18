/*
 * XREFs of SendPositionChanged @ 0x14018E990
 * Callers:
 *     _lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_ @ 0x1401B4170 (_lambda_a418699817c89276d1581a788dfe45e0_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

__int64 __fastcall SendPositionChanged(_QWORD *a1)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[1] = *a1;
  v2[0] = 1LL;
  v2[3] = 0LL;
  v2[2] = KeQueryPerformanceCounter(0LL).QuadPart;
  return SendMessageTo(0, (int)v2, 32);
}
