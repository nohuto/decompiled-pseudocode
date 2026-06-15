/*
 * XREFs of ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180067E08
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180067D0C (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x1800725D0 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B0364 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

unsigned int __fastcall CAudioDGProcess::WaitForADGStartup(CAudioDGProcess *this, unsigned int *a2)
{
  __int64 v2; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdx
  void *v8; // rax
  const char *v9; // r9
  const char *v10; // r9
  BOOL bAlertable; // [rsp+20h] [rbp-28h]
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_QWORD *)this + 11);
  if ( !v2 || v2 == -1 )
  {
    v5 = -2004287472;
    v6 = 181LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)v5);
    return v5;
  }
  v8 = (void *)*((_QWORD *)this + 14);
  Handles[1] = *((HANDLE *)this + 11);
  Handles[0] = v8;
  if ( WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0) != 1 )
    return 0;
  if ( !GetExitCodeProcess(*((HANDLE *)this + 11), a2) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xC1,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
             v9);
  v10 = (const char *)*a2;
  if ( (_DWORD)v10 == -1073740760 )
  {
    v5 = -2147024319;
    v6 = 195LL;
    goto LABEL_3;
  }
  if ( !(_DWORD)v10 )
    return 0;
  return wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0xC7,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
           v10,
           bAlertable);
}
