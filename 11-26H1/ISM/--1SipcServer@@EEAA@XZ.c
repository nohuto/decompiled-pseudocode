/*
 * XREFs of ??1SipcServer@@EEAA@XZ @ 0x18010F940
 * Callers:
 *     ??_ESipcServer@@EEAAPEAXI@Z @ 0x18010FA90 (--_ESipcServer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x18010F76C (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x180110430 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 *     ?Reset@SipcLocalSid@@QEAAXXZ @ 0x180113098 (-Reset@SipcLocalSid@@QEAAXXZ.c)
 */

void __fastcall SipcServer::~SipcServer(SipcServer *this)
{
  *(_QWORD *)this = &SipcServer::`vftable'{for `SipcObjectBase<ISIPCServer>'};
  *((_QWORD *)this + 2) = &SipcServer::`vftable'{for `SipcEndpointOwner'};
  NtList<SipcServer::EndpointListEntry>::Clear((char *)this + 112);
  AggregateWaitHandle::~AggregateWaitHandle((HANDLE *)this + 8);
  *((_QWORD *)this + 2) = &SipcEndpointOwner::`vftable';
  SipcLocalSid::Reset((SipcServer *)((char *)this + 48));
  *(_QWORD *)this = &SipcObjectBase<ISIPCServer>::`vftable';
}
