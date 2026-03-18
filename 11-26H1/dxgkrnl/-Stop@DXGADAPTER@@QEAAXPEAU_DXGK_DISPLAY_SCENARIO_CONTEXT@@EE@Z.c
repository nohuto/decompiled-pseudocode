/*
 * XREFs of ?Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z @ 0x14019FF84
 * Callers:
 *     DxgkRemoveAdapter @ 0x1401E0898 (DxgkRemoveAdapter.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U4@U1@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@6355555555@Z @ 0x140001908 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$03@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x140065568 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x140071AA0 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z @ 0x140081CA4 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1401970A0 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x14019827C (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1401A4E2C (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1401A9B50 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1401DF200 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1401FD830 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ?DxgkpAcquireTestLockForStopReset@@YAXXZ @ 0x140209B2C (-DxgkpAcquireTestLockForStopReset@@YAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x14030EE04 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x14030FA84 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140358D30 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, struct _LUID *a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // edi
  char v5; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  KSPIN_LOCK *Global; // rax
  DXGGLOBAL *v17; // rax
  ADAPTER_DISPLAY *v18; // rcx
  ADAPTER_RENDER *v19; // rcx
  BOOLEAN v20; // di
  BOOLEAN v21; // al
  struct DXGGLOBAL *v22; // rax
  struct DXGGLOBAL *v23; // rax
  struct DXGGLOBAL *v24; // rax
  int v25; // [rsp+B0h] [rbp-80h] BYREF
  unsigned int v26; // [rsp+B4h] [rbp-7Ch] BYREF
  int v27; // [rsp+B8h] [rbp-78h] BYREF
  int v28; // [rsp+BCh] [rbp-74h] BYREF
  int v29; // [rsp+C0h] [rbp-70h] BYREF
  int v30; // [rsp+C4h] [rbp-6Ch] BYREF
  int v31; // [rsp+C8h] [rbp-68h] BYREF
  int v32; // [rsp+CCh] [rbp-64h] BYREF
  int v33; // [rsp+D0h] [rbp-60h] BYREF
  int v34; // [rsp+D4h] [rbp-5Ch] BYREF
  int v35; // [rsp+D8h] [rbp-58h] BYREF
  int v36; // [rsp+DCh] [rbp-54h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-50h] BYREF
  void *v38; // [rsp+E8h] [rbp-48h] BYREF
  unsigned __int64 v39; // [rsp+F0h] [rbp-40h] BYREF
  unsigned __int16 *v40; // [rsp+F8h] [rbp-38h] BYREF
  struct _LUID v41; // [rsp+100h] [rbp-30h] BYREF
  unsigned __int64 v42; // [rsp+150h] [rbp+20h] BYREF
  unsigned int v43; // [rsp+168h] [rbp+38h] BYREF

  v4 = a3;
  v5 = 0;
  WdLogSingleEntry1(4LL);
  WdLogGlobalForLineNumber = 9537;
  DXGADAPTER::GetAdapterType(this);
  v42 = *(_QWORD *)((char *)this + 412);
  v9 = v42;
  v41 = (struct _LUID)v42;
  if ( (unsigned int)dword_140166660 > 5 && tlgKeywordOn((__int64)&dword_140166660, 0x400000000800LL) )
  {
    v26 = v43;
    v25 = v4;
    v28 = v12 & (v43 >> 1);
    v13 = v12 & v43;
    v27 = v11;
    v30 = v12 & (v43 >> 2);
    v31 = *((unsigned __int8 *)this + 2988);
    v32 = *((unsigned __int8 *)this + 2983);
    LOWORD(v43) = *((_WORD *)this + 1522);
    v37 = *((_QWORD *)this + 256);
    v38 = (void *)*((_QWORD *)this + 255);
    v39 = v42;
    v33 = *((_DWORD *)this + 108);
    v34 = *((_DWORD *)this + 107);
    v35 = *((_DWORD *)this + 106);
    v36 = *((_DWORD *)this + 105);
    v40 = (unsigned __int16 *)*((_QWORD *)this + 246);
    v29 = v13;
    LOWORD(v42) = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (__int64)&unk_1401415B7,
      v10,
      v11,
      (__int64)&v42,
      &v40,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v39,
      &v38,
      (__int64)&v37,
      (__int64)&v43,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25);
  }
  KeSetEvent((PRKEVENT)((char *)this + 3136), 0, 0);
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9584;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsCoreResourceExclusiveOwner()", 9584LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_DWORD *)this + 50) = 5;
  if ( !*((_BYTE *)this + 209) )
  {
    v14 = *((_QWORD *)this + 396);
    if ( v14 )
    {
      if ( (_BYTE)v4 )
      {
        *(_BYTE *)(v14 + 1025) = 1;
        ADAPTER_RENDER::ResumeVidMmWorkerThread(*((ADAPTER_RENDER **)this + 396), 1u, 1u);
      }
    }
  }
  DxgkpAcquireTestLockForStopReset();
  v42 = 0LL;
  DXGADAPTER::AcquireLocksForStop(this, &v42);
  if ( !*((_BYTE *)this + 209) )
  {
    v15 = *((_QWORD *)this + 396);
    if ( v15 )
    {
      ADAPTER_RENDER::FlushScheduler(v15, 5LL, 0xFFFFFFFFLL);
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 396), 1LL, 0LL);
      ADAPTER_RENDER::ResumeVidMmWorkerThread(*((ADAPTER_RENDER **)this + 396), 0, 1u);
    }
    if ( *((_BYTE *)this + 206) )
    {
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
    }
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 5816LL) )
    {
      v17 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::NotifySharedPowerGraphicsRemoving(v17, this);
    }
  }
  v18 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 395);
  if ( v18 )
    ADAPTER_DISPLAY::Stop(v18, a4);
  v19 = (ADAPTER_RENDER *)*((_QWORD *)this + 396);
  if ( v19 )
  {
    v5 = 1;
    ADAPTER_RENDER::Stop(v19, v4, a4);
  }
  if ( *((_QWORD *)this + 468) )
  {
    *((_BYTE *)this + 3702) = 1;
    v20 = KeCancelTimer((PKTIMER)((char *)this + 3816));
    v21 = KeCancelTimer((PKTIMER)this + 71);
    if ( !v20 || !v21 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 3816)) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 468));
    *((_QWORD *)this + 468) = 0LL;
  }
  if ( a4 )
  {
    *((_DWORD *)this + 50) = 4;
  }
  else
  {
    if ( *((_BYTE *)this + 3705)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 3705) = 0;
    }
    DXGADAPTER::Destroy(this, a2);
    *((_DWORD *)this + 50) = 2;
    DXGADAPTER::ReleaseReference(this);
  }
  *((_QWORD *)this + 245) = 0LL;
  *((_QWORD *)this + 255) = 0LL;
  DXGADAPTER::ReleaseCoreResource(this, 0LL);
  DXGADAPTER::ReleaseReference(this);
  *((_QWORD *)this + 18) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  if ( v5 && !*((_BYTE *)this + 3057) )
  {
    v22 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(v22, DxgkCheckPairedRenderAdapterForStopCallBack, this, 1LL);
  }
  v23 = DXGGLOBAL::GetGlobal();
  REMOTEMONITORMAPPING::Clear((struct DXGGLOBAL *)((char *)v23 + 305272), &v41);
  v24 = DXGGLOBAL::GetGlobal();
  HOSTVMMONITORMAPPING::RemoveMapping((struct DXGGLOBAL *)((char *)v24 + 305328), (struct _LUID)v9);
  WdLogSingleEntry1(4LL);
  WdLogGlobalForLineNumber = 9829;
  ExReleasePushLockSharedEx(&qword_140168760, 0LL);
}
