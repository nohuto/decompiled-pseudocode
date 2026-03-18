/*
 * XREFs of ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800E77CC
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800E2F10 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800E39D0 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x18022535C (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapLock::HrInit(
        CBitmapLock *this,
        struct IBitmapUnlock *a2,
        unsigned int a3,
        int a4,
        enum DXGI_FORMAT *a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        enum WICBitmapLockFlags a9,
        bool a10,
        struct IUnknown *a11)
{
  int v15; // r9d
  unsigned __int64 v16; // r10
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // r9d
  unsigned int v22; // edi
  int v23; // esi

  if ( a4 )
  {
    v16 = a3 * (unsigned __int64)GetPixelFormatSize(*a5);
    if ( v16 > 0xFFFFFFFF )
    {
      v20 = 1620;
      goto LABEL_8;
    }
    if ( (int)v16 + 7 < (unsigned int)v16 )
    {
      v20 = 1621;
      goto LABEL_8;
    }
    v17 = (unsigned int)(v16 + 7) >> 3;
    if ( a6 < v17 )
    {
      v23 = -2147024809;
      v20 = 1626;
      v22 = -2147024809;
      v21 = -2147024809;
      goto LABEL_9;
    }
    v18 = a6 * (unsigned __int64)(unsigned int)(v15 - 1);
    if ( v18 > 0xFFFFFFFF )
    {
      v20 = 1629;
      goto LABEL_8;
    }
    v19 = v17 + v18;
    if ( v17 + (unsigned int)v18 < (unsigned int)v18 )
    {
      v20 = 1630;
LABEL_8:
      v21 = -2147024362;
      v22 = -2147024362;
      v23 = -2147024362;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, v20, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x682u, 0LL);
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x5Cu, 0LL);
      return v22;
    }
    v22 = 0;
  }
  else
  {
    v22 = 0;
    v19 = 0;
  }
  if ( v19 > a7 )
  {
    v22 = -2003292276;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292276, 0x686u, 0LL);
    goto LABEL_22;
  }
  *((_BYTE *)this + 124) = 1;
  *((_BYTE *)this + 125) = a10;
  *((_QWORD *)this + 8) = a11;
  if ( a11 )
    ((void (__fastcall *)(struct IUnknown *))a11->lpVtbl->AddRef)(a11);
  *((_DWORD *)this + 20) = a3;
  *((_DWORD *)this + 21) = a4;
  *(_QWORD *)((char *)this + 92) = *(_QWORD *)a5;
  *((enum DXGI_FORMAT *)this + 25) = a5[2];
  *((_QWORD *)this + 13) = a8;
  *((_DWORD *)this + 22) = a6;
  *((_DWORD *)this + 28) = a7;
  *((_QWORD *)this + 9) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IBitmapUnlock *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_DWORD *)this + 30) = a9;
  return v22;
}
