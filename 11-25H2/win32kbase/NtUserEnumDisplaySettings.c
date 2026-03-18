/*
 * XREFs of NtUserEnumDisplaySettings @ 0x14004BC10
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     EtwTraceEnumDisplaySettings @ 0x14004BCD4 (EtwTraceEnumDisplaySettings.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14004C39C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        struct _devicemodeW *a3,
        unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  unsigned int v11; // ebx
  bool v13[4]; // [rsp+20h] [rbp-28h]
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  EtwTraceEnumDisplaySettings(a1, a4);
  if ( a2 != -3 && a2 != -2 && a2 != -1 )
    return NtUserEnumDisplaySettingsExclusive(a1, a2, a3, a4);
  EnterLeaveCritShared::EnterLeaveCritShared(v14, 1LL);
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    *(_DWORD *)v13 = a4;
    v11 = DrvEnumDisplaySettings(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 104LL) + 80LL),
            a2,
            (__int64)a3,
            *(_DWORD *)v13);
  }
  else
  {
    v11 = -1073741823;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v8);
  return v11;
}
