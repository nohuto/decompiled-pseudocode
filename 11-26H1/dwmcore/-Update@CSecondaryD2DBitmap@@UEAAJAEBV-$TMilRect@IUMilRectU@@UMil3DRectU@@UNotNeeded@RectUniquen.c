/*
 * XREFs of ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800E3CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4048 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E4068 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801044F0 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1802AFA40 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x1802AFDF8 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802B0050 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Update(CSecondaryD2DBitmap *this, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r14
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  __int128 *v9; // rdx
  __int64 v10; // r8
  __int64 (__fastcall *v11)(__int64, __int128 *, struct IBitmapLock **); // rax
  int v12; // eax
  unsigned int v13; // ebx
  enum DXGI_FORMAT v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rcx
  int v18; // r9d
  unsigned __int8 PixelFormatSize; // al
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-79h]
  struct IBitmapLock *v22; // [rsp+50h] [rbp-49h] BYREF
  int v23; // [rsp+58h] [rbp-41h] BYREF
  __int64 v24; // [rsp+60h] [rbp-39h] BYREF
  int v25; // [rsp+68h] [rbp-31h] BYREF
  __int64 v26; // [rsp+70h] [rbp-29h] BYREF
  __int128 v27; // [rsp+78h] [rbp-21h] BYREF
  struct IBitmapLock *v28[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+7h] BYREF
  int v30; // [rsp+A8h] [rbp+Fh]
  __int64 v31; // [rsp+ACh] [rbp+13h]
  int v32; // [rsp+B4h] [rbp+1Bh]

  v3 = (_DWORD *)((char *)this + 240);
  v27 = 0uLL;
  v22 = 0LL;
  v24 = 0LL;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(a2)
    && (*v7 < *v3 || v7[1] < v3[1] || v7[2] > v3[2] || v7[3] > v3[3])
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v8) )
  {
    v13 = -2147024809;
    v18 = -2147024809;
    v21 = 57;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v21, 0LL);
    goto LABEL_19;
  }
  if ( *((float *)this + 50) == 96.0 && *((float *)this + 51) == 96.0 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, __int128 *, struct IBitmapLock **))(*(_QWORD *)v10 + 72LL);
    v27 = *v9;
    v12 = v11(a3, &v27, &v22);
    v13 = v12;
    if ( v12 >= 0 )
      goto LABEL_10;
    v21 = 64;
LABEL_27:
    v18 = v12;
    goto LABEL_25;
  }
  *(_OWORD *)v28 = *v9;
  v27 = *(_OWORD *)CSecondaryD2DBitmap::GetPrefilteredRect(this, &v29, v28);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v22);
  v12 = CSecondaryD2DBitmap::CreateScaledLock(this, &v27, a3, &v22);
  v13 = v12;
  if ( v12 < 0 )
  {
    v21 = 70;
    goto LABEL_27;
  }
LABEL_10:
  v14 = *(_DWORD *)(*(__int64 (__fastcall **)(struct IBitmapLock *, struct IBitmapLock **))(*(_QWORD *)v22 + 24LL))(
                     v22,
                     v28);
  if ( v14 == *(_DWORD *)(*(__int64 (__fastcall **)(char *, struct IBitmapLock **))(*((_QWORD *)this + 10) + 24LL))(
                           (char *)this + 80,
                           v28) )
    goto LABEL_11;
  v28[0] = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v28);
  v20 = CSecondaryD2DBitmap::FormatConvertLock(this, v22, v28);
  v13 = v20;
  if ( v20 >= 0 )
  {
    wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=(&v22, v28);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v28);
LABEL_11:
    v23 = 0;
    v12 = (*(__int64 (__fastcall **)(struct IBitmapLock *, int *))(*(_QWORD *)v22 + 40LL))(v22, &v23);
    v13 = v12;
    if ( v12 < 0 )
    {
      v21 = 86;
    }
    else
    {
      v25 = 0;
      v26 = 0LL;
      v12 = (*(__int64 (__fastcall **)(struct IBitmapLock *, int *, __int64 *))(*(_QWORD *)v22 + 48LL))(v22, &v25, &v26);
      v13 = v12;
      if ( v12 < 0 )
      {
        v21 = 90;
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          PixelFormatSize = GetPixelFormatSize(v14);
          McTemplateU0qqqq_EventWriteTransfer(
            (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (unsigned int)"!",
            DWORD2(v27) - v27,
            HIDWORD(v27) - DWORD1(v27),
            v14,
            PixelFormatSize >> 3);
        }
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 13))(
                *((_QWORD *)this + 13),
                &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
                &v24);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v15 = (*(__int64 (__fastcall **)(CSecondaryD2DBitmap *))(*(_QWORD *)this + 40LL))(this);
          v31 = *((_QWORD *)&v27 + 1);
          v29 = v27;
          v16 = *(_QWORD *)(v15 + 552);
          v30 = 0;
          v32 = 1;
          (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64 *, __int64, int, _DWORD, _DWORD))(*(_QWORD *)v16 + 928LL))(
            v16,
            v24,
            0LL,
            &v29,
            v26,
            v23,
            0,
            0);
          CSecondaryBitmap::AddValidRect(v3, a2);
          goto LABEL_19;
        }
        v21 = 97;
      }
    }
    goto LABEL_27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x50u, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v28);
LABEL_19:
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v22 )
    (*(void (__fastcall **)(struct IBitmapLock *))(*(_QWORD *)v22 + 16LL))(v22);
  return v13;
}
