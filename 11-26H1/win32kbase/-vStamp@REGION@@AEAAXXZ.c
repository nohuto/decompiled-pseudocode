/*
 * XREFs of ?vStamp@REGION@@AEAAXXZ @ 0x14010F950
 * Callers:
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     GreIntersectVisRect @ 0x1401BABF0 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

void __fastcall REGION::vStamp(REGION *this)
{
  *((_DWORD *)this + 18) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(this) + 88)
                                                                           + 4248LL));
}
