/*
 * XREFs of SetTimerCoalescingTolerance @ 0x1400D7B20
 * Callers:
 *     ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x14016C8D4 (-KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?StartScreenSaver@@YAXH@Z @ 0x14026CCBC (-StartScreenSaver@@YAXH@Z.c)
 *     InitTimerCoalescing @ 0x14028BD70 (InitTimerCoalescing.c)
 * Callees:
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1400D718C (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     IsCurrentSessionServiceSession @ 0x1400D8C14 (IsCurrentSessionServiceSession.c)
 */

void (__fastcall **__fastcall SetTimerCoalescingTolerance(int a1))(struct BLTINFO *)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  void (__fastcall **result)(struct BLTINFO *); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx

  v1 = a1;
  v2 = IsCurrentSessionServiceSession();
  result = (void (__fastcall **)(struct BLTINFO *))W32GetUserSessionState(v4, v3);
  v6 = (unsigned int)-v2;
  *((_DWORD *)result + 15695) = v1;
  v7 = *((unsigned int *)result + v1 + (-(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 15691);
  *((_DWORD *)result + 15685) = v7;
  if ( !v2 )
  {
    if ( !(_DWORD)v1 )
    {
      *((_DWORD *)result + 15676) = 0;
      v8 = 1LL;
      return ConfigureRITDelayableTimers(v8, v6);
    }
    v9 = 2;
    v10 = v1 - 2;
    if ( !v10 )
    {
      *((_DWORD *)result + 15676) |= 1u;
      if ( ((_DWORD)result[7838] & 2) == 0
        && *(int *)(W32GetUserSessionState(v7, v6) + 62816) > 0
        && (*(_DWORD *)(W32GetUserSessionState(v11, v6) + 66100)
         || (**(_DWORD **)(W32GetUserSessionState(v12, v6) + 19872) & 0x200) != 0) )
      {
        v9 = 1;
      }
      goto LABEL_11;
    }
    if ( v10 == 1 )
    {
      *((_DWORD *)result + 15676) |= 2u;
      result = (void (__fastcall **)(struct BLTINFO *))*((unsigned int *)result + 15676);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
LABEL_11:
        v8 = v9;
        return ConfigureRITDelayableTimers(v8, v6);
      }
    }
  }
  return result;
}
