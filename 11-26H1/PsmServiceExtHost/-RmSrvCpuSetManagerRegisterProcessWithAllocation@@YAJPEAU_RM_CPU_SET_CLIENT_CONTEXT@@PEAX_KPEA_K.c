/*
 * XREFs of ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x180081FF4
 * Callers:
 *     ?RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z @ 0x180074CA0 (-RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@334@Z @ 0x180002378 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000DD64 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpUtilCheckStopLockTracking@@YAXK@Z @ 0x180062ED8 (-RmpUtilCheckStopLockTracking@@YAXK@Z.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x1800853A4 (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800862DC (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008662C (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        HANDLE SourceHandle,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // rdi
  PVOID v8; // r14
  unsigned __int64 v9; // r15
  DWORD ProcessId; // ebx
  int v11; // ebx
  struct _RM_CPU_SET_ALLOCATION *Allocation; // rax
  char *v13; // rdi
  DWORD v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v18; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  DWORD v21; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v24[144]; // [rsp+80h] [rbp-80h] BYREF

  v4 = a3;
  v20 = a3;
  memset_0(v24, 0, 0x88uLL);
  v18 = 0;
  RmpUtilCheckStartLockTracking(&v18, (struct _CEM_LOCK_TRACKER *)v24);
  v8 = 0LL;
  v9 = -1LL;
  P = 0LL;
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E1278,
      byte_1800D1603);
  ProcessId = GetProcessId(SourceHandle);
  if ( ProcessId != GetCurrentProcessId() )
  {
    RmpAcquireGlobalLock();
    Allocation = RmpCpuSetManagerFindAllocation(*a1, v4);
    v13 = (char *)Allocation;
    if ( Allocation && *((struct _RM_CPU_SET_MANAGER ***)Allocation + 7) == a1 && *((_DWORD *)Allocation + 90) )
    {
      v11 = RmpCpuSetManagerRegisterProcessWithAllocation(
              (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1,
              SourceHandle,
              Allocation,
              (struct _RM_CPU_SET_PROCESS_REGISTRATION **)&P);
      if ( v11 >= 0 )
      {
        v11 = 0;
        v9 = *((_QWORD *)P + 4);
        *a4 = v9;
LABEL_16:
        RmpObjectRelease(v13);
LABEL_17:
        v4 = v20;
        goto LABEL_18;
      }
      v8 = P;
    }
    else
    {
      v11 = -1073741583;
    }
    if ( v8 )
      RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, v8, 1u);
    if ( !v13 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v11 = -1073741584;
LABEL_18:
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 9LL) )
  {
    v22 = v4;
    v14 = GetProcessId(SourceHandle);
    v23 = v9;
    v21 = v14;
    LODWORD(v20) = *((_DWORD *)a1 + 14);
    LODWORD(P) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E1278,
      (__int64)&unk_1800D1637,
      v15,
      v16,
      (__int64)&P,
      (__int64)&v23,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v22);
  }
  RmpUtilCheckStopLockTracking(v18);
  return (unsigned int)v11;
}
