/*
 * XREFs of ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x18008A53C
 * Callers:
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x1801DA800 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0003@@@Z @ 0x180301AA0 (-GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0003@.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x18030535C (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall IAMPrivate_QueryObject(
        struct IUnknown *a1,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  *a4 = 0LL;
  v12 = 0LL;
  QueryInterface = a1->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
         a1,
         &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
         &v12);
  if ( v9 >= 0 )
    v9 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v12 + 24LL))(
           v12,
           a2,
           a3,
           a4);
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v9;
}
