/*
 * XREFs of ?Unhide@CVisual@@QEAAXXZ @ 0x180068984
 * Callers:
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800133AC (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180013BB4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180013E68 (-OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@07$00@@YA?AVDirtyFlags@@XZ @ 0x180068A30 (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@07$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::Unhide(CVisual *this, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rax
  __int64 v5; // r9
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 10))-- == 1 )
  {
    v4 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__07_00__YA_AVDirtyFlags__XZ(
                           &v6,
                           a2,
                           a3,
                           this);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, *v4);
  }
}
