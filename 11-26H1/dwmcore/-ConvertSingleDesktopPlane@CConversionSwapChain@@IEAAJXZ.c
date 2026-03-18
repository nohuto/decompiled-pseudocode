/*
 * XREFs of ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x180104DB8
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800363C0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 *     ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802A7A60 (-Present@CConversionSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x180104FC0 (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180105210 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertSingleDesktopPlane(CConversionSwapChain *this)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 (__fastcall *v7)(_QWORD *, __int64, _QWORD **); // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  FastRegion::Internal::CRgnData *v13; // rcx
  _QWORD *v15; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v16[2]; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v17[6]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v18[8]; // [rsp+70h] [rbp-1h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+7h]
  _DWORD *v20; // [rsp+80h] [rbp+Fh]
  __int64 v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  _BYTE v23[16]; // [rsp+A0h] [rbp+2Fh] BYREF

  v2 = 0;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL) + 32LL))(
    *((_QWORD *)this + 65) + 8LL,
    v16);
  *((_DWORD *)this + 220) = v16[0];
  *((_DWORD *)this + 221) = v16[1];
  v3 = (_DWORD *)*((_QWORD *)this + 100);
  *((_DWORD *)this + 218) = 0;
  *((_DWORD *)this + 219) = 0;
  if ( *v3 )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 65);
    v5 = v4 + 1;
    v6 = v4[1];
    v15 = 0LL;
    v7 = *(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD **))(v6 + 112);
    v8 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *))(*v4 + 88LL))(v4, v17);
    v9 = v7(v5, v8, &v15);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x280u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, _BYTE *))(v15[1] + 24LL))(v15 + 1, v23);
      FastRegion::CRegion::BeginIterator((int **)this + 100, (__int64)v18);
      while ( (unsigned __int64)v20 < v19 )
      {
        v17[1] = *v20;
        v17[3] = v20[2];
        v10 = 2 * v22;
        v17[0] = *(_DWORD *)(v21 + 4 * v10);
        v17[2] = *(_DWORD *)(v21 + 4 * v10 + 4);
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 128LL))(v15);
        v12 = CConversionSwapChain::ConvertSingleResource(
                (_DWORD)this,
                v11,
                (unsigned int)v16,
                (unsigned int)v23,
                (__int64)this + 872,
                1,
                (__int64)this + 872,
                (__int64)v17);
        v2 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x291u, 0LL);
          break;
        }
        FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)v18);
      }
      if ( v15 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
    }
  }
  return v2;
}
