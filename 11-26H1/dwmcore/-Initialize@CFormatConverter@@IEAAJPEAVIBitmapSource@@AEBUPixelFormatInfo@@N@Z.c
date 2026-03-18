/*
 * XREFs of ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802B47E8
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802B4664 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x1800E6D84 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?HrCheckSrcPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1802B4624 (-HrCheckSrcPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802B4A2C (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFormatConverter::Initialize(
        CFormatConverter *this,
        struct IBitmapSource *a2,
        enum DXGI_FORMAT *a3,
        double a4)
{
  _DWORD *v7; // r14
  bool v8; // zf
  float v9; // xmm0_4
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  CFormatConverter *v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  unsigned __int8 v19; // [rsp+20h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v21[16]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !a2 || !IsValidPixelFormatInfo(a3) )
  {
    v11 = 399LL;
    goto LABEL_23;
  }
  v7 = (_DWORD *)((char *)this + 76);
  *(_QWORD *)((char *)this + 76) = *(_QWORD *)a3;
  *((enum DXGI_FORMAT *)this + 21) = a3[2];
  if ( a4 < 0.0 || a4 > 100.0 )
  {
    v11 = 403LL;
LABEL_23:
    v10 = -2147024809;
    goto LABEL_24;
  }
  v8 = *((_QWORD *)this + 7) == 0LL;
  v9 = a4;
  *((float *)this + 24) = v9;
  if ( !v8 )
  {
    v10 = -2003292412;
    v11 = 410LL;
LABEL_24:
    v15 = v10;
    goto LABEL_25;
  }
  v12 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v21);
  *((_QWORD *)this + 8) = *(_QWORD *)v12;
  *((_DWORD *)this + 18) = *(_DWORD *)(v12 + 8);
  v14 = CFormatConverter::HrCheckSrcPixelFormat(v13, (enum DXGI_FORMAT)*((_DWORD *)this + 16));
  v10 = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v11 = 414LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\common\\formatconverter\\formatconverter.cpp",
      (const char *)v15);
    goto LABEL_26;
  }
  if ( *v7 != 2 && *v7 != 10 && *v7 != 11 && *v7 != 24 && *v7 != 28 && (unsigned int)(*v7 - 87) >= 2 )
  {
    v10 = -2003292288;
    v11 = 415LL;
    goto LABEL_24;
  }
  v16 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 32LL))(
          a2,
          (char *)this + 88,
          (char *)this + 92);
  v10 = v16;
  if ( v16 < 0 )
  {
    v15 = (unsigned int)v16;
    v11 = 417LL;
    goto LABEL_25;
  }
  v17 = CScanPipeline::InitializeForFormatConversion(
          (CFormatConverter *)((char *)this + 104),
          (CFormatConverter *)((char *)this + 76),
          (CFormatConverter *)((char *)this + 64),
          *((_DWORD *)this + 22),
          v19);
  v10 = v17;
  if ( v17 < 0 )
  {
    v15 = (unsigned int)v17;
    v11 = 424LL;
    goto LABEL_25;
  }
  *((_QWORD *)this + 7) = a2;
  (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = 0;
LABEL_26:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
  return v10;
}
