/*
 * XREFs of ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x140213018
 * Callers:
 *     ProcessChannelPostStarted @ 0x1402137A0 (ProcessChannelPostStarted.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelPostStarted(DXGVMBUSCHANNEL *this, __int64 a2)
{
  DXGFASTMUTEX *v3; // rdi
  char v4; // bp
  DXGVMBUSCHANNEL *v5; // rsi
  DXGVMBUSCHANNEL *v6; // rcx
  __int64 v7; // rax
  char v8; // si
  struct _KEVENT *v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (DXGVMBUSCHANNEL *)((char *)this + 120);
  v4 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  WdLogGlobalForLineNumber = 713;
  if ( !DXGFASTMUTEX::IsOwner(v3) )
  {
    DXGFASTMUTEX::Acquire((DXGVMBUSCHANNEL *)((char *)this + 120));
    v4 = 1;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v5 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 6);
  while ( v5 != (DXGVMBUSCHANNEL *)((char *)this + 48) )
  {
    v6 = v5;
    v5 = *(DXGVMBUSCHANNEL **)v5;
    v7 = (__int64)v6 + 120;
    if ( !v6 )
      v7 = 136LL;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 48LL))(*(_QWORD *)v7);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  v8 = *((_BYTE *)this + 26);
  *(_WORD *)((char *)this + 25) = 0;
  if ( v4 )
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 15);
  ExReInitializeRundownProtection((PEX_RUNDOWN_REF)this + 8);
  v9 = (struct _KEVENT *)*((_QWORD *)this + 4);
  if ( v9 )
  {
    if ( v8 )
      KeSetEvent(v9, 0, 0);
  }
}
