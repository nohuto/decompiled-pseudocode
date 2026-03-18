/*
 * XREFs of ?HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x1800E6B50
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800E62DC (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x1800E6D84 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClientMemoryBitmap::HrInit(
        CClientMemoryBitmap *this,
        unsigned int a2,
        int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct IUnknown *a8)
{
  __int64 v9; // r15
  unsigned int v12; // r8d
  enum DXGI_FORMAT *v13; // r9
  unsigned __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  int v19; // edi
  int v20; // r9d
  unsigned int v22; // [rsp+20h] [rbp-28h]

  v9 = a2;
  if ( !IsValidPixelFormatInfo(a4) || !(_DWORD)v9 || !v12 || !a6 || !a7 )
  {
    v22 = 31;
LABEL_22:
    v20 = -2147024809;
    v18 = -2147024809;
    goto LABEL_16;
  }
  if ( v12 >= 0x7FFFFFFF / a7 )
  {
    v22 = 36;
    goto LABEL_22;
  }
  v14 = v9 * GetPixelFormatSize(*v13);
  if ( v14 > 0xFFFFFFFF )
  {
    v17 = 1620;
    goto LABEL_13;
  }
  if ( (int)v14 + 7 < (unsigned int)v14 )
  {
    v17 = 1621;
    goto LABEL_13;
  }
  v15 = (unsigned int)(v14 + 7) >> 3;
  if ( a7 < v15 )
  {
    v18 = -2147024809;
    v17 = 1626;
    goto LABEL_14;
  }
  v16 = a7 * (unsigned __int64)(unsigned int)(a3 - 1);
  if ( v16 > 0xFFFFFFFF )
  {
    v17 = 1629;
    goto LABEL_13;
  }
  if ( v15 + (unsigned int)v16 < (unsigned int)v16 )
  {
    v17 = 1630;
LABEL_13:
    v18 = -2147024362;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v17, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x682u, 0LL);
    v19 = v18;
LABEL_15:
    v20 = v19;
    v22 = 45;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, v22, 0LL);
    return v18;
  }
  if ( v15 + (unsigned int)v16 > a5 )
  {
    v18 = -2003292276;
    v19 = -2003292276;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292276, 0x686u, 0LL);
    goto LABEL_15;
  }
  v18 = 0;
  *((_QWORD *)this + 19) = a8;
  if ( a8 )
    ((void (__fastcall *)(struct IUnknown *))a8->lpVtbl->AddRef)(a8);
  *((_DWORD *)this + 22) = v9;
  *((_DWORD *)this + 23) = a3;
  *((_QWORD *)this + 13) = *(_QWORD *)a4;
  *((_DWORD *)this + 28) = *((_DWORD *)a4 + 2);
  *((_QWORD *)this + 17) = a6;
  *((_DWORD *)this + 36) = a7;
  return v18;
}
