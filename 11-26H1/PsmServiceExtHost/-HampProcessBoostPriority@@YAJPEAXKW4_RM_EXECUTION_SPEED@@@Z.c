/*
 * XREFs of ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x180065068
 * Callers:
 *     ?HampProcessSnapshotBoostPriority@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@W4_RM_EXECUTION_SPEED@@@Z @ 0x180065018 (-HampProcessSnapshotBoostPriority@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@W4_RM_EXECUTION_SPEED@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180001E28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z @ 0x1800177F4 (-HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 */

__int64 __fastcall HampProcessBoostPriority(void *a1, int a2, int a3)
{
  int v6; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v8; // rax
  unsigned __int8 v9; // di
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+40h] [rbp-10h] BYREF
  void *TargetHandle; // [rsp+48h] [rbp-8h] BYREF
  int v18; // [rsp+90h] [rbp+40h] BYREF
  __int16 ProcessInformation; // [rsp+98h] [rbp+48h] BYREF

  ProcessInformation = 0;
  TargetHandle = 0LL;
  if ( a3 < 1 )
    return 0;
  CurrentProcess = GetCurrentProcess();
  v8 = GetCurrentProcess();
  v6 = NtDuplicateObject(v8, a1, CurrentProcess, &TargetHandle, 0x600u, 0, 0);
  if ( v6 < 0 )
    goto LABEL_23;
  if ( a3 >= 2 )
  {
    if ( a3 >= 3 )
      goto LABEL_18;
    v9 = 6;
  }
  else
  {
    v9 = 2;
  }
  v6 = NtQueryInformationProcess(TargetHandle, ProcessPriorityClass, &ProcessInformation, 2u, 0LL);
  if ( v6 < 0 )
    goto LABEL_23;
  if ( HIBYTE(ProcessInformation) < v9 )
  {
    HIBYTE(ProcessInformation) = v9;
    NtSetInformationProcess(TargetHandle, ProcessPriorityClass, &ProcessInformation, 2u);
    if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    {
      LOBYTE(v18) = HIBYTE(ProcessInformation);
      v16 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v11,
        (__int64)&unk_1800CDC85,
        v10,
        v12,
        (__int64)&v16,
        (__int64)&v18);
    }
  }
  v6 = HampUtilActOnThreads(
         a1,
         1024,
         v10,
         (__int64 (__fastcall *)(void *, HANDLE, void *))HampProcessBoostPriorityThreadCallback,
         0LL);
  if ( v6 < 0 )
  {
LABEL_23:
    if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    {
      v18 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_1800E12B0,
        byte_1800CDCC4,
        v13,
        v14,
        (__int64)&v18);
    }
    goto LABEL_18;
  }
  v6 = 0;
LABEL_18:
  if ( TargetHandle )
    NtClose(TargetHandle);
  return (unsigned int)v6;
}
