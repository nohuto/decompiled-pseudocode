/*
 * XREFs of ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18003D1FC
 * Callers:
 *     PsmHamTerminatePackage @ 0x18003E7B0 (PsmHamTerminatePackage.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180037EF0 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CBCC (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003D484 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003D6FC (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180043D60 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180049DE0 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800635DC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVa.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminatePackageForBi(
        struct _HOST_ACTIVITY_MANAGER *a1,
        __int64 a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  void *v5; // rsi
  _WORD *v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int16 v12; // ax
  _WORD *v13; // rax
  struct _HAM_PACKAGE *v14; // r14
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v16; // rdi
  int v17; // esi
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  _BYTE v22[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  void *v24; // [rsp+58h] [rbp-A8h] BYREF
  void *v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  _BYTE v29[132]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE DestinationSid[68]; // [rsp+114h] [rbp+14h] BYREF
  int v31; // [rsp+158h] [rbp+58h]
  _BYTE v32[144]; // [rsp+160h] [rbp+60h] BYREF

  v5 = a3;
  v24 = a3;
  memset_0(v32, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CF495);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v32);
  memset_0(v29, 0, 0xCCuLL);
  v9 = v29;
  v10 = 0;
  v11 = 65LL;
  do
  {
    if ( v11 == -2147483581 )
      break;
    v12 = *(_WORD *)((char *)v9 + a2 - (_QWORD)v29);
    if ( !v12 )
      break;
    *v9++ = v12;
    --v11;
  }
  while ( v11 );
  v13 = v9 - 1;
  if ( v11 )
    v13 = v9;
  *v13 = 0;
  RtlCopySid(0x44u, DestinationSid, v5);
  v31 = a4;
  v14 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v29);
  if ( v14 )
  {
    v28 = 0LL;
    v27 = 0LL;
    for ( i = HampHostEnumerateHostsInNode(v14, 3, 0LL); ; i = HampPkgGetNextHost(v16) )
    {
      v16 = i;
      if ( !i )
        break;
      v17 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)&v27, i);
      if ( v17 < 0 )
        goto LABEL_12;
    }
    HampHostSnapshotTerminate(&v27, 3LL, a5, 0LL, 4000, 0);
    v17 = 0;
LABEL_12:
    HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)&v27);
    CemRcObjectDereference(v14);
    if ( v17 < 0 )
      v10 = v17;
    v5 = v24;
  }
  else
  {
    v10 = -1073741275;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v22[0] = a5;
    v25 = v5;
    v23 = a4;
    v26 = a2;
    LODWORD(v24) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<1>>(
      v18,
      (unsigned int)&unk_1800CEAE0,
      v19,
      v20,
      (__int64)&v24,
      (__int64)&v26,
      (__int64)&v23,
      (__int64)&v25,
      (__int64)v22);
  }
  return v10;
}
