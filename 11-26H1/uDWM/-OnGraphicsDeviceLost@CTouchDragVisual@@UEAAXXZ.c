/*
 * XREFs of ?OnGraphicsDeviceLost@CTouchDragVisual@@UEAAXXZ @ 0x1800CC8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTouchDragVisual::OnGraphicsDeviceLost(CTouchDragVisual *this)
{
  int v2; // eax
  int *v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 23) + 104LL))(*((_QWORD *)this + 23), 0LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x12B,
      (int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
      (const char *)(unsigned int)v2);
  *((_BYTE *)this + 198) = 0;
  v3 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v5);
  CVisual::SetDirtyFlags((CTouchDragVisual *)((char *)this - 224), *v3);
}
