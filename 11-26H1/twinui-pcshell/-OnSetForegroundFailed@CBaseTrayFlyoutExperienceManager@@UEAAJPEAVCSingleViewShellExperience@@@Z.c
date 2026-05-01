/*
 * XREFs of ?OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C38B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800981B8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1803C2D74 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnSetForegroundFailed(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  HWND ForegroundWindow; // rax
  int v5; // edi
  DWORD WindowThreadProcessId; // ebp
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  _DWORD v13[10]; // [rsp+40h] [rbp-28h] BYREF
  DWORD dwProcessId; // [rsp+70h] [rbp+8h] BYREF
  DWORD v15; // [rsp+80h] [rbp+18h] BYREF
  DWORD v16; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_DWORD *)SingleViewExperienceLogging::Provider((__int64)this) > 5u )
  {
    ForegroundWindow = GetForegroundWindow();
    dwProcessId = 0;
    v5 = (int)ForegroundWindow;
    WindowThreadProcessId = GetWindowThreadProcessId(ForegroundWindow, &dwProcessId);
    v8 = SingleViewExperienceLogging::Provider(v7);
    if ( *(_DWORD *)v8 > 5u )
    {
      v16 = dwProcessId;
      v15 = WindowThreadProcessId;
      v13[0] = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        byte_1807FD50C,
        v9,
        v10,
        (__int64)v13,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
  v11 = *((_QWORD *)this + 42);
  if ( v11 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v11 + 72LL))(v11, a2);
  CBaseTrayFlyoutExperienceManager::HideFlyout((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  return 0LL;
}
