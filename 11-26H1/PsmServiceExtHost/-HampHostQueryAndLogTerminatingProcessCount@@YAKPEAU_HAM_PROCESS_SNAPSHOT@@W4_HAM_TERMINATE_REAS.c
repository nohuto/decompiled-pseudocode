/*
 * XREFs of ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18005C57C
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000CEE0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18005C714 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall HampHostQueryAndLogTerminatingProcessCount(__int64 a1, int a2)
{
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int v6; // edi
  __int64 i; // rsi
  unsigned int v8; // ebx
  unsigned int v9; // r15d
  _BYTE ProcessInformation[64]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+18h] BYREF

  memset_0(ProcessInformation, 0, sizeof(ProcessInformation));
  v5 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    NtQueryInformationProcess(
      *(HANDLE *)(*(_QWORD *)a1 + 8 * i),
      ProcessBasicInformation,
      ProcessInformation,
      0x40u,
      0LL);
    if ( (ProcessInformation[56] & 4) != 0 )
    {
      ++v6;
    }
    else
    {
      if ( a2 == 256 )
      {
        v8 = 0;
      }
      else if ( a2 == 512 )
      {
        v8 = 4;
      }
      else
      {
        v8 = 2;
        if ( a2 != 2048 )
          v8 = 4;
      }
      v9 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * i);
      if ( (int)WerpAddTerminationReason(v9, v8, L"HAM", 0LL) < 0 )
        WerpAddTerminationReason(v9, v8, L"HAM", 0LL);
    }
    v5 = *(_DWORD *)(a1 + 16);
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    v12 = v5;
    v13 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E12B0,
      (unsigned int)&unk_1800CD100,
      v5,
      v4,
      (__int64)&v13,
      (__int64)&v12);
  }
  return v6;
}
