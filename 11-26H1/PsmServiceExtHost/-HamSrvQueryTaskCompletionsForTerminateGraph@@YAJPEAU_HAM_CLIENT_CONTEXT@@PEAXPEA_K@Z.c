/*
 * XREFs of ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x18007AA70
 * Callers:
 *     HamRpcSrvQueryTaskCompletionsForTerminateGraph @ 0x18007C840 (HamRpcSrvQueryTaskCompletionsForTerminateGraph.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002F224 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180041190 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180041CD8 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079180 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvQueryTaskCompletionsForTerminateGraph(
        struct _HAM_CLIENT_CONTEXT *a1,
        void *a2,
        unsigned __int64 *a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v5; // rbx
  unsigned __int64 v6; // r13
  __int64 TransitiveAppliedTaskCompletions; // r14
  int v8; // eax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rsi
  unsigned int v10; // edi
  char *v11; // rax
  int HostByProcessHandle; // eax
  char *v13; // rax
  __int64 v14; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v16; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Process; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+100h] [rbp+0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v25; // [rsp+120h] [rbp+20h]
  __int64 v26; // [rsp+128h] [rbp+28h]
  __int64 *v27; // [rsp+130h] [rbp+30h]
  __int64 v28; // [rsp+138h] [rbp+38h]
  __int64 *v29; // [rsp+140h] [rbp+40h]
  __int64 v30; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v31; // [rsp+150h] [rbp+50h]
  __int64 v32; // [rsp+158h] [rbp+58h]
  struct _RM_HAM_ACTIVITY_HOST **v33; // [rsp+160h] [rbp+60h]
  __int64 v34; // [rsp+168h] [rbp+68h]
  HANDLE *p_Process; // [rsp+170h] [rbp+70h]
  __int64 v36; // [rsp+178h] [rbp+78h]

  Process = a2;
  memset_0(v23, 0, 0x88uLL);
  v19 = 0LL;
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CF3FC);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  v5 = 0LL;
  v18 = 0LL;
  v6 = -1LL;
  v16 = 0LL;
  v20 = -1LL;
  TransitiveAppliedTaskCompletions = 0LL;
  v8 = HampHostFindByClient((__int64)a1, 0, &v18, &v19);
  v9 = v18;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = v18 ? (char *)v18 - 56 : 0LL;
    v6 = *((_QWORD *)v11 + 4);
    HostByProcessHandle = RmHamFindHostByProcessHandle(
                            (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)a1 + 164) - 16,
                            Process,
                            0,
                            &v16);
    v5 = v16;
    v10 = HostByProcessHandle;
    if ( HostByProcessHandle >= 0 )
    {
      if ( v16 )
        v13 = (char *)v16 - 56;
      else
        v13 = 0LL;
      v14 = *((_QWORD *)v16 + 99);
      v20 = *((_QWORD *)v13 + 4);
      if ( *(_QWORD *)(v14 + 88) == *(_QWORD *)(*((_QWORD *)v9 + 99) + 88LL) )
      {
        TransitiveAppliedTaskCompletions = HampHostGetTransitiveAppliedTaskCompletions(v16);
        *a3 = TransitiveAppliedTaskCompletions;
        v10 = 0;
      }
      else
      {
        v10 = -1073741790;
      }
    }
  }
  if ( v9 )
    RmHamHostDereference(v9);
  if ( v5 )
    RmHamHostDereference(v5);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
  {
    LODWORD(Process) = GetProcessId(Process);
    LODWORD(v18) = HampClientGetPid(a1);
    v22 = v20;
    v19 = v6;
    p_Process = &Process;
    v21 = TransitiveAppliedTaskCompletions;
    v33 = &v18;
    v31 = &v19;
    v29 = &v21;
    v27 = &v22;
    v25 = &v16;
    LODWORD(v16) = v10;
    v36 = 4LL;
    v34 = 4LL;
    v32 = 8LL;
    v30 = 8LL;
    v28 = 8LL;
    v26 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E12B0, byte_1800CF066, 0LL, 0LL, 8u, &v24);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v10;
}
