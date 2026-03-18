/*
 * XREFs of ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x18029B0AC
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801DD2EC (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801BF65C (--$_Emplace_reallocate@V-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_r.c)
 *     ??$destruct_range@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801CBAA0 (--$destruct_range@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detai.c)
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x1801D2430 (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 *     ?clear@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAXXZ @ 0x1801D7D00 (-clear@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAX.c)
 *     ?clear@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1801D7E1C (-clear@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedS.c)
 *     ?MarkTransitional@CDDisplaySwapChainBuffer@@QEAAJPEAPEAUIDisplaySurfacePrivate@Core@Display@Devices@Windows@@@Z @ 0x18029ADA8 (-MarkTransitional@CDDisplaySwapChainBuffer@@QEAAJPEAPEAUIDisplaySurfacePrivate@Core@Display@Devi.c)
 */

void __fastcall CDDisplaySwapChain::TransitionAwayCurrentPrimaries(CDDisplaySwapChain *this)
{
  CDDisplaySwapChainBuffer **v2; // rbp
  CDDisplaySwapChainBuffer **i; // rdi
  CDDisplaySwapChainBuffer *v4; // rcx
  __int64 v5; // r9
  __int64 *v6; // rdx
  struct Windows::Devices::Display::Core::IDisplaySurfacePrivate *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct Windows::Devices::Display::Core::IDisplaySurfacePrivate *v10; // [rsp+30h] [rbp+8h] BYREF

  CScribbleSwapChain::ReleaseComputeScribbleResources((volatile signed __int32 **)this);
  v2 = (CDDisplaySwapChainBuffer **)*((_QWORD *)this + 59);
  for ( i = (CDDisplaySwapChainBuffer **)*((_QWORD *)this + 58); i != v2; ++i )
  {
    v4 = *i;
    v10 = 0LL;
    CDDisplaySwapChainBuffer::MarkTransitional(v4, &v10);
    v6 = (__int64 *)*((_QWORD *)this + 62);
    if ( v6 == *((__int64 **)this + 63) )
    {
      std::vector<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>(
        (__int64 **)this + 61,
        v6,
        (__int64 *)&v10,
        v5);
    }
    else
    {
      v7 = v10;
      v10 = 0LL;
      *v6 = (__int64)v7;
      *((_QWORD *)this + 62) += 8LL;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  }
  v8 = *((_QWORD *)this + 59);
  v9 = *((_QWORD *)this + 58);
  if ( v9 != v8 )
  {
    detail::destruct_range<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>>(v9, v8);
    *((_QWORD *)this + 59) = *((_QWORD *)this + 58);
  }
  std::vector<CDDisplayCachedScanout>::clear((__int64)this + 296);
  std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::clear((_QWORD *)this + 40);
  *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 746LL) = 1;
}
