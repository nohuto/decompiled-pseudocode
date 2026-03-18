/*
 * XREFs of ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x140212F60
 * Callers:
 *     ProcessChannelClosed @ 0x140213770 (ProcessChannelClosed.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x140212D40 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelClosed(struct _EX_RUNDOWN_REF *this, __int64 a2)
{
  DXGVMBUSCHANNEL *Count; // rbx
  unsigned __int64 v4; // rdx
  DXGVMBUSCHANNEL *v5; // rax
  struct _KEVENT *v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  WdLogGlobalForLineNumber = 629;
  ExWaitForRundownProtectionRelease(this + 8);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGFASTMUTEX *const)&this[9], 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  Count = (DXGVMBUSCHANNEL *)this[6].Count;
  while ( Count != (DXGVMBUSCHANNEL *)&this[6] )
  {
    v4 = (unsigned __int64)Count - 16;
    v5 = Count;
    Count = *(DXGVMBUSCHANNEL **)Count;
    DXGCHANNELENDPOINTPROXY::NotifyChannelClosed((DXGCHANNELENDPOINTPROXY *)(v4 & -(__int64)(v5 != 0LL)));
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
  v6 = (struct _KEVENT *)this[4].Count;
  if ( v6 )
    KeSetEvent(v6, 0, 0);
}
