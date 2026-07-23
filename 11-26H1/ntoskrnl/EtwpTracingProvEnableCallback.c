/*
 * XREFs of EtwpTracingProvEnableCallback @ 0x140B4E130
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwpEventWriteEnableInfo @ 0x14082B5EC (EtwpEventWriteEnableInfo.c)
 *     EtwpEventWriteGuidEntry @ 0x14082B6D8 (EtwpEventWriteGuidEntry.c)
 *     EtwpEventWriteRegEntry @ 0x14082B758 (EtwpEventWriteRegEntry.c)
 *     EtwpGetNextGuidEntry @ 0x140912280 (EtwpGetNextGuidEntry.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpEventWriteTemplateSession @ 0x140AB32A0 (EtwpEventWriteTemplateSession.c)
 */

void __fastcall EtwpTracingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        struct _KLOCK_ENTRIES *MatchAnyKeyword)
{
  __int64 v4; // rcx
  char v5; // bp
  unsigned int i; // ebx
  unsigned int *v7; // rax
  __int64 v8; // rcx
  unsigned int *v9; // rdi
  _DWORD *j; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int32 *v12; // rsi
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rdi
  __int64 v16; // rcx
  unsigned int v17; // edi
  _DWORD *v18; // rsi
  __int64 v19; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rdx
  __int64 v22; // rtt
  _QWORD *NextGuidEntry; // rax
  struct _KLOCK_ENTRIES *v24; // r9
  __int64 v25; // rbx
  _DWORD *k; // rdx
  __int64 v27; // rax
  struct _KTHREAD *v28; // rax
  AutoBoost *v29; // rax
  void *v30; // rdx
  AutoBoost *v31; // rdi
  __int64 v32; // rcx
  unsigned int v33; // edi
  _DWORD *v34; // rsi
  __int64 v35; // rcx
  _QWORD *m; // rdi
  __int64 v37; // rcx
  signed __int64 v38; // rax
  signed __int64 v39; // rdx
  __int64 v40; // rtt
  _QWORD *v41; // rax
  struct _KLOCK_ENTRIES *v42; // r9
  _QWORD *v43; // rbx

  if ( ControlCode == 2 )
  {
    v4 = EtwpHostSiloState;
    v5 = 0;
    for ( i = 0; i < *(_DWORD *)(EtwpHostSiloState + 16); ++i )
    {
      v7 = EtwpAcquireLoggerContextByLoggerId(v4, i, 0);
      v9 = v7;
      if ( v7 )
      {
        EtwpEventWriteTemplateSession(v8, (const EVENT_DESCRIPTOR *)ETW_EVENT_SESSION_INFO, (__int64)v7);
        EtwpReleaseLoggerContext(v9, 0);
      }
      v4 = EtwpHostSiloState;
    }
    for ( j = 0LL; ; j = (_DWORD *)v25 )
    {
      NextGuidEntry = EtwpGetNextGuidEntry(v4, j, 2u, MatchAnyKeyword);
      v25 = (__int64)NextGuidEntry;
      if ( !NextGuidEntry )
        break;
      CurrentThread = KeGetCurrentThread();
      v12 = (volatile signed __int32 *)(NextGuidEntry + 83);
      --CurrentThread->KernelApcDisable;
      v13 = (AutoBoost *)KeAbPreAcquire((__int64)(NextGuidEntry + 83), 0LL, 0LL, v24);
      v15 = v13;
      if ( _interlockedbittestandset64(v12, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 + 664), v13, v25 + 664);
      if ( v15 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v15, v14);
        else
          *((_BYTE *)v15 + 10) = 1;
      }
      *(_QWORD *)(v25 + 672) = KeGetCurrentThread();
      if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_GROUP_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v16, &ETW_EVENT_GROUP_ENTRY_INFO, v25);
      v17 = 0;
      v18 = (_DWORD *)(v25 + 128);
      do
      {
        if ( *v18
          && EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_ENABLE_INFO) )
        {
          EtwpEventWriteEnableInfo(v19, v25, v17);
        }
        ++v17;
        v18 += 8;
      }
      while ( v17 < 0x10 );
      *(_QWORD *)(v25 + 672) = 0LL;
      _m_prefetchw((const void *)(v25 + 664));
      v20 = *(_QWORD *)(v25 + 664);
      v21 = v20 - 16;
      if ( (v20 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v21 = 0LL;
      if ( (v20 & 2) != 0
        || (v22 = *(_QWORD *)(v25 + 664),
            v22 != _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 664), v21, v20)) )
      {
        ExfReleasePushLock((_QWORD *)(v25 + 664));
      }
      KeAbPostRelease(v25 + 664);
      KeLeaveCriticalRegion();
      v4 = EtwpHostSiloState;
    }
    for ( k = 0LL; ; k = v43 )
    {
      v41 = EtwpGetNextGuidEntry(EtwpHostSiloState, k, 0, v24);
      v43 = v41;
      if ( !v41 )
        break;
      v27 = v41[5] - *(_QWORD *)&EventTracingProvGuid.Data1;
      if ( !v27 )
        v27 = v43[6] - *(_QWORD *)EventTracingProvGuid.Data4;
      if ( v27 )
      {
        v28 = KeGetCurrentThread();
        --v28->KernelApcDisable;
        v29 = (AutoBoost *)KeAbPreAcquire((__int64)(v43 + 83), 0LL, 0LL, v42);
        v31 = v29;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v43 + 166, 0LL) )
          ExfAcquirePushLockExclusiveEx(v43 + 83, v29, (__int64)(v43 + 83));
        if ( v31 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v31, v30);
          else
            *((_BYTE *)v31 + 10) = 1;
        }
        v5 = 1;
        v43[84] = KeGetCurrentThread();
      }
      if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_GUID_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v32, &ETW_EVENT_GUID_ENTRY_INFO, (__int64)v43);
      v33 = 0;
      v34 = v43 + 16;
      do
      {
        if ( *v34
          && EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_ENABLE_INFO) )
        {
          EtwpEventWriteEnableInfo(v35, (__int64)v43, v33);
        }
        ++v33;
        v34 += 8;
      }
      while ( v33 < 0x10 );
      for ( m = (_QWORD *)v43[7]; m != v43 + 7; m = (_QWORD *)*m )
      {
        if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_REG_ENTRY_INFO) )
          EtwpEventWriteRegEntry(v37, (__int64)m);
      }
      if ( v5 )
      {
        v43[84] = 0LL;
        _m_prefetchw(v43 + 83);
        v38 = v43[83];
        v39 = v38 - 16;
        if ( (v38 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v39 = 0LL;
        if ( (v38 & 2) != 0 || (v40 = v43[83], v40 != _InterlockedCompareExchange64(v43 + 83, v39, v38)) )
          ExfReleasePushLock(v43 + 83);
        KeAbPostRelease((unsigned __int64)(v43 + 83));
        KeLeaveCriticalRegion();
        v5 = 0;
      }
    }
  }
}
