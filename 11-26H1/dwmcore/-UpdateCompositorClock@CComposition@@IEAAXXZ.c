/*
 * XREFs of ?UpdateCompositorClock@CComposition@@IEAAXXZ @ 0x180166298
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x180009F50 (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180166330 (--0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z.c)
 */

void __fastcall CComposition::UpdateCompositorClock(CComposition *this)
{
  struct IMonitorTarget **v2; // rax
  struct IMonitorTarget *v3; // rdi
  CMonitorClock *v4; // rax
  void (__fastcall ***v5)(_QWORD); // rdx

  if ( CCommonRegistryData::m_compositorClockPolicy == 1 )
    v2 = (struct IMonitorTarget **)(*((_QWORD *)this + 77) + 8LL);
  else
    v2 = (struct IMonitorTarget **)*((_QWORD *)this + 77);
  v3 = *v2;
  if ( *v2 )
  {
    v4 = (CMonitorClock *)operator new(0x80uLL);
    if ( v4 )
      v4 = CMonitorClock::CMonitorClock(v4, v3);
    wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(
      (__int64 *)this + 39,
      (void (__fastcall ***)(_QWORD))v4);
    *((_BYTE *)this + 6460) = 0;
  }
  else
  {
    v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 38);
    if ( *((void (__fastcall ****)(_QWORD))this + 39) != v5 )
      wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=((__int64 *)this + 39, v5);
  }
}
