/*
 * XREFs of ??$capture@UIImmersiveMonitorManager@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU3@@winrt@@YA?AU?$com_ptr@UIImmersiveMonitorManager@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x18058FFEC
 * Callers:
 *     ?ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x180592780 (-ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU-$com_ptr@UIServiceProvider@@@win.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *winrt::capture<IImmersiveMonitorManager,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
        _QWORD *a1,
        __int64 (__fastcall *a2)(__int64, SID *, void *, __int64 *),
        __int64 *a3,
        ...)
{
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+38h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v9 = 0LL;
  v7 = 0;
  v4 = *a3;
  v8 = 0LL;
  v5 = a2(v4, &SID_IImmersiveMonitorService, &winrt::impl::guid_v<IImmersiveMonitorManager>, &v9);
  winrt::check_hresult((int *)va, v5, (__int64)&v7);
  *a1 = v9;
  return a1;
}
