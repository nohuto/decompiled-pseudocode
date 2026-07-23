/*
 * XREFs of IopWheaSelLogCheckPoint @ 0x1405CC890
 * Callers:
 *     <none>
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     WheaSelLogCheckPointNoLock @ 0x1406D8470 (WheaSelLogCheckPointNoLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall IopWheaSelLogCheckPoint(unsigned int a1, unsigned int a2)
{
  int v2; // ebx
  _DWORD Src[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  unsigned int v7; // [rsp+30h] [rbp-28h]
  unsigned int v8; // [rsp+34h] [rbp-24h]
  int v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v11; // [rsp+40h] [rbp-18h]

  v2 = 0;
  if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
  {
    Src[0] = 1733060695;
    Src[1] = 1;
    v6 = 36LL;
    v8 = a1;
    v7 = a1;
    v9 = 24;
    v10 = 4;
    v11 = a2;
    WheaLogInternalEvent(Src);
  }
  else
  {
    v2 = WheaSelLogCheckPointNoLock(81LL, a1);
    if ( v2 >= 0 )
      return (unsigned int)WheaSelLogCheckPointNoLock(82LL, a2);
  }
  return (unsigned int)v2;
}
