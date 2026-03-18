/*
 * XREFs of ?WakeKST@KST@InputTraceLogging@@SAXJW4WaitCompletionPacketPurpose@@@Z @ 0x1400F0D7C
 * Callers:
 *     UserKSTWait @ 0x1400F0898 (UserKSTWait.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1400F1A48 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall InputTraceLogging::KST::WakeKST(int a1, int a2)
{
  bool v2; // r9
  const char *v3; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF
  const char *v5; // [rsp+50h] [rbp+18h] BYREF

  v2 = a1 >= 259 || (unsigned int)a1 <= 0x100;
  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 2) != 0 && (qword_1402A9E58 & 2) == qword_1402A9E58 )
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
      v3 = (const char *)&unk_140269890;
    }
    v5 = v3;
    v4 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_14028B9BC,
      a1,
      v2,
      (__int64)&v4,
      (__int64)&v5);
  }
}
