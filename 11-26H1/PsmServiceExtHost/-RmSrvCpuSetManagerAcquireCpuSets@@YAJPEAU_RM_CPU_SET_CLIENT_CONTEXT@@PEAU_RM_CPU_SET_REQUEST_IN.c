/*
 * XREFs of ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x180081CB0
 * Callers:
 *     ?RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z @ 0x180074BF0 (-RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x180002EF4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000DD64 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpUtilCheckStopLockTracking@@YAXK@Z @ 0x180062ED8 (-RmpUtilCheckStopLockTracking@@YAXK@Z.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180084594 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008652C (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        ULONG *a2,
        unsigned __int64 *a3,
        struct _WNF_STATE_NAME *a4)
{
  unsigned __int64 v7; // rsi
  ULONG v8; // ebx
  int v9; // ebx
  PVOID v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v15; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v17; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v18; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG v19; // [rsp+68h] [rbp-98h] BYREF
  int v20; // [rsp+6Ch] [rbp-94h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[144]; // [rsp+80h] [rbp-80h] BYREF

  memset_0(v22, 0, 0x88uLL);
  v15 = 0;
  RmpUtilCheckStartLockTracking(&v15, (struct _CEM_LOCK_TRACKER *)v22);
  v7 = -1LL;
  P = 0LL;
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E1278,
      byte_1800D1C8C);
  BitMapHeader = 0LL;
  RtlInitializeBitMap(&BitMapHeader, a2 + 2, 0x800u);
  if ( *a2 && a2[66] < 2 && a2[67] < 8 && (v8 = *a2, RtlNumberOfSetBits(&BitMapHeader) <= v8) )
  {
    RmpAcquireGlobalLock();
    v9 = RmpCpuSetManagerAcquireCpuSets(
           a1,
           (struct _RM_CPU_SET_REQUEST_INFORMATION *)a2,
           0,
           (struct _RM_CPU_SET_ALLOCATION **)&P);
    if ( v9 < 0 )
    {
      v10 = P;
    }
    else
    {
      v10 = 0LL;
      v9 = 0;
      v7 = *((_QWORD *)P + 4);
      *a3 = v7;
    }
    if ( v10 )
      RmpCpuSetManagerReleaseAllocation(v10);
    RmpReleaseGlobalLock();
  }
  else
  {
    v9 = -1073741584;
  }
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 9LL) )
  {
    v17 = *a2;
    v18 = a2[67];
    v19 = a2[66];
    v20 = *((_DWORD *)a1 + 14);
    *(_QWORD *)&BitMapHeader.SizeOfBitMap = v7;
    LODWORD(P) = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (__int64)&unk_1800D16AD,
      v12,
      v13,
      (__int64)&P,
      (__int64)&BitMapHeader,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  RmpUtilCheckStopLockTracking(v15);
  return (unsigned int)v9;
}
