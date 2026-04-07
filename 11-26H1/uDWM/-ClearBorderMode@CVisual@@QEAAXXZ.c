/*
 * XREFs of ?ClearBorderMode@CVisual@@QEAAXXZ @ 0x18000FC38
 * Callers:
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18000FC00 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@06$00@@YA?AVDirtyFlags@@XZ @ 0x1800166D8 (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@06$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::ClearBorderMode(CVisual *this, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rax
  __int64 v4; // r9
  char v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 32) != -1 )
  {
    *((_DWORD *)this + 32) = -1;
    v3 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__06_00__YA_AVDirtyFlags__XZ(
                           &v5,
                           a2,
                           a3,
                           this);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *v3);
  }
}
