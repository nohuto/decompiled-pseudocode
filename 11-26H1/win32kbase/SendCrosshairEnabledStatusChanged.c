/*
 * XREFs of SendCrosshairEnabledStatusChanged @ 0x14018E950
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 *     _lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_ @ 0x1401B4170 (_lambda_a418699817c89276d1581a788dfe45e0_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

__int64 __fastcall SendCrosshairEnabledStatusChanged(unsigned __int8 a1)
{
  _OWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, sizeof(v2));
  LODWORD(v2[0]) = 7;
  DWORD2(v2[0]) = a1;
  return SendMessageTo(0, (int)v2, 32);
}
