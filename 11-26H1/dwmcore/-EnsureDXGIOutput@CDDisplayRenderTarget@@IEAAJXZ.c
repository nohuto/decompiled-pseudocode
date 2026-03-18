/*
 * XREFs of ?EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ @ 0x18014A234
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x180254160 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x1800FCA84 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x18014A368 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x18021AA74 (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::EnsureDXGIOutput(CDDisplayRenderTarget *this)
{
  unsigned int v1; // ebx
  struct IDXGIOutputDWM **v2; // rsi
  CDisplayManager *v4; // rcx
  int DXGIOutput; // eax
  int v6; // eax
  unsigned int v7; // ecx
  struct CSyncLockGroup *Group; // rax
  __int64 v10; // r8
  _BYTE v11[180]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v12; // [rsp+E4h] [rbp-34h]

  v1 = 0;
  v2 = (struct IDXGIOutputDWM **)((char *)this + 208);
  if ( !*((_QWORD *)this + 26) )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 26);
    DXGIOutput = CDisplayManager::GetDXGIOutput(v4, *((_DWORD *)this + 8035), v2);
    v1 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DXGIOutput, 0x4E0u, 0LL);
      return v1;
    }
    memset_0(v11, 0, 0xC8uLL);
    v6 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)*v2 + 32LL))(*v2, v11);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x4E2u, 0LL);
      return v1;
    }
    v7 = v12;
    *((_BYTE *)this + 32529) = (v11[108] & 8) != 0;
    if ( !v7 )
    {
      if ( CCommonRegistryData::m_parallelModePolicy != 2 )
        return v1;
      v7 = -1;
    }
    Group = CSyncLockGroup::GetGroup(v7);
    *((_QWORD *)this + 4065) = Group;
    *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 (__int64 *)Group + 2,
                 (__int64)(*((_QWORD *)Group + 3) - *((_QWORD *)Group + 2)) >> 3,
                 v10) = (char *)this + 160;
  }
  return v1;
}
