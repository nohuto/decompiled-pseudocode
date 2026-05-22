/*
 * XREFs of ??1GameInputServerProxy@@EEAA@XZ @ 0x18010EB84
 * Callers:
 *     ??_GGameInputServerProxy@@EEAAPEAXI@Z @ 0x18010ECE0 (--_GGameInputServerProxy@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x18006C8D4 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 *     ??1GameInputWatcher@@QEAA@XZ @ 0x18010EC4C (--1GameInputWatcher@@QEAA@XZ.c)
 *     ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x18010EC80 (--_GDevice@GameInputServerProxy@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputServerProxy::~GameInputServerProxy(RTL_SRWLOCK *this)
{
  unsigned int v2; // edx
  PVOID Ptr; // rcx
  GameInputServerProxy::Device *v4; // rbx
  GameInputServerProxy::Device *v5; // rcx
  __int64 v6; // rax

  this->Ptr = &GameInputServerProxy::`vftable'{for `IGameInputServer'};
  this[1].Ptr = &GameInputServerProxy::`vftable'{for `IAgileObject'};
  this[2].Ptr = &GameInputServerProxy::`vftable'{for `INoMarshal'};
  GameInputServerProxy::UnloadGameInput(this);
  Ptr = this[6].Ptr;
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  GameInputServerProxy::s_singleton = 0LL;
  v4 = (GameInputServerProxy::Device *)&this[24];
  while ( 1 )
  {
    v5 = *(GameInputServerProxy::Device **)v4;
    if ( *(GameInputServerProxy::Device **)(*(_QWORD *)v4 + 8LL) != v4
      || (v6 = *(_QWORD *)v5, *(GameInputServerProxy::Device **)(*(_QWORD *)v5 + 8LL) != v5) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v5 == v4 )
      break;
    if ( v5 )
      GameInputServerProxy::Device::`scalar deleting destructor'(v5, v2);
    --LODWORD(this[26].Ptr);
  }
  GameInputWatcher::~GameInputWatcher((GameInputWatcher *)&this[8]);
  this->Ptr = &RefCountedObjectBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IGameInputServer'};
  this[1].Ptr = &RefCountedObjectBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IAgileObject'};
  this[2].Ptr = &RefCountedObjectBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `INoMarshal'};
}
