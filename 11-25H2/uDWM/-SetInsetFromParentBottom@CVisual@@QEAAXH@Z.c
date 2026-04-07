/*
 * XREFs of ?SetInsetFromParentBottom@CVisual@@QEAAXH@Z @ 0x18006CE20
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18000C8B0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetInsetFromParentBottom(CVisual *this, int a2)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 23) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 23) = a2;
    (*(void (__fastcall **)(CVisual *, __int64))(v2 + 24))(this, 2LL);
  }
}
