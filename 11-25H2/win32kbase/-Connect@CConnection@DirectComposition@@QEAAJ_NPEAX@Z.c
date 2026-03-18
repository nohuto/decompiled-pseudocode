/*
 * XREFs of ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x1402279DC
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140227B78 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F56C (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x14004FD44 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x140054F2C (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x140056550 (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x140057CC4 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1400E47F0 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x14019A534 (-OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::Connect(DirectComposition::CConnection *this, char a2, void *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  int v9; // ebx
  void *CurrentProcess; // rax
  __int64 v12; // rdx
  void *v13; // rbx
  bool v14; // al

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)this + 2));
  v8 = *((_DWORD *)this + 37) == 0;
  *((_BYTE *)this + 253) = a2;
  if ( !v8 )
  {
    v9 = -1073741258;
LABEL_3:
    DirectComposition::CConnection::Disconnect(this);
    goto LABEL_4;
  }
  CurrentProcess = (void *)PsGetCurrentProcess(v7, v6);
  v13 = CurrentProcess;
  if ( CurrentProcess )
    ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( *(_QWORD *)this )
    ObfDereferenceObject(*(PVOID *)this);
  *(_QWORD *)this = v13;
  v9 = DirectComposition::CEvent::Create(a3, v12, (struct DirectComposition::CEvent **)this + 11);
  if ( v9 < 0 )
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
    v14 = (int)DirectComposition::CSystemChannel::BoostCompositorClock(
                 *((DirectComposition::CSystemChannel **)this + 19),
                 1) >= 0;
  else
    v14 = 0;
  *((_BYTE *)this + 252) = v14;
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
LABEL_4:
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  DirectComposition::CChannel::Unlock(*((PERESOURCE **)this + 19));
  return (unsigned int)v9;
}
