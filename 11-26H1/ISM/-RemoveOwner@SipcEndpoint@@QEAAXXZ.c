/*
 * XREFs of ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x180112FEC
 * Callers:
 *     ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x18010F868 (--1EndpointListEntry@SipcServer@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SipcEndpoint::RemoveOwner(SipcEndpoint *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 8LL))(*((_QWORD *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
  SipcEndpoint::Disconnect(this);
}
