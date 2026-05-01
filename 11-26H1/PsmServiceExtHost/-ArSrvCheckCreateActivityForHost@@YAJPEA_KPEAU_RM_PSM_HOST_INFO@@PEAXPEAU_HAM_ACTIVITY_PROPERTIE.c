/*
 * XREFs of ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180014468
 * Callers:
 *     HamRpcSrvCreateAutoRestartActivityForDesktopBridge @ 0x18002EB80 (HamRpcSrvCreateAutoRestartActivityForDesktopBridge.c)
 *     HamRpcSrvCreateAutoRestartActivity @ 0x180098840 (HamRpcSrvCreateAutoRestartActivity.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180014BD0 (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C1C (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C6C (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArReleaseGlobalLockShared@@YAXXZ @ 0x180014DC4 (-ArReleaseGlobalLockShared@@YAXXZ.c)
 *     ?ArAcquireGlobalLockShared@@YAXXZ @ 0x180014E18 (-ArAcquireGlobalLockShared@@YAXXZ.c)
 *     ?ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014E84 (-ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180014F54 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?ArActAllocateState@@YAJPEAU_AR_ACTIVITY@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAX@Z @ 0x18005EC48 (-ArActAllocateState@@YAJPEAU_AR_ACTIVITY@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@44@Z @ 0x180060C24 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U2@@-$_tlgWriteTe.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180063AC4 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180064A38 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall ArSrvCheckCreateActivityForHost(
        unsigned __int64 *a1,
        struct _RM_PSM_HOST_INFO *a2,
        void *a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4,
        union _HAM_RESTART_PROPERTIES *a5)
{
  unsigned __int16 v8; // r15
  __int64 v9; // r14
  struct _AR_ACTIVITY *v10; // rsi
  struct _ACTIVITY_RESTARTER *v11; // rbx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  struct _AR_ACTIVITY_HOST *v16; // rdi
  int State; // ebx
  __int64 v18; // rbx
  _OWORD *Heap; // rax
  _OWORD *v20; // r14
  struct _AR_ACTIVITY *v21; // rcx
  struct _AR_ACTIVITY *v22; // rax
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _AR_ACTIVITY_HOST *v25; // [rsp+58h] [rbp-A8h] BYREF
  void *v26; // [rsp+60h] [rbp-A0h] BYREF
  struct _HAM_ACTIVITY_PROPERTIES *v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[144]; // [rsp+80h] [rbp-80h] BYREF

  v26 = a3;
  v27 = a4;
  memset_0(v29, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      &dword_1800E12B0,
      &unk_1800CB902);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
  v8 = 0;
  v9 = -1LL;
  v25 = 0LL;
  v10 = 0LL;
  v24 = -1LL;
  ArAcquireGlobalLockShared();
  v11 = ArGlobals;
  ArReleaseGlobalLockShared();
  if ( v11 )
  {
    v12 = 2;
    if ( *(_DWORD *)a5 < 2u && ((v12 = 1, (*((_BYTE *)a4 + 8) & 4) == 0) || (*(_BYTE *)a5 & 1) != 0) )
    {
      v15 = ArHostFindOrCreate(a2, v11, &v25);
      v16 = v25;
      State = v15;
      if ( v15 >= 0 )
      {
        while ( v8 < 2u )
        {
          ArHostWaitForAndSetChangeInProgress(v16);
          v18 = *((_QWORD *)v16 + 75);
          ArHostClearChangeInProgress(v16);
          if ( !v18 )
          {
            Heap = HampAllocateHeap(0x28uLL);
            v20 = Heap;
            if ( !Heap )
            {
              State = -1073741801;
              goto LABEL_25;
            }
            *Heap = 0LL;
            Heap[1] = 0LL;
            *((_QWORD *)Heap + 4) = 0LL;
            *(_QWORD *)Heap = 1LL;
            *((_QWORD *)Heap + 1) = -1LL;
            *((_DWORD *)Heap + 7) = *(_DWORD *)a5;
            *((_QWORD *)Heap + 2) = v16;
            if ( _InterlockedIncrement64((volatile signed __int64 *)v16 + 3) <= 1 )
              __fastfail(0xEu);
            State = ArActAllocateState((struct _AR_ACTIVITY *)Heap, v27, v26);
            if ( State < 0 )
            {
              ArActDereference((struct _AR_ACTIVITY *)v20);
              goto LABEL_25;
            }
            v10 = (struct _AR_ACTIVITY *)v20;
            v24 = *((_QWORD *)v20 + 1);
          }
          ArHostWaitForAndSetChangeInProgress(v16);
          v21 = (struct _AR_ACTIVITY *)*((_QWORD *)v16 + 75);
          if ( v21 )
            goto LABEL_16;
          if ( v10 )
          {
            *((_QWORD *)v16 + 75) = v10;
            v21 = v10;
LABEL_16:
            if ( !*((_BYTE *)v21 + 32) )
              ArActStartAsync(v21);
            ArHostClearChangeInProgress(v16);
            break;
          }
          ArHostClearChangeInProgress(v16);
          ++v8;
        }
        ArHostWaitForAndSetChangeInProgress(v16);
        v22 = (struct _AR_ACTIVITY *)*((_QWORD *)v16 + 75);
        if ( v22 && v22 == v10 )
        {
          if ( a1 )
            *a1 = *((_QWORD *)v10 + 1);
          ArActDereference(v10);
          v10 = 0LL;
        }
        ArHostClearChangeInProgress(v16);
        State = 0;
LABEL_25:
        if ( v10 )
        {
          ArHostWaitForAndSetChangeInProgress(v16);
          ArActClose(v10);
          ArHostClearChangeInProgress(v16);
          ArActDereference(v10);
        }
        v9 = v24;
      }
      if ( v16 )
        CemRcObjectDereference(v16);
    }
    else
    {
      State = -1073741811;
    }
  }
  else
  {
    State = -1073741637;
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v27 = (struct _HAM_ACTIVITY_PROPERTIES *)*((_QWORD *)a2 + 68);
    v26 = (void *)*((unsigned int *)a2 + 134);
    v25 = a2;
    v28 = v9;
    LODWORD(v24) = State;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v12,
      (unsigned int)&unk_1800CB92E,
      v13,
      v14,
      (__int64)&v24,
      (__int64)&v28,
      (__int64)&v25,
      (__int64)&v26,
      (__int64)&v27);
  }
  CempLockTrackerClearForThread(ArLockTrackerId);
  return (unsigned int)State;
}
