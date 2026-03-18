/*
 * XREFs of ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1800E34C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4048 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800E4134 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800E4690 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800E62DC (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800E6E4C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  CD2DBitmap *v5; // rsi
  _DWORD *v10; // rbx
  int *v11; // rdx
  __int64 v12; // rcx
  const struct PixelFormatInfo *v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  struct IBitmapSource *v16; // rbx
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  struct IBitmapSource *v23; // rcx
  unsigned __int8 PixelFormatSize; // al
  int v26; // edx
  int v27; // eax
  struct IBitmapSource *v28; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v29[2]; // [rsp+58h] [rbp-29h] BYREF
  struct IUnknown *v30; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int8 *v31[2]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int8 *v32; // [rsp+78h] [rbp-9h] BYREF

  v5 = (CD2DBitmap *)(a1 - 88);
  v32 = a5;
  v30 = 0LL;
  v10 = a2 + 2;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(a2)
    && (*v10 > *((_DWORD *)v5 + 36) || a2[3] > *(_DWORD *)(a1 + 60))
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v12) )
  {
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, v11, 0, -2147024809, 0xC6u, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 88) & 0x400000) != 0 )
    {
      v15 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(20, v11, 0, -2147024891, 0xCCu, v11);
      return v15;
    }
    v31[0] = (unsigned __int8 *)v11;
    LODWORD(v28) = (_DWORD)v11;
    v29[0] = (unsigned int)v11;
    if ( CD2DBitmap::TryFastWarpLock(v5, v31, (unsigned int *)&v28, v29, &v30) )
    {
      PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
      v26 = (_DWORD)v28 * a2[1] + *a2 * (PixelFormatSize >> 3);
      v27 = CBitmap::CopyPixelsHelper(
              (enum DXGI_FORMAT)*(_DWORD *)(a1 + 72),
              *v10 - *a2,
              a2[3] - a2[1],
              (unsigned int)v28,
              v29[0] - v26,
              &v31[0][v26],
              a3,
              a4,
              a5);
      v15 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0xEAu, 0LL);
      goto LABEL_14;
    }
    v28 = 0LL;
    v13 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(__int64, unsigned __int8 **))(*(_QWORD *)(a1 - 8)
                                                                                                 + 24LL))(
                                            a1 - 8,
                                            v31);
    v14 = HrCreateBitmapFromMemoryEx(*v10 - *a2, a2[3] - a2[1], v13, a3, a4, v32, 0LL, &v28);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xF6u, 0LL);
      v23 = v28;
      if ( v28 )
      {
        v22 = *(_QWORD *)v28;
LABEL_13:
        (*(void (__fastcall **)(struct IBitmapSource *))(v22 + 16))(v23);
      }
    }
    else
    {
      v16 = v28;
      *(_QWORD *)v29 = 0LL;
      v17 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, unsigned int *))v28)(
              v28,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              v29);
      v15 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xF9u, 0LL);
        goto LABEL_10;
      }
      v18 = (*(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)v5 + 40LL))(v5);
      v19 = *(_QWORD *)v29;
      v20 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 **))(*(_QWORD *)(a1 - 8) + 24LL))(a1 - 8, &v32);
      v21 = CD3DDevice::CopyTexture2D(v18, *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 144), v20, a2, v19, 0, 0);
      v15 = v21;
      if ( v21 >= 0 )
      {
LABEL_10:
        if ( *(_QWORD *)v29 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 16LL))(*(_QWORD *)v29);
        v22 = *(_QWORD *)v16;
        v23 = v16;
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x100u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v29);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
    }
  }
LABEL_14:
  if ( v30 )
    ((void (__fastcall *)(struct IUnknown *))v30->lpVtbl->Release)(v30);
  return v15;
}
