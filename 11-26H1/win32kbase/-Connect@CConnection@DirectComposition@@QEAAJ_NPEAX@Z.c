/*
 * XREFs of ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140229D3C
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140229ED8 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1400B17A4 (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14012B944 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x140163454 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14017D34C (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1401B3550 (-OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::Connect(DirectComposition::CConnection *this, char a2, void *a3)
{
  __int64 v6; // rcx
  bool v7; // zf
  int v8; // ebx
  void *CurrentProcess; // rax
  __int64 v11; // rdx
  void *v12; // rbx
  bool v13; // al

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)this + 2));
  v7 = *((_DWORD *)this + 37) == 0;
  *((_BYTE *)this + 253) = a2;
  if ( !v7 )
  {
    v8 = -1073741258;
LABEL_3:
    DirectComposition::CConnection::Disconnect(this);
    goto LABEL_4;
  }
  CurrentProcess = (void *)PsGetCurrentProcess(v6);
  v12 = CurrentProcess;
  if ( CurrentProcess )
    ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( *(_QWORD *)this )
    ObfDereferenceObject(*(PVOID *)this);
  *(_QWORD *)this = v12;
  v8 = DirectComposition::CEvent::Create(a3, v11, (struct DirectComposition::CEvent **)this + 11);
  if ( v8 < 0 )
    goto LABEL_3;
  *((_DWORD *)this + 37) = 1;
  *((_DWORD *)this + 36) = 0;
  DirectComposition::CChannelGroup::OnConnectionReconnected((DirectComposition::CConnection *)((char *)this + 24));
  KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 11) + 8LL), 1, 0);
  ExAcquirePushLockSharedEx((char *)this + 200, 0LL);
  *((_BYTE *)this + 208) = 0;
  if ( *((_DWORD *)this + 61) )
    DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), 1);
  if ( *((_DWORD *)this + 62) )
    v13 = (int)DirectComposition::CSystemChannel::BoostCompositorClock(
                 *((DirectComposition::CSystemChannel **)this + 19),
                 1) >= 0;
  else
    v13 = 0;
  *((_BYTE *)this + 252) = v13;
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
LABEL_4:
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return (unsigned int)v8;
}
