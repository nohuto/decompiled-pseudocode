/*
 * XREFs of DrvPrepareModeListCacheAndLeaveUserCrit @ 0x1401F80B0
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1401AB540 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x14000E47C (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     DrvGetDeviceFromName @ 0x140028550 (DrvGetDeviceFromName.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x1401292D4 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvPrepareModeListCacheAndLeaveUserCrit(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 DeviceFromName; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 DxgkWin32kInterface; // rax
  PCUNICODE_STRING String1; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = -1073741585;
  if ( a1 )
  {
    String1 = 0LL;
    if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
    {
      DeviceFromName = DrvGetDeviceFromName(String1);
      v4 = DeviceFromName;
      if ( DeviceFromName )
      {
        if ( !*(_QWORD *)(DeviceFromName + 136) )
          v4 = -(__int64)((*(_DWORD *)(DeviceFromName + 160) & 0x6000008) != 0) & DeviceFromName;
      }
    }
    DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((char **)&String1, v6, v7, v8);
  }
  else
  {
    if ( !a2 )
    {
LABEL_12:
      UserSessionSwitchLeaveCritWithNonPaged((__int64)a1, a2, a3, a4);
      return v5;
    }
    v4 = *(_QWORD *)(a2 + 2568);
  }
  if ( !v4 || (*(_DWORD *)(v4 + 160) & 0x800000) == 0 )
    goto LABEL_12;
  v10 = *(_QWORD *)(v4 + 240);
  v11 = *(_DWORD *)(v4 + 248);
  UserSessionSwitchLeaveCritWithNonPaged((__int64)a1, a2, a3, a4);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v13, v12);
  return (*(unsigned int (__fastcall **)(__int64, _QWORD))(DxgkWin32kInterface + 816))(v10, v11);
}
