/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x14003D690
 * Callers:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14004C39C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x140094120 (UserSessionSwitchLeaveCrit.c)
 *     NtUserGetHDevName @ 0x14009E490 (NtUserGetHDevName.c)
 *     LeaveCrit @ 0x1401675A0 (LeaveCrit.c)
 *     NtUserGetKeyState @ 0x140170360 (NtUserGetKeyState.c)
 * Callees:
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x14003D830 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAPEAV1@XZ @ 0x14003D960 (-getInstance@UserCritTelemetry@@SAPEAV1@XZ.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x14003D984 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void EtwTraceReleaseUserCrit()
{
  __int64 CurrentThreadNonPaged; // rbx
  LARGE_INTEGER v1; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v3; // r8d

  if ( dword_14029EF38
    && (qword_14029EF48 & 0x400000000000LL) != 0
    && (qword_14029EF50 & 0x400000000000LL) == qword_14029EF50
    || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x8000002010000000uLL) != 0
    && (qword_14029EDA8 & 0x8000002010000000uLL) == qword_14029EDA8
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x200000010000000LL) != 0
    && (qword_14029EDA8 & 0x200000010000000LL) == qword_14029EDA8 )
  {
    if ( UserCritTelemetry::getInstance() )
    {
      CurrentThreadNonPaged = W32GetCurrentThreadNonPaged();
      if ( CurrentThreadNonPaged )
      {
        v1 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(CurrentThreadNonPaged + 8));
        Instance = UserCritTelemetry::getInstance();
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))UserCritTelemetry::UpdateUserCritInfo)(
          Instance,
          (LARGE_INTEGER)v1.QuadPart,
          2LL);
        if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
          && (qword_14029EDA0 & 0x200000010000000LL) != 0
          && (qword_14029EDA8 & 0x200000010000000LL) == qword_14029EDA8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          McTemplateK0xqx_EtwWriteTransfer(
            *(_QWORD *)(CurrentThreadNonPaged + 16),
            (unsigned int)&ReleaseUserCritEvent,
            v3,
            v1.LowPart,
            (unsigned __int64)(1000 * v1.QuadPart) / gliQpcFreq.QuadPart,
            *(_QWORD *)(CurrentThreadNonPaged + 16));
        }
      }
    }
  }
}
