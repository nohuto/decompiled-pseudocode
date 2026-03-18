/*
 * XREFs of ?WakeKST@KST@InputTraceLogging@@SAXJW4WaitCompletionPacketPurpose@@@Z @ 0x1400E79C0
 * Callers:
 *     UserKSTWait @ 0x1400BD37C (UserKSTWait.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1400E7A88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall InputTraceLogging::KST::WakeKST(int a1, int a2)
{
  bool v2; // r9
  const char *v3; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF
  const char *v5; // [rsp+50h] [rbp+18h] BYREF

  v2 = (unsigned int)a1 <= 0x100 || a1 >= 259;
  if ( (unsigned int)dword_14029EE20 > 4 && (qword_14029EE30 & 2) != 0 && (qword_14029EE38 & 2) == qword_14029EE38 )
  {
    if ( v2 )
    {
      if ( a2 >= 0 )
      {
        v3 = "CoreMessaging";
      }
      else if ( a2 == 0x80000000 )
      {
        v3 = "Sensor";
      }
      else
      {
        v3 = "UNKNOWN";
        if ( a2 == -2147483647 )
          v3 = "ThreadManagement";
      }
    }
    else
    {
      v3 = (const char *)&unk_14025EF20;
    }
    v5 = v3;
    v4 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (unsigned int)&dword_14029EE20,
      (unsigned int)&unk_1402813A0,
      a1,
      v2,
      (__int64)&v4,
      (__int64)&v5);
  }
}
