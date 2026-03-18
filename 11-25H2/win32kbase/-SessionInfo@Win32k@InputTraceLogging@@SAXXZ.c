/*
 * XREFs of ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1401B790C
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B77F0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400031AC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void InputTraceLogging::Win32k::SessionInfo(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  const char *v5; // rax
  union _LARGE_INTEGER v6; // [rsp+40h] [rbp+8h] BYREF
  const char *v7; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 2LL) )
  {
    v6 = gliQpcFreq;
    UserSessionState = W32GetUserSessionState(v1, v0);
    if ( *(_WORD *)(UserSessionState + 68752) )
    {
      if ( *(_WORD *)(UserSessionState + 68752) == 1 )
      {
        v5 = "ICA";
      }
      else if ( *(_WORD *)(UserSessionState + 68752) == 2 )
      {
        v5 = "RDP";
      }
      else if ( *(unsigned __int16 *)(UserSessionState + 68752) == 0xFFFF )
      {
        v5 = "Disconnected";
      }
      else
      {
        v5 = "UNKNOWN";
      }
    }
    else
    {
      v5 = "Console";
    }
    v7 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_1402789C3,
      v3,
      v4,
      (void **)&v7,
      (__int64)&v6);
  }
}
