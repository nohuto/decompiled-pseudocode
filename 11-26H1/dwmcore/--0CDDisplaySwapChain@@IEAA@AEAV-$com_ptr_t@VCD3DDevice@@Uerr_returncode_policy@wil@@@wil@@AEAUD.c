/*
 * XREFs of ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUDDisplayTaskPoolResources@@AEAUDDisplayTargetResources@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@@Z @ 0x18029C75C
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@PEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x18029DEBC (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1801AE9F8 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@2@@Z @ 0x1801C2C60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1801C2C60.c)
 *     ??0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x180218304 (--0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefre.c)
 *     ??0DDisplayTargetResources@@QEAA@$$QEAU0@@Z @ 0x18029CA28 (--0DDisplayTargetResources@@QEAA@$$QEAU0@@Z.c)
 */

__int64 __fastcall CDDisplaySwapChain::CDDisplaySwapChain(
        __int64 a1,
        struct CD3DDevice **a2,
        __int64 *a3,
        __int64 a4,
        const struct PixelFormatInfo *a5,
        const struct RenderTargetInfo *a6,
        struct RefreshRateInfo *a7)
{
  SIZE_T size_of; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 result; // rax

  CScribbleSwapChain::CScribbleSwapChain(
    a1,
    *a2,
    a5,
    a6,
    a7,
    *(_DWORD *)(a4 + 88),
    *(_DWORD *)(a4 + 92),
    *(struct _LUID *)a6,
    -1);
  *(_QWORD *)a1 = &CDDisplaySwapChain::`vftable'{for `COverlaySwapChain'};
  *(_QWORD *)(a1 + 24) = &CDDisplaySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 32) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(a1 + 256) = &CDDisplaySwapChain::`vftable'{for `IScribbleSwapChain'};
  *(_QWORD *)(a1 + 280) = &CDDisplaySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 288) = &CDDisplaySwapChain::`vftable'{for `IDDisplayEventListener'};
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v12 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v11);
  *v12 = v12;
  v12[1] = v12;
  *(_QWORD *)(a1 + 320) = v12;
  v13 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 336) = v13;
  v14 = a3[1];
  a3[1] = 0LL;
  *(_QWORD *)(a1 + 344) = v14;
  *(_QWORD *)(a1 + 352) = a3[2];
  a3[2] = 0LL;
  v15 = a3[3];
  a3[3] = 0LL;
  *(_QWORD *)(a1 + 360) = v15;
  DDisplayTargetResources::DDisplayTargetResources(a1 + 368, a4);
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_DWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 516) = 0LL;
  *(_DWORD *)(a1 + 524) = 0;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_DWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_DWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 616) = 0LL;
  v17 = std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL, v16);
  *v17 = v17;
  v17[1] = v17;
  *(_QWORD *)(a1 + 608) = v17;
  *(_QWORD *)(a1 + 624) = 0LL;
  *(_QWORD *)(a1 + 632) = 0LL;
  *(_QWORD *)(a1 + 640) = 0LL;
  *(_QWORD *)(a1 + 648) = 7LL;
  *(_QWORD *)(a1 + 656) = 8LL;
  *(_DWORD *)(a1 + 600) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>>>>>::_Assign_grow(
    a1 + 624,
    0x10uLL,
    *(_QWORD *)(a1 + 608));
  *(_WORD *)(a1 + 664) = 1;
  *(_BYTE *)(a1 + 666) = 0;
  a6 = (const struct RenderTargetInfo *)(a1 + 288);
  if ( qword_1803DE730 == qword_1803DE738 )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      &qword_1803DE728,
      qword_1803DE730,
      (__int64 *)&a6);
  }
  else
  {
    *(_QWORD *)qword_1803DE730 = a1 + 288;
    qword_1803DE730 += 8LL;
  }
  result = a1;
  *(_DWORD *)(a1 + 88) = 2;
  return result;
}
