/*
 * XREFs of FreeTimer @ 0x140246670
 * Callers:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     DestroyThreadsTimers @ 0x140246280 (DestroyThreadsTimers.c)
 *     DestroyWindowsTimers @ 0x14024634C (DestroyWindowsTimers.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x1400C7A00 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x14016A2F4 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401850D8 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x14028BB5C (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14028BBF4 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

struct _HEAD *__fastcall FreeTimer(struct _HEAD *a1)
{
  __int64 v2; // rdx
  struct _HEAD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char *v6; // rdi
  struct _HEAD *v7; // r14
  char **v8; // rsi
  __int64 v9; // rcx
  char *v10; // rax
  char *v11; // rdi
  char **v12; // rsi
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rdx
  struct _HEAD **v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  struct _HEAD **v20; // rcx
  __int64 v21; // rdx
  struct _HEAD **v22; // rcx
  __int64 v23; // rdx
  struct _HEAD **v24; // rcx
  char v25[8]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v26; // [rsp+28h] [rbp-8h]
  char v27; // [rsp+68h] [rbp+38h] BYREF
  int v28; // [rsp+70h] [rbp+40h]

  if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
  {
    IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v27, a1);
    *((_DWORD *)a1 + 12) |= 0x1000u;
    if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
      DecTimerCountAndClearReadyFlag(a1);
    if ( !(unsigned int)HMMarkObjectDestroy(a1) )
    {
      v3 = (struct _HEAD *)*((_QWORD *)a1 + 9);
LABEL_21:
      IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v27, v2);
      return v3;
    }
    v25[0] = 0;
    v26 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v25);
    if ( !*((_QWORD *)a1 + 13) )
      _bittestandreset((signed __int32 *)(W32GetUserSessionState(v5, v4) + 57588), *((_DWORD *)a1 + 28) - 256);
    EtwTraceKillTimer(a1);
    HMAssignmentUnlock((char *)a1 + 104);
    v6 = (char *)a1 + 72;
    v7 = (struct _HEAD *)*((_QWORD *)a1 + 9);
    v8 = (char **)((char *)a1 + 80);
    if ( v7 == (struct _HEAD *)((char *)a1 + 72) || *v8 == v6 )
    {
      v28 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4531LL);
    }
    v9 = *(_QWORD *)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) == v6 )
    {
      v10 = *v8;
      if ( *(char **)*v8 == v6 )
      {
        *(_QWORD *)v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        *v8 = v6;
        *(_QWORD *)v6 = v6;
        v11 = (char *)a1 + 120;
        v12 = (char **)((char *)a1 + 128);
        if ( *(char **)v11 == v11 || *v12 == v11 )
        {
          v28 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4531LL);
        }
        v13 = *(_QWORD *)v11;
        if ( *(char **)(*(_QWORD *)v11 + 8LL) == v11 )
        {
          v14 = *v12;
          if ( *(char **)*v12 == v11 )
          {
            *(_QWORD *)v14 = v13;
            *(_QWORD *)(v13 + 8) = v14;
            *v12 = v11;
            *(_QWORD *)v11 = v11;
            v15 = *((_QWORD *)a1 + 11);
            if ( *(struct _HEAD **)(v15 + 8) == (struct _HEAD *)((char *)a1 + 88) )
            {
              v16 = (struct _HEAD **)*((_QWORD *)a1 + 12);
              if ( *v16 == (struct _HEAD *)((char *)a1 + 88) )
              {
                *v16 = (struct _HEAD *)v15;
                *(_QWORD *)(v15 + 8) = v16;
                HMFreeObject(a1);
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v25);
                v3 = v7;
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_35:
    __fastfail(3u);
  }
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v27, a1);
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    v25[0] = 0;
    v26 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v25);
    if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
      DecTimerCount(a1);
    v19 = *((_QWORD *)a1 + 9);
    if ( *(struct _HEAD **)(v19 + 8) != (struct _HEAD *)((char *)a1 + 72) )
      goto LABEL_35;
    v20 = (struct _HEAD **)*((_QWORD *)a1 + 10);
    if ( *v20 != (struct _HEAD *)((char *)a1 + 72) )
      goto LABEL_35;
    *v20 = (struct _HEAD *)v19;
    *(_QWORD *)(v19 + 8) = v20;
    v21 = *((_QWORD *)a1 + 15);
    if ( *(struct _HEAD **)(v21 + 8) != (struct _HEAD *)((char *)a1 + 120) )
      goto LABEL_35;
    v22 = (struct _HEAD **)*((_QWORD *)a1 + 16);
    if ( *v22 != (struct _HEAD *)((char *)a1 + 120) )
      goto LABEL_35;
    *v22 = (struct _HEAD *)v21;
    *(_QWORD *)(v21 + 8) = v22;
    v23 = *((_QWORD *)a1 + 11);
    if ( *(struct _HEAD **)(v23 + 8) != (struct _HEAD *)((char *)a1 + 88) )
      goto LABEL_35;
    v24 = (struct _HEAD **)*((_QWORD *)a1 + 12);
    if ( *v24 != (struct _HEAD *)((char *)a1 + 88) )
      goto LABEL_35;
    *v24 = (struct _HEAD *)v23;
    *(_QWORD *)(v23 + 8) = v24;
    if ( !*((_QWORD *)a1 + 13) )
      _bittestandreset((signed __int32 *)(W32GetUserSessionState(v24, v23) + 57588), *((_DWORD *)a1 + 28) - 256);
    EtwTraceKillTimer(a1);
    HMAssignmentUnlock((char *)a1 + 104);
    HMFreeObject(a1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v25);
  }
  IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v27, v18);
  return 0LL;
}
