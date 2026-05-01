/*
 * XREFs of ?_SetShrink@CShrinkButtonElement@@IEAAXXZ @ 0x1804CF34C
 * Callers:
 *     ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804CF440 (-v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 *     ?v_SetRenderMode@CShrinkButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x1804CF500 (-v_SetRenderMode@CShrinkButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@.c)
 *     ?v_SetRenderMode@SwitchItemThumbnailElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x1804D4290 (-v_SetRenderMode@SwitchItemThumbnailElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElem.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1804CF028 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CShrinkButtonElement::_SetShrink(CShrinkButtonElement *this)
{
  double v2; // xmm7_8
  int v3; // eax
  LONG v4; // eax
  struct tagRECT rc; // [rsp+30h] [rbp-48h] BYREF

  v2 = DOUBLE_1_0;
  LOBYTE(v3) = CMultitaskingViewButtonElement::_CalcButtonRenderMode((__int64)this);
  if ( v3 == 2 )
    v2 = *((double *)this + 29);
  v4 = *((_DWORD *)this + 65);
  rc.right = *((_DWORD *)this + 64);
  *(_QWORD *)&rc.left = 0LL;
  rc.bottom = v4;
  InflateRect(&rc, (int)((double)rc.right * (1.0 - v2) * -0.5), (int)((double)v4 * (1.0 - v2) * -0.5));
  (*(void (__fastcall **)(_QWORD, struct tagRECT *, __int64))(**((_QWORD **)this + 33) + 24LL))(
    *((_QWORD *)this + 33),
    &rc,
    3LL);
}
