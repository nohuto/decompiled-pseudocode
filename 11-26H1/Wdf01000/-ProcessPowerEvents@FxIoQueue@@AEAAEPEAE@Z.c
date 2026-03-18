/*
 * XREFs of ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x140062DF4
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x14007C3EC (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1400836C4 (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1400A1A04 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

char __fastcall FxIoQueue::ProcessPowerEvents(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIoQueuePowerState *p_m_PowerState; // r14
  FxIoQueuePowerState m_PowerState; // ecx
  __int32 v8; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  _LIST_ENTRY *p_m_DriverOwned; // r14
  unsigned __int8 v13; // al
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int32 v16; // ecx
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY *v18; // rax
  _LIST_ENTRY *v19; // rdx
  _LIST_ENTRY *v20; // rdx
  _LIST_ENTRY *v21; // r14
  FxIoQueue *j; // rcx
  unsigned int v23; // r15d
  unsigned int v24; // edx
  KIRQL v25; // dl
  WDFREQUEST__ *v26; // r8
  WDFQUEUE__ *v27; // rdx
  __int64 v28; // r8
  unsigned __int8 v29; // r8
  unsigned __int8 *v30; // rdx
  _LIST_ENTRY *v31; // rcx
  _LIST_ENTRY *v32; // rax
  _LIST_ENTRY *v33; // rax
  _LIST_ENTRY *p_acknowledgedList; // rdx
  char v35; // r14
  unsigned __int8 v36; // cl
  unsigned __int8 FxVerboseOn; // al
  unsigned __int16 v38; // r9
  int v39; // ecx
  unsigned __int8 v40; // al
  _LIST_ENTRY *p_m_PowerNotify; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v43; // rcx
  FxTagTracker *v44; // rcx
  FxVerifierLock *v45; // rcx
  unsigned __int16 v46; // r9
  unsigned __int64 v47; // rdx
  void *v48; // rdx
  const void *v49; // rcx
  _LIST_ENTRY *v50; // rdx
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v52; // r14
  FxIoQueueIoStop m_IoStop; // xmm0
  FxIoQueue *i; // rcx
  unsigned int v55; // r13d
  void *v56; // rcx
  WDFQUEUE__ *v57; // r15
  const void *v58; // rax
  unsigned __int8 v59; // r8
  WDFREQUEST__ *v60; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v62; // rbx
  _LIST_ENTRY *v63; // rdx
  _LIST_ENTRY *v64; // rdx
  void *v65; // rcx
  WDFQUEUE__ *v66; // r15
  const void *v67; // rax
  unsigned __int8 v68; // r8
  WDFREQUEST__ *v69; // r8
  unsigned __int64 v70; // rcx
  unsigned __int16 v71; // ax
  const void *v72; // rbx
  char v73; // dl
  _LIST_ENTRY *v74; // rcx
  _LIST_ENTRY *v75; // rdx
  _LIST_ENTRY *v76; // rdx
  _LIST_ENTRY *v77; // rax
  unsigned __int16 v78; // r9
  const void *v79; // rcx
  unsigned __int16 v80; // ax
  const void *v81; // rbx
  unsigned int RefCount[2]; // [rsp+28h] [rbp-38h]
  void *_a2; // [rsp+30h] [rbp-30h]
  _LIST_ENTRY acknowledgedList; // [rsp+40h] [rbp-20h] BYREF
  FxIoQueueIoResume resumeCallback; // [rsp+50h] [rbp-10h] BYREF

  m_Globals = this->m_Globals;
  p_m_PowerState = &this->m_PowerState;
  m_PowerState = this->m_PowerState;
  if ( m_PowerState <= FxIoQueuePowerPurgeNotifyingDriver )
  {
    if ( m_PowerState == FxIoQueuePowerPurgeNotifyingDriver )
    {
      p_m_PowerNotify = &this->m_PowerNotify;
      Flink = this->m_PowerNotify.Flink;
      if ( Flink == &this->m_PowerNotify )
      {
        *p_m_PowerState = FxIoQueuePowerPurgeDriverNotified;
        return 1;
      }
      if ( Flink->Blink == p_m_PowerNotify )
      {
        v50 = Flink->Flink;
        if ( Flink->Flink->Blink == Flink )
        {
          p_m_PowerNotify->Flink = v50;
          v50->Blink = p_m_PowerNotify;
          Blink = this->m_PowerDriverNotified.Blink;
          if ( Blink->Flink == &this->m_PowerDriverNotified )
          {
            Flink->Flink = &this->m_PowerDriverNotified;
            v52 = (FxRequestBase *)&Flink[-19];
            Flink->Blink = Blink;
            Blink->Flink = Flink;
            this->m_PowerDriverNotified.Blink = Flink;
            m_IoStop = this->m_IoStop;
            BYTE1(Flink[3].Flink) = 0;
            resumeCallback = (FxIoQueueIoResume)m_IoStop;
            if ( !_mm_srli_si128((__m128i)m_IoStop, 8).m128i_u64[0] || v52->m_Canceled )
              return 1;
            for ( i = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
                  i != (FxIoQueue *)&this->m_DriverCancelable;
                  i = (FxIoQueue *)i->FxNonPagedObject::FxObject::__vftable )
            {
              if ( ($87BF65E0DFCCE0C1CCAAC6538D1C71CB *)i[-1].m_IoPkgListNode.m_ListEntry.Blink == &v52->120 )
              {
                v55 = 268435458;
                goto LABEL_93;
              }
            }
            v55 = 2;
LABEL_93:
            if ( m_Globals->FxVerboseOn )
            {
              if ( v52->m_ObjectSize )
                v56 = (void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v56 = 0LL;
              _a2 = v56;
              v57 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              v58 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                v58 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Bu, WPP_FxIoQueue_cpp_Traceguids, v58, _a2);
            }
            else
            {
              v57 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            }
            FxObject::AddRef(
              v52,
              (void *)0x646C6F48,
              5361,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxNonPagedObject::Unlock(this, *PreviousIrql, v59);
            if ( m_Globals->FxVerifierOn )
              FxRequestBase::SetVerifierFlags(v52, 512);
            if ( v52->m_ObjectSize )
              v60 = (WDFREQUEST__ *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v60 = 0LL;
            if ( !this->m_ObjectSize )
              v57 = 0LL;
            FxIoQueueIoStop::Invoke((FxIoQueueIoStop *)&resumeCallback, v57, v60, v55);
            v52->Release(
              v52,
              (void *)1684827976,
              5371,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            v30 = PreviousIrql;
            goto LABEL_37;
          }
        }
      }
      goto LABEL_67;
    }
    v14 = m_PowerState - 3;
    if ( !v14 )
    {
      if ( this->m_Dispatching == 1 )
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
      return 0;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      *p_m_PowerState = FxIoQueuePowerStoppingNotifyingDriver;
      p_m_DriverOwned = &this->m_DriverOwned;
      FxVerboseOn = m_Globals->FxVerboseOn;
      if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
      {
        if ( !FxVerboseOn )
          return 1;
        v38 = 87;
        goto LABEL_140;
      }
      if ( FxVerboseOn )
      {
        v46 = 86;
LABEL_135:
        v70 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !this->m_ObjectSize )
          v70 = 0LL;
        *(_QWORD *)RefCount = v70;
LABEL_138:
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v46, WPP_FxIoQueue_cpp_Traceguids, *(const void **)RefCount);
      }
LABEL_61:
      v43 = p_m_DriverOwned->Flink;
      this->m_PowerNotify.Blink = this->m_DriverOwned.Blink;
      this->m_PowerNotify.Flink = v43;
      v43->Blink = &this->m_PowerNotify;
      this->m_PowerNotify.Blink->Flink = &this->m_PowerNotify;
      p_m_DriverOwned->Blink = p_m_DriverOwned;
      p_m_DriverOwned->Flink = p_m_DriverOwned;
      return 1;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v17 = &this->m_PowerNotify;
      v18 = this->m_PowerNotify.Flink;
      if ( v18 == &this->m_PowerNotify )
      {
        *p_m_PowerState = FxIoQueuePowerStoppingDriverNotified;
        return 1;
      }
      if ( v18->Blink == v17 )
      {
        v19 = v18->Flink;
        if ( v18->Flink->Blink == v18 )
        {
          v17->Flink = v19;
          v19->Blink = v17;
          v20 = this->m_PowerDriverNotified.Blink;
          if ( v20->Flink == &this->m_PowerDriverNotified )
          {
            v18->Flink = &this->m_PowerDriverNotified;
            v21 = v18 - 19;
            v18->Blink = v20;
            v20->Flink = v18;
            this->m_PowerDriverNotified.Blink = v18;
            resumeCallback = (FxIoQueueIoResume)this->m_IoStop;
            if ( !this->m_IoStop.Method || HIBYTE(v21[13].Flink) )
              return 1;
            for ( j = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
                  ;
                  j = (FxIoQueue *)j->FxNonPagedObject::FxObject::__vftable )
            {
              if ( j == (FxIoQueue *)&this->m_DriverCancelable )
              {
                v23 = 1;
                goto LABEL_25;
              }
              if ( j[-1].m_IoPkgListNode.m_ListEntry.Blink == (_LIST_ENTRY *)&v21[7].Blink )
                break;
            }
            v23 = 268435457;
LABEL_25:
            if ( m_Globals->FxVerboseOn )
            {
              if ( WORD1(v21->Blink) )
                v48 = (void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v48 = 0LL;
              _a2 = v48;
              v49 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                v49 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Au, WPP_FxIoQueue_cpp_Traceguids, v49, _a2);
            }
            v24 = _InterlockedIncrement((volatile signed __int32 *)&v21->Blink + 1);
            if ( SLOBYTE(v21[1].Blink) < 0 )
            {
              v44 = (FxTagTracker *)v21[-3].Flink;
              if ( v44 )
                FxTagTracker::UpdateTagHistory(
                  v44,
                  (void *)0x646C6F48,
                  5279,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
                  TagAddRef,
                  v24);
            }
            v25 = *PreviousIrql;
            if ( SLOBYTE(this->m_ObjectFlags) < 0
              && (v45 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
            {
              FxVerifierLock::Unlock(v45, v25, a3);
            }
            else
            {
              KeReleaseSpinLock(&this->m_NPLock.m_Lock, v25);
            }
            if ( m_Globals->FxVerifierOn )
              FxRequestBase::SetVerifierFlags((FxRequestBase *)v21, 512);
            if ( WORD1(v21->Blink) )
              v26 = (WDFREQUEST__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v26 = 0LL;
            v27 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v27 = 0LL;
            FxIoQueueIoStop::Invoke((FxIoQueueIoStop *)&resumeCallback, v27, v26, v23);
            v28 = 5289LL;
            goto LABEL_36;
          }
        }
      }
      goto LABEL_67;
    }
    v39 = v16 - 1;
    if ( v39 )
    {
      if ( v39 != 1 )
        return 0;
      *p_m_PowerState = FxIoQueuePowerPurgeNotifyingDriver;
      p_m_DriverOwned = &this->m_DriverOwned;
      v40 = m_Globals->FxVerboseOn;
      if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
      {
        if ( !v40 )
          return 1;
        v38 = 89;
        goto LABEL_140;
      }
      if ( v40 )
      {
        v46 = 88;
        v47 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !this->m_ObjectSize )
          v47 = 0LL;
        *(_QWORD *)RefCount = v47;
        goto LABEL_138;
      }
      goto LABEL_61;
    }
  }
  else
  {
    v8 = m_PowerState - 9;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            if ( m_Globals->FxVerboseOn )
            {
              m_ObjectSize = this->m_ObjectSize;
              v62 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !m_ObjectSize )
                v62 = 0LL;
              WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x64u, WPP_FxIoQueue_cpp_Traceguids, v62);
            }
            *p_m_PowerState = FxIoQueuePowerOn;
          }
          return 0;
        }
        v31 = &this->m_PowerNotify;
        v32 = this->m_PowerNotify.Flink;
        if ( v32 == &this->m_PowerNotify )
        {
          *p_m_PowerState = FxIoQueuePowerRestartingDriverNotified;
          return 1;
        }
        if ( v32->Blink == v31 )
        {
          v63 = v32->Flink;
          if ( v32->Flink->Blink == v32 )
          {
            v31->Flink = v63;
            v63->Blink = v31;
            v64 = this->m_DriverOwned.Blink;
            if ( v64->Flink == &this->m_DriverOwned )
            {
              v32->Flink = &this->m_DriverOwned;
              v21 = v32 - 19;
              v32->Blink = v64;
              v64->Flink = v32;
              this->m_DriverOwned.Blink = v32;
              resumeCallback = this->m_IoResume;
              if ( this->m_IoResume.Method && !HIBYTE(v21[13].Flink) )
              {
                if ( m_Globals->FxVerboseOn )
                {
                  if ( WORD1(v21->Blink) )
                    v65 = (void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v65 = 0LL;
                  _a2 = v65;
                  v66 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                  v67 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                  if ( !this->m_ObjectSize )
                    v67 = 0LL;
                  WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x62u, WPP_FxIoQueue_cpp_Traceguids, v67, _a2);
                }
                else
                {
                  v66 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                }
                FxObject::AddRef(
                  (FxObject *)v21,
                  (void *)0x646C6F48,
                  5602,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                FxNonPagedObject::Unlock(this, *PreviousIrql, v68);
                if ( WORD1(v21->Blink) )
                  v69 = (WDFREQUEST__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v69 = 0LL;
                if ( !this->m_ObjectSize )
                  v66 = 0LL;
                FxIoQueueIoResume::Invoke(&resumeCallback, v66, v69);
                v28 = 5608LL;
LABEL_36:
                ((void (__fastcall *)(_LIST_ENTRY *, __int64, __int64, const char *))v21->Flink[1].Flink)(
                  v21,
                  1684827976LL,
                  v28,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                v30 = PreviousIrql;
LABEL_37:
                FxNonPagedObject::Lock(this, v30, v29);
                return 1;
              }
              if ( !m_Globals->FxVerboseOn )
                return 1;
              v38 = 99;
LABEL_140:
              v71 = this->m_ObjectSize;
              v72 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v71 )
                v72 = 0LL;
              WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v38, WPP_FxIoQueue_cpp_Traceguids, v72);
              return 1;
            }
          }
        }
LABEL_67:
        __fastfail(3u);
      }
      *p_m_PowerState = FxIoQueuePowerRestartingNotifyingDriver;
      p_m_DriverOwned = &this->m_DriverOwned;
      v13 = m_Globals->FxVerboseOn;
      if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
      {
        if ( !v13 )
          return 1;
        v38 = 97;
        goto LABEL_140;
      }
      if ( v13 )
      {
        v46 = 96;
        goto LABEL_135;
      }
      goto LABEL_61;
    }
  }
  acknowledgedList.Blink = &acknowledgedList;
  v33 = this->m_PowerDriverNotified.Flink;
  p_acknowledgedList = &acknowledgedList;
  acknowledgedList.Flink = &acknowledgedList;
  v35 = 0;
  if ( v33 != &this->m_PowerDriverNotified )
  {
    while ( 1 )
    {
      v73 = BYTE1(v33[3].Flink);
      v74 = v33->Flink;
      if ( v73 == 1 || v73 == 2 )
      {
        if ( v74->Blink != v33 )
          goto LABEL_67;
        v75 = v33->Blink;
        if ( v75->Flink != v33 )
          goto LABEL_67;
        v75->Flink = v74;
        v74->Blink = v75;
        v76 = acknowledgedList.Blink;
        if ( acknowledgedList.Blink->Flink != &acknowledgedList )
          goto LABEL_67;
        v33->Blink = acknowledgedList.Blink;
        v33->Flink = &acknowledgedList;
        v76->Flink = v33;
        acknowledgedList.Blink = v33;
      }
      v33 = v74;
      if ( v74 == &this->m_PowerDriverNotified )
        goto LABEL_150;
    }
  }
  while ( p_acknowledgedList != &acknowledgedList )
  {
    if ( p_acknowledgedList->Blink != &acknowledgedList )
      goto LABEL_67;
    v77 = p_acknowledgedList->Flink;
    if ( p_acknowledgedList->Flink->Blink != p_acknowledgedList )
      goto LABEL_67;
    acknowledgedList.Flink = p_acknowledgedList->Flink;
    v77->Blink = &acknowledgedList;
    FxIoQueue::ProcessAcknowledgedRequests(this, (FxRequest *)&p_acknowledgedList[-19], PreviousIrql);
    v35 = 1;
LABEL_150:
    p_acknowledgedList = acknowledgedList.Flink;
  }
  if ( this->m_PowerDriverNotified.Flink == &this->m_PowerDriverNotified )
  {
    if ( this->m_TwoPhaseCompletions )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v78 = 93;
LABEL_163:
        v80 = this->m_ObjectSize;
        v81 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v80 )
          v81 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v78, WPP_FxIoQueue_cpp_Traceguids, v81);
      }
    }
    else
    {
      v36 = m_Globals->FxVerboseOn;
      if ( this->m_Dispatching == 1 )
      {
        if ( v36 )
        {
          v79 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v79 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x5Eu, WPP_FxIoQueue_cpp_Traceguids, v79);
        }
        this->m_PowerState = FxIoQueuePowerOff;
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
        return 1;
      }
      if ( v36 )
      {
        v78 = 95;
        goto LABEL_163;
      }
    }
  }
  else if ( m_Globals->FxVerboseOn )
  {
    v78 = 92;
    goto LABEL_163;
  }
  return v35;
}
