/*
 * XREFs of ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B7C30
 * Callers:
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800B7B4C (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180019D08 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180021BA0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18002748C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC (-UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x180087308 (-SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800873F4 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B70C4 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800B70C4.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800B71C8 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800B72E0 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800B8004 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowIconic::Initialize(
        CImmersiveWindowIconic *this,
        HWND *a2,
        int a3,
        unsigned __int32 a4,
        int a5)
{
  unsigned int v9; // eax
  __m128i v10; // xmm0
  int v11; // eax
  LONG v12; // xmm1_4
  int IconW; // eax
  unsigned int updated; // ebx
  struct CVisual **v15; // rsi
  int ImmersiveIconContainerSize; // eax
  int v17; // edx
  LONG v18; // eax
  unsigned int v19; // r14d
  LONG *BitmapSourceNoRef; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  unsigned int v23; // [rsp+20h] [rbp-30h]
  struct tagRECT v24; // [rsp+40h] [rbp-10h] BYREF
  CImmersiveIconicBitmapRegistry *v25; // [rsp+90h] [rbp+40h]
  unsigned int v26; // [rsp+A8h] [rbp+58h] BYREF

  *((_BYTE *)this + 232) = a5;
  *((_QWORD *)this + 23) = a2;
  *((_DWORD *)this + 54) = 5;
  *((_DWORD *)this + 57) = a4;
  v9 = *((unsigned __int8 *)a2 + 200);
  v24.bottom = 1065353216;
  v10 = _mm_cvtsi32_si128(v9);
  v11 = *((unsigned __int8 *)a2 + 201);
  *(float *)&v24.left = _mm_cvtepi32_ps(v10).m128_f32[0] / 255.0;
  v25 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
  *(float *)&v12 = (float)*((unsigned __int8 *)a2 + 202) / 255.0;
  *(float *)&v24.top = (float)v11 / 255.0;
  v24.right = v12;
  IconW = CContainerVisual::Initialize((struct CContainerVisualProxy **)this);
  updated = IconW;
  if ( IconW < 0 )
  {
    v23 = 73;
    goto LABEL_27;
  }
  v15 = (struct CVisual **)((char *)this + 192);
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)this + 24);
  IconW = CSolidRectangleVisual::Create((struct CSolidRectangleVisual **)this + 24);
  updated = IconW;
  if ( IconW < 0 )
  {
    v23 = 75;
    goto LABEL_27;
  }
  IconW = CImage::Create((struct CImage **)this + 25);
  updated = IconW;
  if ( IconW < 0 )
  {
    v23 = 77;
    goto LABEL_27;
  }
  *(_BYTE *)(*((_QWORD *)this + 23) + 738LL) |= 2u;
  IconW = CContainerVisual::AddChild(this, *v15);
  updated = IconW;
  if ( IconW < 0 )
  {
    v23 = 82;
    goto LABEL_27;
  }
  updated = CSolidRectangleVisual::UpdateColor(*v15, (const struct _D3DCOLORVALUE *)&v24);
  if ( (updated & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x53u, 0LL);
    return updated;
  }
  if ( a3 )
  {
    v26 = 0;
    a5 = 0;
    IconW = CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
              v25,
              this,
              a3,
              (enum DEVICE_SCALE_FACTOR)a4,
              *((_BYTE *)this + 232),
              (enum IconicRepresentationType *)&v26,
              (enum IconicRepresentationType *)&a5);
    updated = IconW;
    if ( IconW < 0 )
    {
      v23 = 90;
    }
    else
    {
      ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(
                                     (enum DEVICE_SCALE_FACTOR)a4,
                                     a5);
      v17 = a5;
      *((_DWORD *)this + 55) = ImmersiveIconContainerSize - 2;
      v18 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize((enum DEVICE_SCALE_FACTOR)a4, v17);
      *(_QWORD *)&v24.left = 0LL;
      v19 = v26;
      *((_DWORD *)this + 56) = v18;
      if ( v19 == 1 )
      {
        v24.right = v18;
        v24.bottom = v18;
      }
      else
      {
        BitmapSourceNoRef = 0LL;
        IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(v25, a2[5]);
        if ( IconicResourceNoRef )
          BitmapSourceNoRef = (LONG *)CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                                        IconicResourceNoRef,
                                        v19,
                                        a4);
        *((_DWORD *)this + 56) = BitmapSourceNoRef[32];
        v24.right = BitmapSourceNoRef[32];
        v24.bottom = BitmapSourceNoRef[33];
        CImmersiveWindowIconic::SetBitmap(this, (struct CBitmapSource *)BitmapSourceNoRef);
      }
      IconW = CImmersiveWindowIconic::SetRepresentationType(this, v19, 0LL);
      updated = IconW;
      if ( IconW >= 0 )
      {
        CRectangleVisual::SetRect(*v15, &v24);
        goto LABEL_15;
      }
      v23 = 112;
    }
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, IconW, v23, 0LL);
    return updated;
  }
LABEL_15:
  IconW = CImmersiveWindowIconic::LoadIconW(this);
  updated = IconW;
  if ( IconW < 0 )
  {
    v23 = 118;
    goto LABEL_27;
  }
  IconW = CContainerVisual::AddChild(this, *((struct CVisual **)this + 25));
  updated = IconW;
  if ( IconW < 0 )
  {
    v23 = 119;
    goto LABEL_27;
  }
  (*(void (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 48LL))(this);
  return updated;
}
