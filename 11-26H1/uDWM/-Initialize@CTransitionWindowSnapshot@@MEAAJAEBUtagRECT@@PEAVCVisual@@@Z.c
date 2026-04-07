/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJAEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800D0460
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180037E50 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180061344 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJAEBUtagRECT@@@Z @ 0x1800D061C (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2,
        struct CVisual *a3)
{
  int v6; // edi
  __int64 v7; // rdx
  CDesktopManager *v9; // rcx
  struct tagRECT v10; // xmm0
  int *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v13; // [rsp+48h] [rbp+20h] BYREF

  v6 = CSpriteVisual::Initialize(this);
  if ( v6 < 0 )
  {
    v7 = 125LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\windows\\dwm\\udwm\\transitionwindowsnapshot.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)this + 26) = 0LL;
  v10 = *a2;
  *((struct tagRECT *)this + 16) = *a2;
  *((struct tagRECT *)this + 15) = v10;
  *((float *)this + 68) = CDesktopManager::GetScalingFactorForCVI(v9, a2);
  *((_QWORD *)this + 29) = a3;
  if ( a3 )
    CBaseObject::AddRef(a3);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 48LL))(*((_QWORD *)this + 29));
  v6 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a2);
  if ( v6 < 0 )
  {
    v7 = 136LL;
    goto LABEL_3;
  }
  v11 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v13);
  CVisual::SetDirtyFlags(this, *v11);
  return 0LL;
}
