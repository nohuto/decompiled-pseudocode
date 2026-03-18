/*
 * XREFs of ?UnsuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x140193480
 * Callers:
 *     RIMCmRemoveContactSuppressionReasons @ 0x14012C300 (RIMCmRemoveContactSuppressionReasons.c)
 * Callees:
 *     ?SuppressionReasonToString@InputTraceLogging@@CAPEBDK@Z @ 0x140193530 (-SuppressionReasonToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@44@Z @ 0x140193604 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U2@@-$_tlgWriteTe.c)
 */

void __fastcall InputTraceLogging::RIM::UnsuppressContact(
        const struct RIMDEV *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        bool a5)
{
  int v5; // edx
  __int64 v6; // r11
  int v7; // r8d
  int v8; // r9d
  BOOL v9; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+54h] [rbp-24h] BYREF
  int v11; // [rsp+58h] [rbp-20h] BYREF
  const char *v12; // [rsp+60h] [rbp-18h] BYREF
  __int64 v13; // [rsp+68h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x100) != 0
    && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v9 = a5;
    v10 = a4;
    v12 = InputTraceLogging::SuppressionReasonToString(a3);
    v11 = v5;
    v13 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_140287E41,
      v7,
      v8,
      (__int64)&v13,
      (__int64)&v11,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v9);
  }
}
