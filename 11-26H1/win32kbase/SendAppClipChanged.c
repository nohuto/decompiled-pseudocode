/*
 * XREFs of SendAppClipChanged @ 0x14008AB70
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

__int64 __fastcall SendAppClipChanged(_OWORD *a1)
{
  _DWORD v2[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, 32);
  v2[0] = 2;
  *(_OWORD *)&v2[2] = *a1;
  return SendMessageTo(0LL, v2, 32LL);
}
