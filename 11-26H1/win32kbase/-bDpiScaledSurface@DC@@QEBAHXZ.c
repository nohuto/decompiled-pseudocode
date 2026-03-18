/*
 * XREFs of ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x140038E94
 * Callers:
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x140037DB8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x14003AC1C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x14003AC58 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14003E960 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
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
