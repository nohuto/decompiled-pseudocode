/*
 * XREFs of SendSuppressionStateChanged @ 0x14021C090
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

__int64 __fastcall SendSuppressionStateChanged(unsigned __int8 a1)
{
  _OWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, sizeof(v2));
  LODWORD(v2[0]) = 4;
  DWORD2(v2[0]) = a1;
  return SendMessageTo(0, (int)v2, 32);
}
