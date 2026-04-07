/*
 * XREFs of ?SetHeight@CVisual@@QEAAXH@Z @ 0x1800948AC
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18000C8B0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x180094858 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetHeight(CVisual *this, int a2)
{
  __int64 v2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v3 = *((_DWORD *)this + 18);
  v2 = *(_QWORD *)this;
  v4 = a2;
  (*(void (__fastcall **)(CVisual *, int *))(v2 + 80))(this, &v3);
}
