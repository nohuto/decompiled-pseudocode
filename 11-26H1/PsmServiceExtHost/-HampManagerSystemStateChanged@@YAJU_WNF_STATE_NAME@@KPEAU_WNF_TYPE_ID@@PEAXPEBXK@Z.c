/*
 * XREFs of ?HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18007C460
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180001E28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180014294 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800142F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003CB1C (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CBCC (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x180078B64 (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SYSTEM_STATE@@W4_HAM_ACTIVI.c)
 *     ?HampManagerQuerySystemState@@YAXPEAU_HAM_SYSTEM_STATE@@@Z @ 0x18007BF20 (-HampManagerQuerySystemState@@YAXPEAU_HAM_SYSTEM_STATE@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampManagerSystemStateChanged(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4)
{
  int v5; // ebx
  char v6; // si
  int v7; // eax
  int v8; // eax
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v15[4]; // [rsp+30h] [rbp-B8h] BYREF
  _DWORD v16[3]; // [rsp+34h] [rbp-B4h] BYREF
  _BYTE v17[144]; // [rsp+40h] [rbp-A8h] BYREF

  memset_0(v17, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 5 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CFA9F);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  v5 = 0;
  v16[0] = 0;
  HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)a4);
  v6 = 1;
  v7 = *((_DWORD *)a4 + 138) | 2;
  *((_DWORD *)a4 + 138) = v7;
  if ( (v7 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v8 = v7 | 1;
    do
    {
      *((_DWORD *)a4 + 138) = v8 & 0xFFFFFFFD;
      HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)a4);
      HampManagerQuerySystemState((struct _HAM_SYSTEM_STATE *)v16);
      for ( i = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)(a4 + 352), 0, 0LL);
            ;
            i = HampManagerGetNextHost(v10) )
      {
        v10 = i;
        if ( !i )
          break;
        HampHostAmbientStateChanged(i, v16, 4u);
      }
      HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)a4);
      v8 = *((_DWORD *)a4 + 138);
    }
    while ( (v8 & 2) != 0 );
    v5 = v16[0];
    *((_DWORD *)a4 + 138) = v8 & 0xFFFFFFFE;
  }
  HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)a4);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
  {
    v15[0] = v6;
    v16[0] = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v11,
      (__int64)&unk_1800CFA67,
      v12,
      v13,
      (__int64)v16,
      (__int64)v15);
  }
  return 0LL;
}
