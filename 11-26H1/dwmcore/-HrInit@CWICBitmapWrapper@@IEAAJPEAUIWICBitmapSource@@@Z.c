/*
 * XREFs of ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1800E14C4
 * Callers:
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1800E1C7C (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x1800E164C (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x1800E1A4C (-HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapWrapper::HrInit(CWICBitmapWrapper *this, struct IWICBitmapSource *a2)
{
  struct IWICBitmapSourceVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetPixelFormat)(IWICBitmapSource *, WICPixelFormatGUID *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  float v12; // xmm1_4
  unsigned int v14; // [rsp+30h] [rbp-30h] BYREF
  double v15; // [rsp+38h] [rbp-28h] BYREF
  double v16; // [rsp+40h] [rbp-20h] BYREF
  struct _GUID v17; // [rsp+48h] [rbp-18h] BYREF

  lpVtbl = a2->lpVtbl;
  v15 = 0.0;
  v16 = 0.0;
  v14 = 0;
  GetPixelFormat = lpVtbl->GetPixelFormat;
  v17 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct _GUID *))GetPixelFormat)(a2, &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x2Fu, 0LL);
  }
  else
  {
    v8 = HrWicPfToMil(&v17, (enum MilPixelFormat::Enum *)&v14);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x30u, 0LL);
    }
    else
    {
      v9 = HrMilPfToPixelFormatInfo(v14, (char *)this + 104);
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x35u, 0LL);
      }
      else
      {
        v10 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, char *, char *))a2->lpVtbl->GetSize)(
                a2,
                (char *)this + 88,
                (char *)this + 92);
        v7 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x37u, 0LL);
        }
        else
        {
          v11 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, double *, double *))a2->lpVtbl->GetResolution)(
                  a2,
                  &v15,
                  &v16);
          v7 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x38u, 0LL);
          }
          else
          {
            v12 = v16;
            *((float *)this + 24) = v15;
            *((float *)this + 25) = v12;
            wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)this + 17, (__int64)a2);
          }
        }
      }
    }
  }
  return v7;
}
