/*
 * XREFs of ?DetachPrepareForDestroy@MenuStateOwnerLockxxxUnlock@@QEAAXXZ @ 0x1401C9AD4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall MenuStateOwnerLockxxxUnlock::DetachPrepareForDestroy(MenuStateOwnerLockxxxUnlock *this)
{
  if ( *(_QWORD *)this )
  {
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    *(_QWORD *)this = 0LL;
  }
}
