/*
 * XREFs of ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18005BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005C130 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180086694 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerAudioCpuWnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _RM_CPU_SET_MANAGER *a4,
        int *a5,
        unsigned int a6)
{
  int v7; // esi
  int v8; // ebx
  int v9; // r8d
  int v10; // r9d
  int v12; // [rsp+30h] [rbp-B8h] BYREF
  int v13[3]; // [rsp+34h] [rbp-B4h] BYREF
  _BYTE v14[144]; // [rsp+40h] [rbp-A8h] BYREF

  memset_0(v14, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  v7 = -1;
  if ( a5 && a6 == 4 )
    v8 = *a5;
  else
    v8 = -1;
  RmpAcquireGlobalLock();
  if ( (*(_BYTE *)(*(_QWORD *)a4 + 3536LL) & 1) == 0 )
  {
    v7 = *((_DWORD *)a4 + 348);
    if ( v8 != v7 )
    {
      *((_DWORD *)a4 + 348) = v8;
      RmpCpuSetManagerResetValidMask(a4);
    }
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v12 = v7;
    v13[0] = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E1278,
      (unsigned int)&unk_1800D27EF,
      v9,
      v10,
      (__int64)v13,
      (__int64)&v12);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
