/*
 * XREFs of SendCrosshairPropertiesChanged @ 0x14008D180
 * Callers:
 *     _lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_ @ 0x1401B4170 (_lambda_a418699817c89276d1581a788dfe45e0_--_lambda_invoker_cdecl_.c)
 *     WritePointerDeviceSettings @ 0x1401DF9A0 (WritePointerDeviceSettings.c)
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

__int64 __fastcall SendCrosshairPropertiesChanged(int a1)
{
  _DWORD v2[8]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, sizeof(v2));
  v2[2] = a1;
  v2[0] = 8;
  return SendMessageTo(0, (int)v2, 32);
}
