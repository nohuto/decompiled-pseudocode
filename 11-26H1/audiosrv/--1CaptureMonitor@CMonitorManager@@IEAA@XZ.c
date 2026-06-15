/*
 * XREFs of ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x18011BCB8
 * Callers:
 *     ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x18011F9F0 (-Release@CaptureMonitor@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::CaptureMonitor::~CaptureMonitor(CMonitorManager::CaptureMonitor *this)
{
  char *v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &CMonitorManager::CaptureMonitor::`vftable';
  v2 = (char *)this + 208;
  if ( *((_QWORD *)this + 2) )
  {
    if ( *(_QWORD *)v2 )
      *(_QWORD *)(*(_QWORD *)v2 + 192LL) = 0LL;
    CloseThreadpoolWait(*((PTP_WAIT *)this + 2));
  }
  v3 = *(_QWORD *)v2;
  if ( *(_QWORD *)v2 )
  {
    *(_QWORD *)v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  std::wstring::~wstring((void **)this + 21);
  std::wstring::~wstring((void **)this + 17);
  std::wstring::~wstring((void **)this + 11);
  std::wstring::~wstring((void **)this + 7);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 5);
  ATL::CHandle::~CHandle((void **)this + 4);
}
