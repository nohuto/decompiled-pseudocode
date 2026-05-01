/*
 * XREFs of ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z @ 0x1800429DC
 * Callers:
 *     HamRpcSrvTerminateSelf @ 0x18006EDE0 (HamRpcSrvTerminateSelf.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800021F8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180041190 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180041CD8 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateSelf(struct _HAM_CLIENT_CONTEXT *a1, int a2)
{
  __int64 v4; // r14
  unsigned int v5; // edi
  int v6; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[8]; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-81h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v15; // [rsp+50h] [rbp-79h] BYREF
  __int64 v16; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v17[144]; // [rsp+60h] [rbp-69h] BYREF

  memset_0(v17, 0, 0x88uLL);
  v14 = 0LL;
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CE154);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  v15 = 0LL;
  v4 = -1LL;
  if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
  {
    v5 = -1073741584;
  }
  else
  {
    v6 = HampHostFindByClient((__int64)a1, 2, &v15, &v14);
    v7 = v15;
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( v15 )
        v8 = (char *)v15 - 56;
      else
        v8 = 0LL;
      v4 = *((_QWORD *)v8 + 4);
      LODWORD(v14) = 0;
      HampHostQueueTerminateEx((__int64)v15, a2, 0x1700u, a1, 0, 0, 0LL, (unsigned int *)&v14);
      v5 = 0;
    }
    if ( v7 )
      RmHamHostDereference(v7);
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 8LL) )
  {
    v13[0] = a2;
    v16 = v4;
    LODWORD(v14) = HampClientGetPid(a1);
    LODWORD(v15) = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v9,
      (__int64)&unk_1800CEEB3,
      v10,
      v11,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v16,
      (__int64)v13);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v5;
}
