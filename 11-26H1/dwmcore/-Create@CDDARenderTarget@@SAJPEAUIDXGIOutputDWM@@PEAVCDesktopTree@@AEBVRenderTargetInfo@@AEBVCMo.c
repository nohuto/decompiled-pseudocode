/*
 * XREFs of ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x18025935C
 * Callers:
 *     ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x1801D3630 (-HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801D7880 (-HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x180255170 (-HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800925C0 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x18014AA6C (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 *     ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x18014AB68 (-AddToRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x1801D3F8C (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1802591C4 (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1802594EC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 */

__int64 __fastcall CDDARenderTarget::Create(
        struct IDXGIOutputDWM *a1,
        struct CDesktopTree *a2,
        const struct RenderTargetInfo *a3,
        const struct CMonitorTransform *a4,
        struct CDDARenderTarget **a5)
{
  struct CDDARenderTarget **v5; // rsi
  CDDARenderTarget *v10; // rax
  struct CDDARenderTarget **v11; // rax
  CResource **v12; // rdi
  unsigned int v13; // ebx

  v5 = a5;
  *a5 = 0LL;
  v10 = (CDDARenderTarget *)DefaultHeap::AllocClear(0x958uLL);
  if ( !v10 )
  {
    a5 = 0LL;
    goto LABEL_5;
  }
  v11 = (struct CDDARenderTarget **)CDDARenderTarget::CDDARenderTarget(v10, a1, a3);
  a5 = v11;
  v12 = v11;
  if ( !v11 )
  {
LABEL_5:
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Cu, 0LL);
    goto LABEL_6;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 1));
  wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(v12 + 23, (__int64)a2);
  CRenderTarget::SetVisualTree((CRenderTarget *)v12, a2);
  CRenderTarget::AddToRenderTargetManager((CRenderTarget *)v12);
  v13 = 0;
  CDDARenderTarget::UpdateTransform((CDDARenderTarget *)v12, a4);
  a5 = 0LL;
  *v5 = (struct CDDARenderTarget *)v12;
LABEL_6:
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>((CResource **)&a5);
  return v13;
}
