/*
 * XREFs of ?Disconnect@SipcEndpoint@@UEAAXXZ @ 0x1801117D0
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180060180 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x1800606A0 (-DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z.c)
 *     ?OnDisposePublic@SipcEndpoint@@EEAAXXZ @ 0x1801123A0 (-OnDisposePublic@SipcEndpoint@@EEAAXXZ.c)
 *     ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x180112FEC (-RemoveOwner@SipcEndpoint@@QEAAXXZ.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180093550 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     ?EnableSectionEvents@SipcPort@@QEAAXXZ @ 0x1801118C0 (-EnableSectionEvents@SipcPort@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SipcEndpoint::Disconnect(SipcEndpoint *this)
{
  if ( *((_BYTE *)this + 60) )
  {
    SipcPort::EnableSectionEvents(*((SipcPort **)this + 2));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
    SipcWin32Handle::Reset((void **)this + 3);
    SipcWin32Handle::Reset((void **)this + 4);
    *((_BYTE *)this + 60) = 0;
    *((_DWORD *)this + 16) = 0;
  }
}
