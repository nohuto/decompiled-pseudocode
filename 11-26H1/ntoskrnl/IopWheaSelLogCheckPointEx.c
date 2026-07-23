/*
 * XREFs of IopWheaSelLogCheckPointEx @ 0x1405CC940
 * Callers:
 *     IoEmitCrashDmpGUID @ 0x1405C8EC8 (IoEmitCrashDmpGUID.c)
 *     IoSaveBugCheckProgress @ 0x1405C9E10 (IoSaveBugCheckProgress.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     EnterWheaIpmiContextNoLock @ 0x1406D8398 (EnterWheaIpmiContextNoLock.c)
 *     IpmiLibAddSelCheckpointRecordEx @ 0x140722270 (IpmiLibAddSelCheckpointRecordEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IopWheaSelLogCheckPointEx(int a1, const void *a2, unsigned __int16 a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v4; // di
  int v7; // eax
  __int64 v8; // rcx
  _DWORD Src[8]; // [rsp+20h] [rbp-148h] BYREF
  _BYTE v11[256]; // [rsp+40h] [rbp-128h] BYREF

  v3 = 0;
  v4 = 256;
  if ( a3 < 0x100u )
    v4 = a3;
  if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
  {
    memset_0(v11, 0, sizeof(v11));
    Src[7] = v4;
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = v4 + 32;
    Src[3] = 0;
    Src[5] = a1;
    Src[4] = a1;
    Src[6] = 24;
    memmove(v11, a2, v4);
    WheaLogInternalEvent(Src);
  }
  else
  {
    v7 = EnterWheaIpmiContextNoLock();
    if ( v7 >= 0 )
      return (unsigned int)IpmiLibAddSelCheckpointRecordEx(v8, (unsigned __int16)a1, a2, v4);
    return (unsigned int)v7;
  }
  return v3;
}
