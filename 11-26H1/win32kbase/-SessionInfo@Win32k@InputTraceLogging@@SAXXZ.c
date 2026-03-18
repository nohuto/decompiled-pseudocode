/*
 * XREFs of ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x14013AD20
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14008FA40 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14013ADF0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall InputTraceLogging::Win32k::SessionInfo(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v4; // r8d
  int v5; // r9d
  const char *v6; // rax
  union _LARGE_INTEGER v7; // [rsp+40h] [rbp+8h] BYREF
  const char *v8; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 2) != 0 && (qword_1402A9E58 & 2) == qword_1402A9E58 )
  {
    v7 = gliQpcFreq;
    UserSessionState = W32GetUserSessionState(a1, a2, a3);
    if ( *(_WORD *)(UserSessionState + 68744) )
    {
      if ( *(_WORD *)(UserSessionState + 68744) == 1 )
      {
        v6 = "ICA";
      }
      else if ( *(_WORD *)(UserSessionState + 68744) == 2 )
      {
        v6 = "RDP";
      }
      else if ( *(unsigned __int16 *)(UserSessionState + 68744) == 0xFFFF )
      {
        v6 = "Disconnected";
      }
      else
      {
        v6 = "UNKNOWN";
      }
    }
    else
    {
      v6 = "Console";
    }
    v8 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_140282C7D,
      v4,
      v5,
      (__int64)&v8,
      (__int64)&v7);
  }
}
