/*
 * XREFs of ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180083310
 * Callers:
 *     ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x180002D10 (-Initialize@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x1800034E0 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800502E0 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x180083220 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CFlickVisual@@MEAAJXZ @ 0x1800B4E50 (-Initialize@CFlickVisual@@MEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B8250 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJXZ @ 0x1800BBC80 (-Initialize@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800BC110 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800C8620 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800CD260 (-Initialize@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180037E50 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTouchVisual::Initialize(CTouchVisual *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CSpriteVisual::Initialize(this);
  if ( v2 < 0 )
  {
    v3 = 21LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\touchvisual.cpp",
      (const char *)(unsigned int)v2,
      v5);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 32LL) + 344LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
         1LL);
  if ( v2 < 0 )
  {
    v3 = 22LL;
    goto LABEL_3;
  }
  return 0LL;
}
