/*
 * XREFs of KiEventClockStateChange @ 0x14048CBA0
 * Callers:
 *     KeClockInterruptNotify @ 0x1402216C0 (KeClockInterruptNotify.c)
 *     KiResumeClockTimer @ 0x140523C58 (KiResumeClockTimer.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405ED634 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405EDA84 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall KiEventClockStateChange(int a1, char a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  int v5; // ecx
  __int128 v6; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-20h]
  _QWORD v8[2]; // [rsp+48h] [rbp-18h] BYREF

  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v7 = 0LL;
    v6 = 0LL;
    LOBYTE(v6) = a1;
    BYTE1(v6) = a2;
    if ( a1 && (v5 = a1 - 1) != 0 )
    {
      if ( v5 == 1 )
        *((_QWORD *)&v6 + 1) = KiClockTimerNextTickTime;
    }
    else
    {
      *((_QWORD *)&v6 + 1) = *a3;
      v7 = *a4;
    }
    v8[1] = 24LL;
    v8[0] = &v6;
    return EtwTraceKernelEvent((int)v8, 1, 0x40100000u, 3927, 1538);
  }
  return result;
}
