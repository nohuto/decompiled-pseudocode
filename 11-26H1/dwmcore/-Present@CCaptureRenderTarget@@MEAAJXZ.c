/*
 * XREFs of ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1801FCCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x18012388C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x180124348 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ??$_Emplace_reallocate@AEBUFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAPEAUFlipPropertyItem@@QEAU2@AEBU2@@Z @ 0x1801AB130 (--$_Emplace_reallocate@AEBUFlipPropertyItem@@@-$vector@UFlipPropertyItem@@V-$allocator@UFlipProp.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionBackport@@@details@wil@@QEAA_NXZ @ 0x18025819C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionBackport@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::Present(CComposition **this)
{
  int v2; // edi
  struct CD3DDevice *D3DDeviceNoRef; // rsi
  CComposition *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  _OWORD *v7; // r11
  CComposition *v8; // rax
  CComposition *v9; // rax
  CComposition *v10; // rcx
  CComposition *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  CComposition *v17; // r8
  CComposition *v18; // rdx
  int v19; // eax
  int v20; // eax
  CComposition *v21; // rax
  int v22; // ecx
  __int128 v24; // [rsp+50h] [rbp-29h] BYREF
  _OWORD *v25; // [rsp+60h] [rbp-19h]
  __int128 v26; // [rsp+68h] [rbp-11h] BYREF
  __int128 v27; // [rsp+78h] [rbp-1h]
  unsigned __int64 FrameTargetTime; // [rsp+88h] [rbp+Fh] BYREF
  int v29; // [rsp+90h] [rbp+17h]
  int v30; // [rsp+94h] [rbp+1Bh]
  __int64 v31; // [rsp+98h] [rbp+1Fh]
  int v32; // [rsp+A0h] [rbp+27h]
  int v33; // [rsp+A4h] [rbp+2Bh]
  int v34; // [rsp+A8h] [rbp+2Fh]
  _BYTE v35[12]; // [rsp+ACh] [rbp+33h] BYREF

  v2 = 0;
  D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)this);
  if ( D3DDeviceNoRef && CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)this) )
  {
    v4 = this[3];
    v24 = 0LL;
    *((_BYTE *)this + 2377) = 0;
    v25 = 0LL;
    memset(v35, 0, sizeof(v35));
    FrameTargetTime = CComposition::GetFrameTargetTime(v4);
    v29 = *((_DWORD *)this + 30);
    v30 = *((_DWORD *)this + 31);
    v33 = *((_DWORD *)this + 651);
    v34 = *((_DWORD *)this + 652);
    v31 = 0LL;
    v32 = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowExclusionBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_WindowExclusionBackport>::GetImpl'::`2'::impl) )
      *(_QWORD *)&v35[4] = this[356];
    if ( *((_DWORD *)this + 44) == 2 )
      HIDWORD(v31) = 1;
    v6 = *((_QWORD *)&v24 + 1);
    *(_QWORD *)&v27 = 48LL;
    v26 = xmmword_180377C10;
    *((_QWORD *)&v27 + 1) = &FrameTargetTime;
    if ( *((_OWORD **)&v24 + 1) == v25 )
    {
      std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(
        &v24,
        *((__int64 *)&v24 + 1),
        &v26,
        v5);
      v7 = (_OWORD *)*((_QWORD *)&v24 + 1);
    }
    else
    {
      **((_OWORD **)&v24 + 1) = xmmword_180377C10;
      *(_OWORD *)(v6 + 16) = v27;
      v7 = (_OWORD *)(*((_QWORD *)&v24 + 1) + 32LL);
      *((_QWORD *)&v24 + 1) += 32LL;
    }
    v8 = this[109];
    if ( v8 )
    {
      **(_DWORD **)v8 = 0;
      v7 = (_OWORD *)*((_QWORD *)&v24 + 1);
    }
    if ( *((_DWORD *)this + 44) )
    {
      v9 = this[349];
      v10 = this[348];
      if ( v10 != v9 )
      {
        *((_QWORD *)&v27 + 1) = this[348];
        LODWORD(v31) = (v9 - v10) >> 4;
        *(_QWORD *)&v27 = (unsigned int)(16 * v31);
        v26 = xmmword_180377C30;
        if ( v7 == v25 )
        {
          std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(&v24, (__int64)v7, &v26, v5);
          v7 = (_OWORD *)*((_QWORD *)&v24 + 1);
        }
        else
        {
          *v7 = xmmword_180377C30;
          v7[1] = v27;
          v7 = (_OWORD *)(*((_QWORD *)&v24 + 1) + 32LL);
          *((_QWORD *)&v24 + 1) += 32LL;
        }
      }
    }
    v11 = this[301];
    if ( v11 )
    {
      v12 = *((_QWORD *)v11 + 18);
      v13 = *((_QWORD *)v11 + 17);
      if ( v13 != v12 )
      {
        v32 = (v12 - v13) >> 5;
        v14 = *((_QWORD *)v11 + 17);
        v15 = *((_QWORD *)v11 + 18) - v14;
        *((_QWORD *)&v27 + 1) = v14;
        *(_QWORD *)&v27 = v15 & 0xFFFFFFE0;
        v26 = xmmword_180377C20;
        if ( v7 == v25 )
        {
          std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(&v24, (__int64)v7, &v26, v5);
          v7 = (_OWORD *)*((_QWORD *)&v24 + 1);
        }
        else
        {
          *v7 = xmmword_180377C20;
          v7[1] = v27;
          v7 = (_OWORD *)(*((_QWORD *)&v24 + 1) + 32LL);
          *((_QWORD *)&v24 + 1) += 32LL;
        }
      }
    }
    v16 = (*(__int64 (__fastcall **)(CComposition *, _QWORD, _QWORD))(*(_QWORD *)this[337] + 24LL))(
            this[337],
            *((_QWORD *)this[342] + *((unsigned int *)this + 664)),
            (unsigned int)((__int64)((__int64)v7 - v24) >> 5));
    v2 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x4A4u, 0LL);
    }
    else
    {
      this[334] = (CComposition *)((char *)this[334] + 1);
      v17 = this[334];
      v18 = this[333];
      *((_BYTE *)D3DDeviceNoRef + 1491) = 0;
      v19 = (*(__int64 (__fastcall **)(_QWORD, CComposition *, CComposition *))(**((_QWORD **)D3DDeviceNoRef + 28)
                                                                              + 152LL))(
              *((_QWORD *)D3DDeviceNoRef + 28),
              v18,
              v17);
      v2 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x4A8u, 0LL);
      }
      else
      {
        v20 = (*(__int64 (__fastcall **)(CComposition *, CComposition *, CComposition *, _QWORD, _BYTE, _DWORD, _QWORD, _QWORD))(*(_QWORD *)this[336] + 72LL))(
                this[336],
                this[333],
                this[334],
                0LL,
                0,
                0,
                0LL,
                0LL);
        v2 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x4B2u, 0LL);
      }
    }
    if ( (_QWORD)v24 )
      std::_Deallocate<16>((void *)v24, ((unsigned __int64)v25 - v24) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  if ( CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)this) )
  {
    v21 = *this;
    *((_DWORD *)this + 664) = -1;
    (*((void (**)(void))v21 + 34))();
  }
  if ( v2 < 0 )
  {
    if ( (unsigned int)(v2 + 2005270523) <= 0x1B )
    {
      v22 = 134217733;
      if ( _bittest(&v22, v2 + 2005270523) )
        return (unsigned int)-2003304307;
    }
    if ( v2 == -2003238900 )
    {
      return (unsigned int)-2003304307;
    }
    else if ( v2 == -2005270494 )
    {
      return (unsigned int)-2003304442;
    }
  }
  return (unsigned int)v2;
}
