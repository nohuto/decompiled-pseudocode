/*
 * XREFs of KiBugCheckProgressCpusFrozen @ 0x1405EA0F4
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     WheaSelLogCheckPointNoLock @ 0x1406D8470 (WheaSelLogCheckPointNoLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall KiBugCheckProgressCpusFrozen(char a1)
{
  unsigned int v1; // edx
  struct _KPRCB *v2; // r8
  char result; // al
  __int64 v4; // rdx
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]

  Src = 0LL;
  v1 = 0;
  v6 = 0LL;
  while ( v1 < (unsigned int)KeNumberProcessors_0 )
  {
    v2 = (struct _KPRCB *)KiProcessorBlock[v1];
    if ( v2 != KeGetCurrentPrcb() )
    {
      result = v2->IpiFrozen & 0xF;
      if ( result != 2 )
        return result;
    }
    ++v1;
  }
  v4 = (unsigned int)(a1 != 0) - 2147483552;
  if ( !*(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
    return WheaSelLogCheckPointNoLock(81LL, v4);
  *(_QWORD *)&Src = 0x1674C6857LL;
  *((_QWORD *)&Src + 1) = 32LL;
  *(_QWORD *)&v6 = (unsigned int)v4 | 0x8000006000000000uLL;
  *((_QWORD *)&v6 + 1) = 24LL;
  return WheaLogInternalEvent(&Src);
}
