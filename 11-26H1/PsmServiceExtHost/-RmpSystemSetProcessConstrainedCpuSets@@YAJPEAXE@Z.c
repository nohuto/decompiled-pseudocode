/*
 * XREFs of ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x18008C69C
 * Callers:
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087F40 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 *     ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180088380 (-RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180002014 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 */

__int64 __fastcall RmpSystemSetProcessConstrainedCpuSets(HANDLE Process, char a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v7[6]; // [rsp+40h] [rbp-18h] BYREF
  char ProcessInformation; // [rsp+68h] [rbp+10h] BYREF
  char v9; // [rsp+70h] [rbp+18h] BYREF
  DWORD ProcessId; // [rsp+78h] [rbp+20h] BYREF

  ProcessInformation = a2;
  v3 = NtSetInformationProcess(Process, (PROCESSINFOCLASS)80, &ProcessInformation, 1u);
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
  {
    v9 = ProcessInformation;
    v7[0] = v3;
    ProcessId = GetProcessId(Process);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800E1278,
      (__int64)&unk_1800D4813,
      v4,
      v5,
      (__int64)v7,
      (__int64)&ProcessId,
      (__int64)&v9);
  }
  return v3;
}
