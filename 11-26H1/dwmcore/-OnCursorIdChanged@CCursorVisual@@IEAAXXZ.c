/*
 * XREFs of ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18021F828
 * Callers:
 *     ?SetCursorId@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_K@Z @ 0x18021F808 (-SetCursorId@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_K@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x1801B589C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18022A5AC (-AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z @ 0x1802341D4 (-UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z.c)
 *     ?TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z @ 0x18028F5E4 (-TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z.c)
 */

void __fastcall CCursorVisual::OnCursorIdChanged(CCursorVisual *this)
{
  struct CCursorState **v1; // rbx
  CCursorManager *v3; // rcx
  unsigned __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // rbx
  _QWORD *v7; // rdx
  CCursorVisual *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (struct CCursorState **)((char *)this + 696);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 87);
  CComposition::GetFrameTargetTime(*((CComposition **)this + 3));
  if ( CCursorManager::TryClaimCursorState(v3, *((_QWORD *)this + 84), this, v4, v1) )
  {
    v6 = *((_QWORD *)this + 3);
    v8 = this;
    v7 = *(_QWORD **)(v6 + 6528);
    if ( v7 == *(_QWORD **)(v6 + 6536) )
    {
      std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
        (void **)(v6 + 6520),
        (__int64)v7,
        (__int64 *)&v8,
        v5);
    }
    else
    {
      *v7 = this;
      *(_QWORD *)(v6 + 6528) += 8LL;
    }
    CComposition::AddCursorVisual((CComposition *)v6, this);
    *((_BYTE *)this + 736) = 1;
  }
  else if ( *((_BYTE *)this + 736) )
  {
    CGlobalComposition::UnregisterCursorVisual(*((CGlobalComposition **)this + 3), this);
    *((_BYTE *)this + 736) = 0;
  }
}
