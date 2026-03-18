/*
 * XREFs of ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802B4664
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800E4690 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x1802AFDF8 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 *     ?Transcode@CTranscodeBitmap@@QEAAJPEAVIDeviceTexture@@AEBUPixelFormatInfo@@@Z @ 0x1802B27FC (-Transcode@CTranscodeBitmap@@QEAAJPEAVIDeviceTexture@@AEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2E44 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??0CFormatConverter@@QEAA@XZ @ 0x1802B3D84 (--0CFormatConverter@@QEAA@XZ.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802B47E8 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFormatConverter::HrConvertBitmap(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        struct IBitmapSource **a3)
{
  unsigned int v6; // ebx
  CFormatConverter *v7; // rax
  __int64 v8; // rdx
  CFormatConverter *v9; // rax
  CFormatConverter *v10; // rdi
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v6 = 0;
  (*(void (__fastcall **)(struct IBitmapSource *, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v13);
  if ( v13 == *(_QWORD *)a2 )
  {
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a1 + 8LL))(a1);
    *a3 = a1;
  }
  else
  {
    v7 = (CFormatConverter *)DefaultHeap::AllocClear(0x310uLL);
    if ( !v7 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v9 = CFormatConverter::CFormatConverter(v7, v8);
    v10 = v9;
    if ( v9 )
    {
      CMILRefCountImpl::AddReference((CFormatConverter *)((char *)v9 + 8));
      v11 = CFormatConverter::Initialize(v10, a1, a2, 0.0);
      v6 = v11;
      if ( v11 >= 0 )
      {
        *a3 = v10;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x22Fu, 0LL);
        CMILRefCountBaseT<IBitmapLock,CMilObjectDeleter>::InternalRelease((__int64)v10);
      }
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x23Cu, 0LL);
    }
  }
  return v6;
}
