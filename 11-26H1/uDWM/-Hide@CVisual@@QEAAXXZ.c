/*
 * XREFs of ?Hide@CVisual@@QEAAXXZ @ 0x180078960
 * Callers:
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800133AC (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180013BB4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180013E68 (-OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800BC720 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@07$00@@YA?AVDirtyFlags@@XZ @ 0x180068A30 (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@07$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::Hide(CVisual *this)
{
  _DWORD *v2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 10) )
  {
    v2 = ___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__07_00__YA_AVDirtyFlags__XZ(&v3);
    (*(void (__fastcall **)(CVisual *, _QWORD))(*(_QWORD *)this + 24LL))(this, (unsigned int)*v2);
  }
  ++*((_DWORD *)this + 10);
}
