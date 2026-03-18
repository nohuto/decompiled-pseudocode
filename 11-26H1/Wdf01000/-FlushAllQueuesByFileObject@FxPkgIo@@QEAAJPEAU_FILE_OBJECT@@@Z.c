/*
 * XREFs of ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x14004A538
 * Callers:
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x14004A0A0 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x14004BC44 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004EFB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgIo::FlushAllQueuesByFileObject(FxPkgIo *this, _FILE_OBJECT *FileObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r14
  _LIST_ENTRY *p_m_IoQueueListHead; // rcx
  _LIST_ENTRY *Flink; // rax
  FxVerifierLock *v10; // rcx
  unsigned __int8 v11; // r8
  FxVerifierLock *v13; // rcx
  FxIoQueue *p_Blink; // rbx
  _LIST_ENTRY *v15; // rdi
  _LIST_ENTRY *Blink; // rax
  unsigned int RefCount; // edx
  FxTagTracker *v18; // rcx
  _LIST_ENTRY *v19; // rax
  bool v20; // zf
  unsigned __int8 v21; // di
  unsigned __int16 v22; // r9
  FxIrpQueue *p_m_Queue; // r14
  FxIrpQueue *i; // rdx
  int *p_m_RequestCount; // rcx
  _LIST_ENTRY *v26; // r8
  __int64 v27; // rax
  FxIrpQueue *v28; // rdx
  FxIrpQueue **v29; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  unsigned int v32; // edx
  unsigned __int8 v33; // r8
  unsigned __int8 v34; // r8
  unsigned __int8 v35; // r8
  unsigned __int8 v36; // r14
  _LIST_ENTRY *v37; // rdi
  _LIST_ENTRY *v38; // rax
  unsigned int v39; // edx
  FxTagTracker *v40; // rcx
  _LIST_ENTRY *v41; // rax
  FxVerifierLock *v42; // rcx
  FxVerifierLock *v43; // rcx
  FxVerifierLock *v44; // rcx
  FxVerifierLock *v45; // rcx
  FxTagTracker *v46; // rcx
  FxIoQueueNode flushBookmark; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+A0h] [rbp+50h] BYREF

  m_Globals = this->m_Globals;
  flushBookmark.m_ListEntry.Blink = (_LIST_ENTRY *)&flushBookmark;
  flushBookmark.m_Type = FxIoQueueNodeTypeBookmark;
  flushBookmark.m_ListEntry.Flink = (_LIST_ENTRY *)&flushBookmark;
  irql = 0;
  if ( KeGetCurrentIrql() )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v10 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
    {
      FxVerifierLock::Lock(v10, &irql, v5);
      v7 = irql;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      irql = v7;
    }
    p_m_IoQueueListHead = &this->m_IoQueueListHead;
    Flink = this->m_IoQueueListHead.Flink;
    if ( Flink->Blink != &this->m_IoQueueListHead )
      goto LABEL_5;
    flushBookmark.m_ListEntry.Flink = this->m_IoQueueListHead.Flink;
    flushBookmark.m_ListEntry.Blink = &this->m_IoQueueListHead;
    p_Blink = 0LL;
    Flink->Blink = (_LIST_ENTRY *)&flushBookmark;
    v15 = flushBookmark.m_ListEntry.Flink;
    p_m_IoQueueListHead->Flink = (_LIST_ENTRY *)&flushBookmark;
    Blink = flushBookmark.m_ListEntry.Blink;
    if ( (FxIoQueueNode *)v15->Blink != &flushBookmark
      || flushBookmark.m_ListEntry.Blink->Flink != (_LIST_ENTRY *)&flushBookmark )
    {
      goto LABEL_5;
    }
    flushBookmark.m_ListEntry.Blink->Flink = v15;
    v15->Blink = Blink;
    flushBookmark.m_ListEntry.Blink = (_LIST_ENTRY *)&flushBookmark;
    flushBookmark.m_ListEntry.Flink = (_LIST_ENTRY *)&flushBookmark;
    while ( v15 != p_m_IoQueueListHead )
    {
      if ( LODWORD(v15[1].Flink) == 1 )
      {
        p_Blink = (FxIoQueue *)&v15[-57].Blink;
        RefCount = _InterlockedIncrement((volatile signed __int32 *)&v15[-56].Flink + 1);
        if ( ((__int64)v15[-55].Flink & 0x80) != 0 )
        {
          v18 = (FxTagTracker *)v15[-60].Blink;
          if ( v18 )
            FxTagTracker::UpdateTagHistory(
              v18,
              (void *)0x73756C66,
              1687,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              RefCount);
        }
        v19 = v15->Flink;
        if ( v15->Flink->Blink != v15 )
          goto LABEL_5;
        flushBookmark.m_ListEntry.Flink = v15->Flink;
        flushBookmark.m_ListEntry.Blink = v15;
        v19->Blink = (_LIST_ENTRY *)&flushBookmark;
        v15->Flink = (_LIST_ENTRY *)&flushBookmark;
        break;
      }
      v15 = v15->Flink;
    }
    if ( (this->m_ObjectFlags & 0x80) != 0 && (v42 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
      FxVerifierLock::Unlock(v42, v7, v6);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v7);
    while ( p_Blink )
    {
      v20 = p_Blink->m_SupportForwardProgress == 0;
      PreviousIrql = 0;
      if ( !v20 )
        FxIoQueue::PurgeForwardProgressIrps(p_Blink, FileObject);
      if ( (p_Blink->m_ObjectFlags & 0x80) != 0
        && (v43 = *(FxVerifierLock **)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v43, &PreviousIrql, v11);
        v21 = PreviousIrql;
      }
      else
      {
        v21 = KeAcquireSpinLockRaiseToDpc(&p_Blink->m_NPLock.m_Lock);
        PreviousIrql = v21;
      }
      p_m_Queue = &p_Blink->m_Queue;
LABEL_33:
      for ( i = (FxIrpQueue *)p_m_Queue->m_Queue.Flink; ; i = (FxIrpQueue *)i->m_Queue.Flink )
      {
        p_m_RequestCount = 0LL;
        if ( i == p_m_Queue )
          break;
        p_m_RequestCount = &i[-5].m_RequestCount;
        if ( !FileObject || *(_FILE_OBJECT **)(*((_QWORD *)p_m_RequestCount + 23) + 48LL) == FileObject )
          break;
      }
      while ( p_m_RequestCount )
      {
        v26 = (_LIST_ENTRY *)(p_m_RequestCount + 42);
        v27 = _InterlockedExchange64((volatile __int64 *)p_m_RequestCount + 13, 0LL);
        v28 = (FxIrpQueue *)*((_QWORD *)p_m_RequestCount + 21);
        if ( v27 )
        {
          if ( v28->m_Queue.Blink == v26 )
          {
            v29 = (FxIrpQueue **)*((_QWORD *)p_m_RequestCount + 22);
            if ( *v29 == (FxIrpQueue *)v26 )
            {
              *v29 = v28;
              v28->m_Queue.Blink = (_LIST_ENTRY *)v29;
              *((_QWORD *)p_m_RequestCount + 22) = p_m_RequestCount + 42;
              v26->Flink = v26;
              --p_Blink->m_Queue.m_RequestCount;
              v30 = *((_QWORD *)p_m_RequestCount + 18);
              if ( *(_DWORD *)v30 == 1 )
                *(_QWORD *)(v30 + 8) = 0LL;
              *((_QWORD *)p_m_RequestCount + 18) = 0LL;
              v31 = *(_QWORD *)(v30 - 120);
              *(_QWORD *)(v30 + 104) = 0LL;
              (*(void (__fastcall **)(__int64, __int64, __int64, const char *))(v31 + 16))(
                v30 - 120,
                1969583441LL,
                2102LL,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
              v32 = _InterlockedIncrement((volatile signed __int32 *)(v30 - 108));
              if ( *(char *)(v30 - 96) < 0 )
              {
                v46 = *(FxTagTracker **)(v30 - 168);
                if ( v46 )
                  FxTagTracker::UpdateTagHistory(
                    v46,
                    (void *)0x75657551,
                    4330,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
                    TagAddRef,
                    v32);
              }
              FxIoQueue::CancelForQueue(p_Blink, (FxRequest *)(v30 - 120), v21);
              if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0
                && (v45 = *(FxVerifierLock **)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
              {
                FxVerifierLock::Lock(v45, &PreviousIrql, v33);
                v21 = PreviousIrql;
              }
              else
              {
                v21 = KeAcquireSpinLockRaiseToDpc(&p_Blink->m_NPLock.m_Lock);
                PreviousIrql = v21;
              }
              goto LABEL_33;
            }
          }
LABEL_5:
          __fastfail(3u);
        }
        while ( 1 )
        {
          p_m_RequestCount = 0LL;
          if ( v28 == p_m_Queue )
            break;
          p_m_RequestCount = &v28[-5].m_RequestCount;
          if ( !FileObject || *(_FILE_OBJECT **)(*((_QWORD *)p_m_RequestCount + 23) + 48LL) == FileObject )
            break;
          v28 = (FxIrpQueue *)v28->m_Queue.Flink;
        }
      }
      FxIoQueue::DispatchEvents(p_Blink, v21, 0LL, v22);
      p_Blink->Release(
        p_Blink,
        (void *)1937075302,
        1442,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      if ( (this->m_ObjectFlags & 0x80) != 0 && (v44 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
      {
        FxVerifierLock::Lock(v44, &irql, v34);
        v36 = irql;
      }
      else
      {
        v36 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        irql = v36;
      }
      v37 = flushBookmark.m_ListEntry.Flink;
      v38 = flushBookmark.m_ListEntry.Blink;
      p_Blink = 0LL;
      if ( (FxIoQueueNode *)flushBookmark.m_ListEntry.Flink->Blink != &flushBookmark
        || flushBookmark.m_ListEntry.Blink->Flink != (_LIST_ENTRY *)&flushBookmark )
      {
        goto LABEL_5;
      }
      flushBookmark.m_ListEntry.Blink->Flink = flushBookmark.m_ListEntry.Flink;
      v37->Blink = v38;
      flushBookmark.m_ListEntry.Blink = (_LIST_ENTRY *)&flushBookmark;
      flushBookmark.m_ListEntry.Flink = (_LIST_ENTRY *)&flushBookmark;
      while ( 1 )
      {
        if ( v37 == &this->m_IoQueueListHead )
          goto LABEL_9;
        if ( LODWORD(v37[1].Flink) == 1 )
          break;
        v37 = v37->Flink;
      }
      p_Blink = (FxIoQueue *)&v37[-57].Blink;
      v39 = _InterlockedIncrement((volatile signed __int32 *)&v37[-56].Flink + 1);
      if ( ((__int64)v37[-55].Flink & 0x80) != 0 )
      {
        v40 = (FxTagTracker *)v37[-60].Blink;
        if ( v40 )
          FxTagTracker::UpdateTagHistory(
            v40,
            (void *)0x73756C66,
            1687,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
            TagAddRef,
            v39);
      }
      v41 = v37->Flink;
      if ( v37->Flink->Blink != v37 )
        goto LABEL_5;
      flushBookmark.m_ListEntry.Flink = v37->Flink;
      flushBookmark.m_ListEntry.Blink = v37;
      v41->Blink = (_LIST_ENTRY *)&flushBookmark;
      v37->Flink = (_LIST_ENTRY *)&flushBookmark;
LABEL_9:
      if ( (this->m_ObjectFlags & 0x80) != 0 && (v13 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
        FxVerifierLock::Unlock(v13, v36, v35);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, v36);
    }
  }
  return 0LL;
}
