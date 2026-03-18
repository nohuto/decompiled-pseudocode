/*
 * XREFs of ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1800D62A4
 * Callers:
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x18025303C (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x180253F5C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?LegacyPresentRequired@COverlayContext@@IEBA_NXZ @ 0x1800D7040 (-LegacyPresentRequired@COverlayContext@@IEBA_NXZ.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801B4E54 (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 *     McTemplateU0nqqt_EventWriteTransfer @ 0x180214760 (McTemplateU0nqqt_EventWriteTransfer.c)
 *     McTemplateU0nqq_EventWriteTransfer @ 0x180216618 (McTemplateU0nqq_EventWriteTransfer.c)
 *     ?ClearDirectFlip@COverlayContext@@IEAAXXZ @ 0x18021E3C4 (-ClearDirectFlip@COverlayContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     McTemplateU0nqxxxq_EventWriteTransfer @ 0x18023E5B0 (McTemplateU0nqxxxq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::Present(
        COverlayContext *this,
        struct IOverlaySwapChain *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        _BYTE *a6,
        char a7)
{
  int v11; // eax
  CDirectFlipInfo *v12; // r13
  int v13; // r14d
  COverlayContext *v14; // rcx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // esi
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  int v30; // ebx
  char v31; // al
  int v32; // r8d
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  char v37; // [rsp+50h] [rbp-31h] BYREF
  int v38; // [rsp+54h] [rbp-2Dh] BYREF
  __int64 v39; // [rsp+58h] [rbp-29h]
  __int64 v40; // [rsp+60h] [rbp-21h]
  __int64 v41[2]; // [rsp+68h] [rbp-19h] BYREF

  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 32LL))(*((_QWORD *)this + 7) + 8LL);
  v12 = (CDirectFlipInfo *)*((_QWORD *)this + 2411);
  v13 = v11;
  v37 = 0;
  if ( v12 )
  {
    v25 = *((_QWORD *)this + 2374);
    v26 = *((_QWORD *)this + 7);
    v39 = v25;
    v27 = *((_QWORD *)this + 2375);
    v40 = v27;
    *(_OWORD *)v41 = *(_OWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 256LL))(v26) + 24);
    v28 = CDirectFlipInfo::Present(v12, a2, (__int64)v41);
    v19 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0xB19u, 0LL);
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    {
      v29 = *((_QWORD *)this + 2411);
      v30 = *(_DWORD *)(v29 + 92);
      v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v29 + 16) + 336LL))(*(_QWORD *)(v29 + 16));
      McTemplateU0nqxxxq_EventWriteTransfer(
        *((_QWORD *)this + 2411),
        *(_QWORD *)(*((_QWORD *)this + 2411) + 16LL),
        v32,
        v13,
        v19,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2411) + 16LL) + 40LL),
        *(_QWORD *)(*((_QWORD *)this + 2411) + 24LL),
        v31,
        v30);
    }
    if ( (int)(v19 + 0x80000000) < 0 || v19 == -2003304309 )
      *((_BYTE *)this + 19354) = 1;
    else
      COverlayContext::ClearDirectFlip(this);
  }
  else
  {
    *((_BYTE *)this + 19354) = 0;
    if ( a7 || COverlayContext::LegacyPresentRequired(this) )
    {
      v21 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, _QWORD, __int64, int))(*(_QWORD *)a2 + 384LL))(
              a2,
              1LL,
              a3,
              a4,
              a5);
      v19 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xAF8u, 0LL);
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
        McTemplateU0nqq_EventWriteTransfer(v23, v22, v24, v13, v19, a3);
      if ( v19 >= 0 )
      {
        *((_QWORD *)this + 2391) = 0LL;
        v33 = *((_OWORD *)this + 1188);
        *((_WORD *)this + 9526) = 1;
        v37 = 1;
        *((_OWORD *)this + 1189) = v33;
        v34 = *(_OWORD *)((char *)this + 19000);
        *((_OWORD *)this + 1191) = *(_OWORD *)((char *)this + 18984);
        v35 = *(_OWORD *)((char *)this + 19016);
        *((_OWORD *)this + 1192) = v34;
        v36 = *(_OWORD *)((char *)this + 19032);
        *((_OWORD *)this + 1193) = v35;
        *(_QWORD *)&v35 = *((_QWORD *)this + 2381);
        *((_OWORD *)this + 1194) = v36;
        *((_QWORD *)this + 2390) = v35;
      }
    }
    else
    {
      v38 = 0;
      v15 = COverlayContext::PresentMPO(v14, (__int64)&v38, (__int64)&v37);
      v19 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xAE3u, 0LL);
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
        McTemplateU0nqqt_EventWriteTransfer(v17, v16, v18, v13, v19, v38, v37);
    }
  }
  if ( a6 )
    *a6 = v37;
  return (unsigned int)v19;
}
