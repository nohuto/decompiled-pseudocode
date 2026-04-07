/*
 * XREFs of ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18007CC88
 * Callers:
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x18000BB44 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180014140 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18002317C (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18007CAF0 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x18008A8F0 (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::ClearInterpolationMode(CVisual *this)
{
  __int64 v1; // rax

  if ( *((_DWORD *)this + 33) != -1 )
  {
    v1 = *(_QWORD *)this;
    *((_DWORD *)this + 33) = -1;
    (*(void (__fastcall **)(CVisual *, __int64))(v1 + 24))(this, 64LL);
  }
}
