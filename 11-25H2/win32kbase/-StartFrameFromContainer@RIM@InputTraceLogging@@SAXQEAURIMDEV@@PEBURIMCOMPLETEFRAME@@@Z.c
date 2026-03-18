/*
 * XREFs of ?StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1401EF1A4
 * Callers:
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1401EF51C (rimGetCompleteFrameFromIVCompleteFrame.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x140005B74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RIM::StartFrameFromContainer(
        struct RIMDEV *const a1,
        const struct RIMCOMPLETEFRAME *a2)
{
  bool v2; // al
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r8
  int v6; // ecx
  int v7; // [rsp+50h] [rbp-20h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp-10h] BYREF
  int v10; // [rsp+88h] [rbp+18h] BYREF
  int v11; // [rsp+90h] [rbp+20h] BYREF
  int v12; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 )
  {
    v2 = tlgKeywordOn((__int64)&dword_14029EE20, 256LL);
    v5 = 0LL;
    if ( v2 )
    {
      if ( v3 )
        v6 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 448) + 18LL);
      else
        v6 = 0;
      v10 = v6;
      if ( v3 )
        v5 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 448) + 16LL);
      v12 = *(_DWORD *)(v4 + 196);
      v7 = *(_DWORD *)(v4 + 24);
      v8 = *(_QWORD *)(v4 + 48);
      v11 = v5;
      v9 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_14027BF17,
        v5,
        v3,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
