/*
 * XREFs of WheapPfaLogPageMonitorRemoval @ 0x14084A058
 * Callers:
 *     WheapPfaMemoryCheck @ 0x14084A0EC (WheapPfaMemoryCheck.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x14084A3C4 (WheapPfaRetireExpiredMemoryEntries.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall WheapPfaLogPageMonitorRemoval(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r8
  int v4; // eax
  _DWORD Src[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h]
  int v8; // [rsp+30h] [rbp-30h]
  int v9; // [rsp+34h] [rbp-2Ch]
  int v10; // [rsp+38h] [rbp-28h]
  int v11; // [rsp+3Ch] [rbp-24h]
  int v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+44h] [rbp-1Ch]
  int v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+4Ch] [rbp-14h]

  v3 = a3 - *(_QWORD *)(a1 + 24);
  v12 = a2;
  v14 = *(unsigned __int16 *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 40);
  v13 = v3 / 0x989680;
  Src[0] = 1733060695;
  Src[1] = 1;
  v7 = 48LL;
  v9 = -2147483641;
  v8 = 1280201291;
  v10 = 2;
  v11 = 16;
  v15 = v4;
  return WheaLogInternalEvent(Src);
}
