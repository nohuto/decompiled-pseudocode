/*
 * XREFs of ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x14009004C
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140044190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1400755B4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x14008E990 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x140090010 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C68D0 (-vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaledSurface(DC *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 62);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 116) & 0x800) != 0;
  return v2;
}
