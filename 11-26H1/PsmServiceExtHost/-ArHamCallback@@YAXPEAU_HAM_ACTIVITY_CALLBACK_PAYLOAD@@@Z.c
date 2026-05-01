/*
 * XREFs of ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180014800
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180014BD0 (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C1C (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C6C (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003F124 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180063AC4 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006CC6C (-ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall ArHamCallback(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a1)
{
  DWORD v2; // ebx
  __int64 v3; // rbx
  struct _AR_ACTIVITY_HOST *v4; // rsi
  int v5; // ecx
  char *v6; // r14
  char v7; // r12
  int v8; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+31h] [rbp-CFh] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+118h] [rbp+18h]
  int v25; // [rsp+11Ch] [rbp+1Ch]
  int *v26; // [rsp+120h] [rbp+20h]
  __int64 v27; // [rsp+128h] [rbp+28h]
  __int64 *v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+138h] [rbp+38h]
  __int64 *v30; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+148h] [rbp+48h]
  char *v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  char *v34; // [rsp+160h] [rbp+60h]
  __int64 v35; // [rsp+168h] [rbp+68h]
  int *v36; // [rsp+170h] [rbp+70h]
  __int64 v37; // [rsp+178h] [rbp+78h]

  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      &dword_1800E12B0,
      &unk_1800CB862);
  memset_0(TlsValue, 0, 0x88uLL);
  v2 = ArLockTrackerId;
  if ( ArLockTrackerId != -1 )
  {
    if ( TlsGetValue(ArLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v2, TlsValue);
  }
  v3 = *((_QWORD *)a1 + 1);
  v4 = *(struct _AR_ACTIVITY_HOST **)(v3 + 16);
  if ( _InterlockedIncrement64((volatile signed __int64 *)v3) <= 1 )
    __fastfail(0xEu);
  v5 = *((_DWORD *)a1 + 4);
  v6 = (char *)(v3 + 32);
  v7 = *(_BYTE *)(v3 + 32);
  if ( !v5 )
  {
    ArHostWaitForAndSetChangeInProgress(v4);
    *v6 = 2;
    ArHostClearChangeInProgress(v4);
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  v9 = v5 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      ArHostWaitForAndSetChangeInProgress(v4);
      v8 = ArActClose((struct _AR_ACTIVITY *)v3);
      ArHostClearChangeInProgress(v4);
      goto LABEL_9;
    }
    if ( v10 != 1 )
    {
      v8 = -1073741811;
      goto LABEL_9;
    }
    ArHostWaitForAndSetChangeInProgress(v4);
    ArHostClearChangeInProgress(v4);
    ArActDereference((struct _AR_ACTIVITY *)v3);
    goto LABEL_8;
  }
  ArHostWaitForAndSetChangeInProgress(v4);
  v8 = HamStopActivity(
         *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v3 + 16) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 80),
         *(_QWORD *)(v3 + 8));
  if ( v8 >= 0 )
  {
    *v6 = 0;
    v8 = 0;
  }
  ArHostClearChangeInProgress(v4);
  if ( v8 >= 0 )
  {
    v8 = ArActCheckRestart((struct _AR_ACTIVITY *)v3);
    if ( (unsigned int)dword_1800E12B0 > 4
      && (qword_1800E12C0 & 0x40) != 0
      && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    {
      v17 = *(_QWORD *)(v3 + 8);
      v15 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800E12B0,
        (unsigned int)&unk_1800CB80E,
        v11,
        v12,
        (__int64)&v15,
        (__int64)&v17);
    }
  }
LABEL_9:
  RtlWakeAddressAll(v3 + 32);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v15 = *((_DWORD *)a1 + 4);
    v14 = *v6;
    v18 = *((_QWORD *)v4 + 73);
    v19 = *(_QWORD *)a1;
    v36 = &v15;
    v34 = &v13;
    v32 = &v14;
    v30 = &v18;
    v28 = &v19;
    v26 = &v16;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v37 = 4LL;
    v31 = 8LL;
    v29 = 8LL;
    v27 = 4LL;
    EventDescriptor.Keyword = 8LL;
    v13 = v7;
    v16 = v8;
    v35 = 1LL;
    v33 = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v23 = &unk_1800CB88B;
    UserData.Reserved = 2;
    v24 = 78;
    v25 = 1;
    LODWORD(v17) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  ArActDereference((struct _AR_ACTIVITY *)v3);
  CempLockTrackerClearForThread(ArLockTrackerId);
}
