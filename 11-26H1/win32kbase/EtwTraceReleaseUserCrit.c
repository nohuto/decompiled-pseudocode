/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x14001F3E0
 * Callers:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     NtUserGetHDevName @ 0x1400DECF0 (NtUserGetHDevName.c)
 *     ??1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ @ 0x1400FB674 (--1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013C400 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     LeaveCrit @ 0x1401A86A0 (LeaveCrit.c)
 * Callees:
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x14001F6A0 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

void EtwTraceReleaseUserCrit()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  LARGE_INTEGER v3; // rdi
  volatile signed __int64 *UserSessionState; // rcx
  unsigned __int64 v5; // r9
  unsigned int v6; // r8d
  __int64 v7; // [rsp+30h] [rbp-88h]
  __int64 v8; // [rsp+38h] [rbp-80h]
  __int64 v9; // [rsp+40h] [rbp-78h]
  __int64 v10; // [rsp+48h] [rbp-70h]
  __int64 v11; // [rsp+50h] [rbp-68h]
  __int64 v12; // [rsp+58h] [rbp-60h]
  __int64 v13; // [rsp+60h] [rbp-58h]
  __int64 v14; // [rsp+68h] [rbp-50h]
  __int64 v15; // [rsp+70h] [rbp-48h]
  __int64 v16; // [rsp+78h] [rbp-40h]
  __int64 v17; // [rsp+80h] [rbp-38h]
  __int64 v18; // [rsp+88h] [rbp-30h]
  __int64 v19; // [rsp+90h] [rbp-28h]
  __int64 v20; // [rsp+98h] [rbp-20h]
  __int64 v21; // [rsp+A0h] [rbp-18h]

  if ( (dword_1402A9F58
     && (qword_1402A9F68 & 0x400000000000LL) != 0
     && (qword_1402A9F70 & 0x400000000000LL) == qword_1402A9F70
     || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
     && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
     && (qword_1402A9DC0 & 0x8000002010000000uLL) != 0
     && (qword_1402A9DC8 & 0x8000002010000000uLL) == qword_1402A9DC8
     || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
     && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
     && (qword_1402A9DC0 & 0x200000010000000LL) != 0
     && (qword_1402A9DC8 & 0x200000010000000LL) == qword_1402A9DC8)
    && W32GetUserSessionState() != -36488 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v1, v0);
    if ( CurrentThreadWin32Thread )
    {
      v3 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(CurrentThreadWin32Thread + 8));
      v7 = 10LL;
      UserSessionState = (volatile signed __int64 *)W32GetUserSessionState();
      v8 = 25LL;
      v9 = 50LL;
      v10 = 100LL;
      v5 = (unsigned __int64)(1000000 * v3.QuadPart) / gliQpcFreq.QuadPart;
      v11 = 250LL;
      v12 = 500LL;
      v6 = 0;
      v13 = 1000LL;
      v14 = 2500LL;
      v15 = 5000LL;
      v16 = 10000LL;
      v17 = 25000LL;
      v18 = 50000LL;
      v19 = 100000LL;
      v20 = 200000LL;
      v21 = -1LL;
      while ( v6 < 0xF )
      {
        if ( v5 <= *(&v7 + v6) )
        {
          _InterlockedIncrement64(&UserSessionState[v6 + 5141]);
          break;
        }
        ++v6;
      }
      _InterlockedAdd64(UserSessionState + 5158, v5);
      _InterlockedIncrement64(UserSessionState + 5164);
      if ( v5 > _InterlockedCompareExchange64(UserSessionState + 5161, 0LL, 0LL) )
        _InterlockedExchange64(UserSessionState + 5161, v5);
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
        && (qword_1402A9DC0 & 0x200000010000000LL) != 0
        && (qword_1402A9DC8 & 0x200000010000000LL) == qword_1402A9DC8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v6,
          v3.LowPart,
          (unsigned __int64)(1000 * v3.QuadPart) / gliQpcFreq.QuadPart,
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
    }
  }
}
