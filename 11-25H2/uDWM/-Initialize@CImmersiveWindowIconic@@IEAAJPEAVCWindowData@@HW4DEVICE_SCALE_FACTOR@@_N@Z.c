/*
 * XREFs of ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B8C50
 * Callers:
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800B8B5C (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180010EF0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18001B7FC (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054CA8 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x180095100 (-SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800951FC (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B80F8 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800B80F8.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800B820C (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800B8324 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800B8F54 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800B9014 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowIconic::Initialize(
        CImmersiveWindowIconic *this,
        HWND *a2,
        int a3,
        unsigned __int32 a4,
        int a5)
{
  CDesktopManager *v7; // rax
  CImmersiveIconicBitmapRegistry *v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int ImmersiveIconContainerSize; // eax
  int v16; // edx
  int v17; // eax
  unsigned int v18; // esi
  struct CBitmapSource *BitmapSourceNoRef; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  int v21; // eax
  int IconW; // eax
  int v23; // eax
  int v24; // eax
  void *v26; // [rsp+20h] [rbp-48h]
  unsigned int v27; // [rsp+88h] [rbp+20h] BYREF

  *((_BYTE *)this + 280) = a5;
  v7 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)this + 30) = a2;
  *((_DWORD *)this + 66) = 5;
  *((_DWORD *)this + 69) = a4;
  v10 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)v7 + 29);
  v11 = CContainerVisual::Initialize((struct CContainerVisualProxy **)this);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x42u, 0LL);
    return v12;
  }
  v13 = CImage::Create((struct CImage **)this + 31);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x44u, 0LL);
    return v12;
  }
  *(_BYTE *)(*((_QWORD *)this + 30) + 674LL) |= 2u;
  if ( !a3 )
    goto LABEL_13;
  v27 = 0;
  a5 = 0;
  LOBYTE(v26) = *((_BYTE *)this + 280);
  v14 = CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
          v10,
          this,
          a3,
          (enum DEVICE_SCALE_FACTOR)a4,
          v26,
          (enum IconicRepresentationType *)&v27,
          (enum IconicRepresentationType *)&a5);
  v12 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x4Cu, 0LL);
    return v12;
  }
  ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(
                                 (enum DEVICE_SCALE_FACTOR)a4,
                                 a5);
  v16 = a5;
  *((_DWORD *)this + 67) = ImmersiveIconContainerSize - 2;
  v17 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize((enum DEVICE_SCALE_FACTOR)a4, v16);
  v18 = v27;
  *((_DWORD *)this + 68) = v17;
  if ( v18 == 1 )
  {
    CVisual::SetSize(this, v17, v17);
    CImmersiveWindowIconic::_UpdateSolidFill(this);
  }
  else
  {
    BitmapSourceNoRef = 0LL;
    IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(v10, a2[5]);
    if ( IconicResourceNoRef )
      BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                            IconicResourceNoRef,
                            v18,
                            a4);
    *((_DWORD *)this + 68) = *((_DWORD *)BitmapSourceNoRef + 6);
    (*(void (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 80LL))(this);
    CImmersiveWindowIconic::SetBitmap(this, BitmapSourceNoRef);
  }
  v21 = CImmersiveWindowIconic::SetRepresentationType(this, v18, 0LL);
  v12 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x60u, 0LL);
  }
  else
  {
LABEL_13:
    IconW = CImmersiveWindowIconic::LoadIconW(this);
    v12 = IconW;
    if ( IconW < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, IconW, 0x65u, 0LL);
    }
    else
    {
      v23 = CContainerVisual::AddChild(this, *((struct CVisual **)this + 31));
      v12 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x66u, 0LL);
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 48LL))(this);
        v12 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x67u, 0LL);
      }
    }
  }
  return v12;
}
