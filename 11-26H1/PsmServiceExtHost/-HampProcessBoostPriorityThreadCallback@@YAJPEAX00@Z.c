/*
 * XREFs of ?HampProcessBoostPriorityThreadCallback@@YAJPEAX00@Z @ 0x180079C90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpSystemGetThreadId@@YAKPEAX@Z @ 0x180068504 (-RmpSystemGetThreadId@@YAKPEAX@Z.c)
 */

__int64 __fastcall HampProcessBoostPriorityThreadCallback(void *a1, void *a2, void *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE v7[32]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+50h] [rbp-18h]
  int ThreadInformation; // [rsp+88h] [rbp+20h] BYREF

  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  NtQueryInformationThread(a2, ThreadBasicInformation, v7, 0x30u, 0LL);
  if ( v8 < 0 )
  {
    ThreadInformation = 0;
    NtSetInformationThread(a2, ThreadBasePriority, &ThreadInformation, 4u);
    if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    {
      ThreadInformation = RmpSystemGetThreadId(a2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_1800E12B0,
        byte_1800CDD5B,
        v4,
        v5,
        (__int64)&ThreadInformation);
    }
  }
  return 0LL;
}
