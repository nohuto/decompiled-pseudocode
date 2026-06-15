/*
 * XREFs of ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001F658
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001F858 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180025620 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B0364 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::CheckADGStatus(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rdi
  void *v2; // rcx
  unsigned int LockSemaphore; // ebx
  __int64 v4; // rdx
  const char *v6; // r9
  int LastError; // eax
  int v8; // eax
  BOOL bAlertable; // [rsp+20h] [rbp-28h]
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD ExitCode; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]
  LONG *p_LockCount; // [rsp+58h] [rbp+10h]

  v13 = HIDWORD(this);
  v1 = g_ADGProcess;
  ExitCode = 0;
  v2 = *(void **)&g_ADGProcess[2].LockCount;
  if ( !v2 || v2 == (void *)-1LL )
  {
    LockSemaphore = -2004287472;
    v4 = 181LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)LockSemaphore);
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)LockSemaphore);
    return LockSemaphore;
  }
  Handles[0] = (HANDLE)g_ADGProcess[2].SpinCount;
  Handles[1] = v2;
  if ( WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0) != 1 )
    goto LABEL_7;
  if ( !GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, &ExitCode) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xC1,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                  v6);
    goto LABEL_12;
  }
  if ( ExitCode == -1073740760 )
  {
    LockSemaphore = -2147024319;
    v4 = 195LL;
    goto LABEL_3;
  }
  if ( !ExitCode )
    goto LABEL_7;
  LastError = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0xC7,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                (const char *)ExitCode,
                bAlertable);
LABEL_12:
  LockSemaphore = LastError;
  if ( LastError < 0 )
    goto LABEL_4;
LABEL_7:
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
  p_LockCount = &v1[1].LockCount;
  if ( !BYTE4(v1[2].OwningThread) )
  {
    if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, &ExitCode) )
    {
      v8 = ExitCode;
      if ( ExitCode == 259 )
      {
        v8 = CAudioDGProcess::CheckADGStartupStatus((CAudioDGProcess *)v1);
LABEL_28:
        LODWORD(v1[2].LockSemaphore) = v8;
        BYTE4(v1[2].OwningThread) = 1;
        goto LABEL_8;
      }
    }
    else
    {
      v8 = GetLastError();
      ExitCode = v8;
    }
    if ( v8 > 0 )
      v8 = (unsigned __int16)v8 | 0x80070000;
    goto LABEL_28;
  }
LABEL_8:
  LockSemaphore = (unsigned int)v1[2].LockSemaphore;
  if ( (LockSemaphore & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)LockSemaphore);
  if ( v1 != (LPCRITICAL_SECTION)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
  return LockSemaphore;
}
