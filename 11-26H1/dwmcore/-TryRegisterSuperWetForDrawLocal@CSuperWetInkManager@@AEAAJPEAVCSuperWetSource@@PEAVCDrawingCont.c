/*
 * XREFs of ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180126260
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180125FD8 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     TryFillRenderState @ 0x1800139C4 (TryFillRenderState.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ @ 0x1801254C8 (-GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x180126738 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801BA598 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     ?ResolveTarget@SuperWetStroke@CSuperWetInkManager@@QEBAJPEAPEAVIMonitorTarget@@@Z @ 0x1801BAB30 (-ResolveTarget@SuperWetStroke@CSuperWetInkManager@@QEBAJPEAPEAVIMonitorTarget@@@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x18021DEF0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDrawLocal(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        const struct CVisualTree **a3,
        unsigned __int8 a4,
        bool *a5)
{
  struct IMonitorTarget *MonitorTarget; // rbx
  struct CSuperWetInkManager::SuperWetStroke *v9; // rax
  struct CSuperWetInkManager::SuperWetStroke *v10; // rbp
  __int64 *v11; // r12
  struct IMonitorTarget *v12; // rbx
  int (__fastcall *v13)(struct IMonitorTarget *, __int64 *); // rdi
  int v14; // eax
  CVisual *CurrentVisual; // rax
  __int64 **TreeData; // rax
  const __m128i *v18; // rax
  __m128i v19; // xmm0
  struct IMonitorTarget *v21[8]; // [rsp+38h] [rbp-40h] BYREF

  *a5 = 0;
  if ( a2 != *(struct CSuperWetSource **)this )
    return 0LL;
  MonitorTarget = CDrawingContext::GetMonitorTarget((CDrawingContext *)a3);
  if ( !MonitorTarget )
    return 0LL;
  v9 = CSuperWetInkManager::TryLookupDataForSource(this, a2);
  v10 = v9;
  v21[0] = 0LL;
  v11 = (__int64 *)((char *)v9 + 8);
  if ( !*((_QWORD *)v9 + 1) )
  {
    if ( (**(int (__fastcall ***)(struct IMonitorTarget *, GUID *, struct IMonitorTarget **))MonitorTarget)(
           MonitorTarget,
           &GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc,
           v21) >= 0 )
    {
      v12 = v21[0];
      v13 = *(int (__fastcall **)(struct IMonitorTarget *, __int64 *))(*(_QWORD *)v21[0] + 24LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v11);
      if ( v13(v12, v11) >= 0 )
      {
        if ( v21[0] )
          (*(void (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
        goto LABEL_8;
      }
    }
LABEL_18:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v21);
    return 0LL;
  }
  if ( (int)CSuperWetInkManager::SuperWetStroke::ResolveTarget(v9, v21) < 0 || v21[0] != MonitorTarget )
    goto LABEL_18;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v21);
LABEL_8:
  v14 = (*(__int64 (__fastcall **)(struct CSuperWetSource *))(*(_QWORD *)a2 + 368LL))(a2);
  if ( TryFillRenderState((CDrawingContext *)a3, a4, v14, 1, (__int64)v10 + 16) )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)a3);
    TreeData = CVisual::FindTreeData(CurrentVisual, a3[993]);
    if ( TreeData && (v18 = (const __m128i *)TreeData[34]) != 0LL )
      v19 = _mm_loadu_si128(v18);
    else
      v19 = (__m128i)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *(__m128i *)((char *)v10 + 72) = v19;
    if ( (int)CSuperWetInkManager::TryReadyForCurrentFrame(this, v10, a5) < 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          18LL);
      CSuperWetInkManager::DeactivateCurrentSource(this);
      *a5 = 0;
    }
  }
  else
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
  }
  return 0LL;
}
