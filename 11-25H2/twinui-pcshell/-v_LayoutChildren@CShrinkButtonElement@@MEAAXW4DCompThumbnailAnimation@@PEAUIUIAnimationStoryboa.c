/*
 * XREFs of ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804BD5B0
 * Callers:
 *     ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C20D0 (-v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationSt.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ @ 0x1804BD354 (-_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ.c)
 *     ?_SetShrink@CShrinkButtonElement@@IEAAXXZ @ 0x1804BD4C0 (-_SetShrink@CShrinkButtonElement@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CShrinkButtonElement::v_LayoutChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // r10
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // edx
  void (__fastcall *v9)(__int64 *, _DWORD *, __int64, __int64); // rax
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(__int64 **)(a1 + 88);
  v6 = a2;
  v7 = *v3;
  v8 = *(_DWORD *)(a1 + 60);
  v10[0] = *(_DWORD *)(a1 + 56);
  v10[2] = v10[0] + 1;
  v9 = *(void (__fastcall **)(__int64 *, _DWORD *, __int64, __int64))(v7 + 24);
  v10[1] = v8;
  v10[3] = v8 + 1;
  v9(v3, v10, v6, a3);
  if ( *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56) != *(_DWORD *)(a1 + 256)
    || *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60) != *(_DWORD *)(a1 + 260) )
  {
    CShrinkButtonElement::_RecreateShrinkableVisual((CShrinkButtonElement *)a1);
  }
  CShrinkButtonElement::_SetShrink((CShrinkButtonElement *)a1);
}
