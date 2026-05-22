/*
 * XREFs of ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x18006C8D4
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18006C7BC (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x18010EB84 (--1GameInputServerProxy@@EEAA@XZ.c)
 * Callees:
 *     ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x1800958B4 (-StopWatching@GameInputWatcher@@QEAAXXZ.c)
 *     ??_GGameInputModule@@QEAAPEAXI@Z @ 0x18010ECAC (--_GGameInputModule@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputServerProxy::UnloadGameInput(RTL_SRWLOCK *this)
{
  unsigned int v2; // edx
  PVOID Ptr; // rcx
  GameInputModule *v4; // rcx

  AcquireSRWLockExclusive(this + 4);
  Ptr = this[5].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    this[5].Ptr = 0LL;
  }
  v4 = (GameInputModule *)this[7].Ptr;
  if ( v4 )
  {
    GameInputModule::`scalar deleting destructor'(v4, v2);
    this[7].Ptr = 0LL;
  }
  GameInputWatcher::StopWatching((GameInputWatcher *)&this[8]);
  ReleaseSRWLockExclusive(this + 4);
}
