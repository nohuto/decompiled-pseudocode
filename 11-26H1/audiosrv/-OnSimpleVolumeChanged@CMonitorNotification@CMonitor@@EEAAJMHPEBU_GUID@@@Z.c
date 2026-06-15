/*
 * XREFs of ?OnSimpleVolumeChanged@CMonitorNotification@CMonitor@@EEAAJMHPEBU_GUID@@@Z @ 0x180121F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$query_to@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIInspectable@@@Z @ 0x1800E01C4 (--$query_to@UIInspectable@@@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBAJ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitor::CMonitorNotification::OnSimpleVolumeChanged(
        CMonitor::CMonitorNotification *this,
        float a2,
        unsigned int a3,
        const struct _GUID *a4)
{
  __int64 v6; // rdx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 6) )
  {
    v8 = 0LL;
    if ( (int)wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::query_to<IInspectable>((_QWORD *)this + 2, &v8) >= 0 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, const struct _GUID *))(*(_QWORD *)v8 + 104LL))(v8, v6, a3, a4);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  }
  return 0LL;
}
