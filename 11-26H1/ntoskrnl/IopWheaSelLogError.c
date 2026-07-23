/*
 * XREFs of IopWheaSelLogError @ 0x1405CCA30
 * Callers:
 *     DumpCtlCheckExitStatus @ 0x1405C89A0 (DumpCtlCheckExitStatus.c)
 *     IoEmitCrashDmpGUID @ 0x1405C8EC8 (IoEmitCrashDmpGUID.c)
 *     IopLogCallbackError @ 0x1405CC374 (IopLogCallbackError.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     EnterWheaIpmiContextNoLock @ 0x1406D8398 (EnterWheaIpmiContextNoLock.c)
 *     IpmiLibAddSelErrorRecord @ 0x1407222DC (IpmiLibAddSelErrorRecord.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall IopWheaSelLogError(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // ecx
  int v8; // [rsp+30h] [rbp-50h] BYREF
  __int16 v9; // [rsp+34h] [rbp-4Ch]
  int v10; // [rsp+36h] [rbp-4Ah]
  __int16 v11; // [rsp+3Ah] [rbp-46h]
  _DWORD Src[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h]
  int v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+54h] [rbp-2Ch]
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]
  int v20; // [rsp+68h] [rbp-18h]

  v3 = 0;
  if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
  {
    v18 = a1;
    Src[0] = 1733060695;
    Src[1] = 1;
    v13 = 44LL;
    v15 = -2147483545;
    v14 = -2147483545;
    v16 = 24;
    v17 = 12;
    v19 = a2;
    v20 = a3;
    WheaLogInternalEvent(Src);
  }
  else
  {
    v9 = 0;
    v11 = 0;
    v8 = a3;
    v10 = a1;
    v5 = EnterWheaIpmiContextNoLock();
    if ( v5 >= 0 )
      return (unsigned int)IpmiLibAddSelErrorRecord(v6, 10, a2, (unsigned int)&v8, 12);
    return (unsigned int)v5;
  }
  return v3;
}
