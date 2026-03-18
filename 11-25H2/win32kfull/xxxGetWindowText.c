/*
 * XREFs of xxxGetWindowText @ 0x1400C28CC
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 * Callees:
 *     ?xxxDoSend@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1400C2940 (-xxxDoSend@@YA_JPEAUtagWND@@I_K_J@Z.c)
 */

__int64 __fastcall xxxGetWindowText(struct tagWND *a1, _WORD *a2)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+24h] [rbp-14h]
  _WORD *v7; // [rsp+28h] [rbp-10h]

  v6 = 512;
  v5 = 0;
  *a2 = 0;
  v7 = a2;
  result = xxxDoSend(a1, (unsigned int)a2, 0x100uLL, (__int64)&v5);
  v3 = v5;
  if ( v5 > (unsigned __int64)(v6 & 0x7FFFFFFF) - 2 )
    v3 = (v6 & 0x7FFFFFFF) - 2;
  v4 = v3 >> 1;
  if ( (unsigned int)result >= v4 )
    result = v4;
  v7[result] = 0;
  return result;
}
