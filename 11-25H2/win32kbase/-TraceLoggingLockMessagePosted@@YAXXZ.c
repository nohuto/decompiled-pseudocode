/*
 * XREFs of ?TraceLoggingLockMessagePosted@@YAXXZ @ 0x1401C2B00
 * Callers:
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400031AC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void __fastcall TraceLoggingLockMessagePosted(__int64 a1)
{
  _QWORD *v1; // r8
  __int64 v2; // r9
  void *ProcessImageFileName; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  void *v5; // [rsp+48h] [rbp+10h] BYREF

  PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
  {
    v4 = 0x1000000LL;
    if ( v1 )
      ProcessImageFileName = (void *)PsGetProcessImageFileName(*v1);
    else
      ProcessImageFileName = &unk_14025EF20;
    v5 = ProcessImageFileName;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      (__int64)&dword_14029EE58,
      (__int64)&unk_140278F46,
      (__int64)v1,
      v2,
      &v5,
      (__int64)&v4);
  }
}
