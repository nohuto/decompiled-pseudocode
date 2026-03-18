/*
 * XREFs of ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x140299E58
 * Callers:
 *     xxxSetActivePpiForMonitor @ 0x14023532C (xxxSetActivePpiForMonitor.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall IsMonitorConnectedToInternalPanel(struct tagMONITOR *a1)
{
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v5; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v6; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v7[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+40h] [rbp-C0h]
  __int64 v9; // [rsp+44h] [rbp-BCh]

  v6 = 0LL;
  v2 = 1;
  v5 = 0;
  v4 = 1;
  if ( (int)((__int64 (__fastcall *)(__int64, int *, _BYTE *, _QWORD))DrvQueryDisplayConfig)(3221225474LL, &v4, v7, 0LL) < 0
    || !v4
    || !(unsigned int)DrvGetWDDMAdapterInfo(*((_QWORD *)a1 + 10), 0LL, &v6, &v5) )
  {
    return 0LL;
  }
  if ( (_DWORD)v6 != v8 || __PAIR64__(v5, HIDWORD(v6)) != v9 )
    return 0;
  return v2;
}
