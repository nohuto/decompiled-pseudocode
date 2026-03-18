/*
 * XREFs of ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x180258414
 * Callers:
 *     ??_GCMagnifierRenderTarget@@EEAAPEAXI@Z @ 0x180258480 (--_GCMagnifierRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800925C0 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802583E0 (--$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV-$com_ptr_t@VCVisualGroup@@Uerr_return.c)
 */

void __fastcall CMagnifierRenderTarget::~CMagnifierRenderTarget(CMagnifierRenderTarget *this)
{
  CResource **v2; // rbx

  *(_QWORD *)this = &CMagnifierRenderTarget::`vftable'{for `CNotificationResource'};
  v2 = (CResource **)((char *)this + 2632);
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &COffScreenRenderTarget::`vftable'{for `IRenderTarget'};
  CResource::UnRegisterNotifier<CVisualGroup>(this, (struct CResource **)this + 329);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(v2);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
