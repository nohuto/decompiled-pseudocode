/*
 * XREFs of ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140416A0C
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019F50C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidSchSetRecoveryThread@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_KTHREAD@@@Z @ 0x14006F7B0 (-VidSchSetRecoveryThread@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_KTHREAD@@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x14018EA50 (TdrBugcheckOnTimeout.c)
 *     ?ResetSchedulerFromTDR@ADAPTER_RENDER@@QEAAXXZ @ 0x1401937C0 (-ResetSchedulerFromTDR@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?RestartSchedulerFromTDR@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A9AB0 (-RestartSchedulerFromTDR@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401C383C (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x14030EEC4 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x14030F4A4 (-PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x14030FA84 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1403D8EE8 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x140416C58 (-DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::Reset(ADAPTER_RENDER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  _QWORD *i; // rdx
  char *v5; // rdx
  char *j; // rcx
  char *v7; // rax
  char *v8; // rax
  int v9; // eax
  int restarted; // eax
  VIDSCH_EXPORT *v11; // rcx
  unsigned int v12; // esi
  char *v13; // r14
  char *k; // rdi
  char *v15; // rax
  DXGDEVICE *v16; // rcx
  DXGDEVICE *v17; // rdi
  DXGDEVICE *m; // rbx
  DXGDEVICE *v19; // rax
  DXGDEVICE *v20; // rcx

  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  ADAPTER_RENDER::DisablePinnedHardware(this);
  ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 256, 0LL);
  *((_QWORD *)this + 33) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 35); i != (_QWORD *)((char *)this + 280); i = (_QWORD *)*i )
    *(_DWORD *)(i[2] + 12LL) |= 0x10u;
  *((_QWORD *)this + 33) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 256, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 192));
  v5 = (char *)this + 240;
  for ( j = (char *)*((_QWORD *)this + 30); ; j = *(char **)j )
  {
    v7 = 0LL;
    if ( j != v5 )
      v7 = j;
    if ( !v7 )
      break;
    v8 = j;
    if ( j == v5 )
      v8 = 0LL;
    v8[25] = 1;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 24);
  ADAPTER_RENDER::ResetSchedulerFromTDR(this);
  v9 = ADAPTER_RENDER::DdiRestartFromTimeout(this);
  if ( v9 < 0 )
  {
    *((_QWORD *)a2 + 13) = *(_QWORD *)(*((_QWORD *)this + 2) + 584LL);
    TdrBugcheckOnTimeout(a2, v9, 4);
  }
  restarted = ADAPTER_RENDER::RestartSchedulerFromTDR(this);
  v11 = (VIDSCH_EXPORT *)*((_QWORD *)this + 92);
  v12 = restarted;
  if ( restarted < 0 )
  {
    *((_QWORD *)a2 + 13) = *(_QWORD *)(*((_QWORD *)v11 + 1) + 776LL);
    TdrBugcheckOnTimeout(a2, restarted, 14);
  }
  VIDSCH_EXPORT::VidSchSetRecoveryThread(v11, *((struct _VIDSCH_GLOBAL **)this + 93), 0LL);
  ADAPTER_RENDER::RestoreFromPurgeSegments(this);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)a2 + 363) )
    ADAPTER_RENDER::ResumeVidMmWorkerThread(this, 1, 0);
  v13 = (char *)this + 144;
  *(_OWORD *)((char *)this + 824) = 0LL;
  *(_OWORD *)((char *)this + 840) = 0LL;
  *(_OWORD *)((char *)this + 1224) = 0LL;
  for ( k = (char *)*((_QWORD *)this + 18); ; k = *(char **)k )
  {
    v15 = 0LL;
    if ( k != v13 )
      v15 = k;
    if ( !v15 )
      break;
    v16 = (DXGDEVICE *)k;
    if ( k == v13 )
      v16 = 0LL;
    if ( *((_DWORD *)v16 + 116) != 3 )
      DXGDEVICE::Reset(v16, 1);
  }
  v17 = (ADAPTER_RENDER *)((char *)this + 160);
  for ( m = (DXGDEVICE *)*((_QWORD *)this + 20); ; m = *(DXGDEVICE **)m )
  {
    v19 = 0LL;
    if ( m != v17 )
      v19 = m;
    if ( !v19 )
      break;
    v20 = m;
    if ( m == v17 )
      v20 = 0LL;
    DXGDEVICE::Reset(v20, 1);
  }
  return v12;
}
