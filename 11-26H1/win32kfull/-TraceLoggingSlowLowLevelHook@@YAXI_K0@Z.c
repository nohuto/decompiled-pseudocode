/*
 * XREFs of ?TraceLoggingSlowLowLevelHook@@YAXI_K0@Z @ 0x1401D8B90
 * Callers:
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1401D8B44 (--1CCheckLLHookTime@@QEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x140262EBC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall TraceLoggingSlowLowLevelHook()
{
  int v0; // ecx
  int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // r10
  int v4; // r11d
  __int64 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h] BYREF
  __int64 v7[3]; // [rsp+50h] [rbp-18h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AAA30 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AAA30, 0x400000000000LL) )
    {
      v5 = v2;
      v6 = v3;
      v8 = v4;
      v7[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v0,
        (unsigned int)&unk_140377066,
        v1,
        v2,
        (__int64)v7,
        (__int64)&v8,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
