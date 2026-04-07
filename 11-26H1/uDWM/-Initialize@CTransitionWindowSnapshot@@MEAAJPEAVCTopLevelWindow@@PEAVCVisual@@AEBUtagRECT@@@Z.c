/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z @ 0x180088260
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180032CA0 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180032BE0 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800332BC (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18003457C (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180037E50 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180061344 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJAEBUtagRECT@@@Z @ 0x1800D061C (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?GetVisualBrush@CWindowSnapshot@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAM@Z @ 0x1800E5148 (-GetVisualBrush@CWindowSnapshot@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        const struct tagRECT *a4)
{
  CBaseObject *v4; // rbx
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  struct CWindowData *WindowData; // rbx
  float v13; // xmm0_4
  struct tagRECT v14; // xmm0
  int *v15; // rax
  unsigned int v17; // [rsp+20h] [rbp-38h]
  CBaseObject *v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0LL;
  v18[0] = 0LL;
  v9 = CSpriteVisual::Initialize(this);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F71FC, 1LL, v9, 0x51u, 0LL);
    goto LABEL_19;
  }
  v11 = CWindowSnapshot::Create(a2, v18);
  v10 = v11;
  if ( v11 < 0 )
  {
    v17 = 84;
    goto LABEL_16;
  }
  WindowData = CTopLevelWindow::GetWindowData(a2);
  if ( !CTransitionWindowSnapshot::CanUseCVIFromSnapshot(WindowData)
    || CWindowSnapshot::GetVisualBrush(
         *((CWindowSnapshot **)WindowData + 60),
         a4,
         (CTransitionWindowSnapshot *)((char *)this + 216),
         (float *)this + 68) < 0 )
  {
    if ( !a3 )
    {
      v10 = -2147023434;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F71FC, 1LL, -2147023434, 0x5Du, 0LL);
LABEL_17:
      v4 = v18[0];
      goto LABEL_19;
    }
    *((_QWORD *)this + 29) = a3;
    CBaseObject::AddRef(a3);
    v13 = (*((_DWORD *)WindowData + 186) & 0xFFF) == 0x17
        ? FLOAT_1_0
        : CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, a4);
    *((float *)this + 68) = v13;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 48LL))(*((_QWORD *)this + 29));
    v11 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a4);
    v10 = v11;
    if ( v11 < 0 )
    {
      v17 = 112;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F71FC, 1LL, v11, v17, 0LL);
      goto LABEL_17;
    }
  }
  v14 = *a4;
  v4 = v18[0];
  *((CBaseObject **)this + 26) = v18[0];
  *((struct tagRECT *)this + 16) = v14;
  *((struct tagRECT *)this + 15) = v14;
  if ( v4 )
    CBaseObject::AddRef(v4);
  v15 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(v18);
  CVisual::SetDirtyFlags(this, *v15);
LABEL_19:
  if ( v4 )
    CBaseObject::Release(v4);
  return v10;
}
