/*
 * XREFs of ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x14021312C
 * Callers:
 *     ProcessChannelSuspended @ 0x140213820 (ProcessChannelSuspended.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelSuspended(DXGVMBUSCHANNEL *this, __int64 a2)
{
  DXGVMBUSCHANNEL *v3; // rdi
  DXGVMBUSCHANNEL *v4; // rcx
  __int64 v5; // rax
  bool v6; // zf
  struct _KEVENT *v7; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  WdLogGlobalForLineNumber = 662;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v3 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 6);
  while ( v3 != (DXGVMBUSCHANNEL *)((char *)this + 48) )
  {
    v4 = v3;
    v3 = *(DXGVMBUSCHANNEL **)v3;
    v5 = (__int64)v4 + 120;
    if ( !v4 )
      v5 = 136LL;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 32LL))(*(_QWORD *)v5);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
  v6 = *((_QWORD *)this + 4) == 0LL;
  *((_BYTE *)this + 25) = 1;
  if ( !v6 )
  {
    if ( *((_BYTE *)this + 26) )
    {
      WdLogSingleEntry1(3LL);
      v7 = (struct _KEVENT *)*((_QWORD *)this + 4);
      WdLogGlobalForLineNumber = 697;
      KeSetEvent(v7, 0, 0);
    }
  }
}
