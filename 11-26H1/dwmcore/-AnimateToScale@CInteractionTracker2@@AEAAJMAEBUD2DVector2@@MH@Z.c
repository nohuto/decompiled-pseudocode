/*
 * XREFs of ?AnimateToScale@CInteractionTracker2@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x180271A00
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ @ 0x180274AC0 (-ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801B85E4 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z @ 0x180272FC0 (-DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker2::AnimateToScale(
        CInteractionTracker2 *this,
        float a2,
        const struct D2DVector2 *a3,
        float a4)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(CInteractionTracker2 *, __int64, __int64, float *, _DWORD, struct CResource **); // rax
  int v8; // eax
  unsigned int v9; // edi
  struct CResource *v10; // rcx
  struct CResource *v12; // rdx
  struct CResource *v13; // rcx
  struct CResource *v14; // [rsp+40h] [rbp-40h] BYREF
  float v15; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+4Ch] [rbp-34h]
  int v17; // [rsp+54h] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( !(unsigned __int8)CInteractionTracker2::TransitionToInertia(this, 1LL) )
    return 0LL;
  *((_DWORD *)this + 131) = 0;
  CInteractionTracker2::DestroyDefaultAnimations(this, 1);
  v6 = *(_QWORD *)this;
  v15 = a2;
  v16 = 0LL;
  v17 = 0;
  v7 = *(__int64 (__fastcall **)(CInteractionTracker2 *, __int64, __int64, float *, _DWORD, struct CResource **))(v6 + 216);
  v14 = 0LL;
  v8 = v7(this, 69LL, 18LL, &v15, LODWORD(a4), &v14);
  v9 = v8;
  if ( v8 >= 0 )
  {
    CResource::RegisterNotifier(this, v14);
    v12 = v14;
    v14 = 0LL;
    Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((__int64 *)this + 99, (__int64)v12);
    *(_QWORD *)(*((_QWORD *)this + 99) + 632LL) = *(_QWORD *)a3;
    v13 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17D0,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker2.cpp",
    (const char *)(unsigned int)v8);
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v9;
}
