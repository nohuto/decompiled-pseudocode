/*
 * XREFs of ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180057280
 * Callers:
 *     ?HampInProcTerminateApplicationHost@@YAJPEAXPEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x18006EEA0 (-HampInProcTerminateApplicationHost@@YAJPEAXPEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REA.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180023ED8 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180036468 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x1800575DC (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180057728 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_t_ea_180057728.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateApplicationHost(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        _QWORD *a7)
{
  const unsigned __int16 *v8; // r14
  char *v11; // r15
  int v12; // ebx
  struct _HAM_APPLICATION *v13; // rax
  struct _HAM_APPLICATION *v14; // r14
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  struct _RM_HAM_ACTIVITY_HOST *v19; // rax
  __int64 v20; // rdi
  struct _HAM_ACTIVITY *FirstActivity; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  _BYTE v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-ACh] BYREF
  const unsigned __int16 *v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  char *v28; // [rsp+68h] [rbp-98h] BYREF
  const unsigned __int16 *v29; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[144]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[464]; // [rsp+110h] [rbp+10h] BYREF
  char v32; // [rsp+2E0h] [rbp+1E0h] BYREF

  v26 = a2;
  v8 = a2;
  memset_0(v30, 0, 0x88uLL);
  memset_0(v31, 0, 0x218uLL);
  v25 = 0;
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CEBFC);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v30);
  v11 = (char *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *(unsigned __int8 *)(a1 + 164) + 1092);
  v12 = HampAppInfoValidateAndCapture(v8, a3, a4, *(_DWORD *)(a1 + 168), (struct _HAM_APPLICATION_INFO *)v31);
  if ( v12 < 0 )
    goto LABEL_9;
  v11 = &v32;
  if ( (unsigned int)(a5 - 1) > 2 || a6 - 1 > 0x1AFE || a7 && !*a7 )
  {
    v12 = -1073741811;
    goto LABEL_9;
  }
  v13 = HampAppFind(
          (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL)
                                          - 48LL * *(unsigned __int8 *)(a1 + 164)
                                          - 16),
          (struct _HAM_APPLICATION_INFO *)v31);
  v14 = v13;
  if ( !v13 )
  {
    v12 = -1073741275;
    goto LABEL_8;
  }
  v19 = HampAppTryReferenceMixedHost(v13);
  v20 = (__int64)v19;
  if ( !v19 )
  {
    v12 = -1073741275;
    goto LABEL_28;
  }
  HampHostAcquireLockExclusiveEx(v19, 0);
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v20);
  while ( 1 )
  {
    if ( !FirstActivity )
    {
      v12 = -1073741275;
LABEL_26:
      HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v20);
      goto LABEL_27;
    }
    if ( *((_QWORD *)FirstActivity + 64) == *(_QWORD *)(v20 + 808)
      && *((_BYTE *)FirstActivity + 562) != 4
      && (*((_DWORD *)FirstActivity + 28) & 0x10000) != 0 )
    {
      break;
    }
    v22 = *((_QWORD *)FirstActivity + 12);
    v23 = *((_QWORD *)FirstActivity + 10);
    FirstActivity = 0LL;
    if ( v22 != v23 + 608 )
      FirstActivity = (struct _HAM_ACTIVITY *)(v22 - 96);
  }
  v12 = HampHostQueueTerminateEx(v20, a5, a6, (struct _HAM_CLIENT_CONTEXT *)a1, 1, 0, (__int64)a7, &v25);
  if ( v12 < 0 )
    goto LABEL_26;
  HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v20);
  if ( v25 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(v20 + 704));
  v12 = 0;
LABEL_27:
  RmHamHostDereference((struct _RM_HAM_ACTIVITY_HOST *)v20);
LABEL_28:
  CemRcObjectDereference(v14);
LABEL_8:
  v8 = v26;
LABEL_9:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v27 = *(_DWORD *)(a1 + 168);
    v25 = a6;
    v24[0] = a5;
    v28 = v11;
    v29 = v8;
    LODWORD(v26) = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v15,
      (unsigned int)&unk_1800CE628,
      v16,
      v17,
      (__int64)&v26,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)v24,
      (__int64)&v25);
  }
  return (unsigned int)v12;
}
