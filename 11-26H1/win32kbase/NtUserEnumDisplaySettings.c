/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1401AB540
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceEnumDisplaySettings @ 0x14000B268 (EtwTraceEnumDisplaySettings.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ??1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ @ 0x1400FB674 (--1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ.c)
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013B978 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013C400 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401E0438 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     DrvPrepareModeListCacheAndLeaveUserCrit @ 0x1401F80B0 (DrvPrepareModeListCacheAndLeaveUserCrit.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        struct _devicemodeW *a3,
        unsigned int a4)
{
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // r8d
  char v17; // [rsp+38h] [rbp+10h] BYREF

  EtwTraceEnumDisplaySettings((__int64)a1, a4);
  if ( a2 )
  {
    if ( a2 >= 0xFFFFFFFD )
      return NtUserEnumDisplaySettingsShared(a1, a2, a3, a4);
  }
  else if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
  {
    EnterSharedCrit(1LL, 1LL, v9, v10);
    v17 = 0;
    UserSessionState = W32GetUserSessionState(v12, v11, v13);
    DrvPrepareModeListCacheAndLeaveUserCrit(
      a1,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 96LL) + 80LL));
    MaybeEnterLeaveCritSharedOnly::~MaybeEnterLeaveCritSharedOnly((MaybeEnterLeaveCritSharedOnly *)&v17, v15, v16);
  }
  return NtUserEnumDisplaySettingsExclusive(a1, a2, a3, a4);
}
