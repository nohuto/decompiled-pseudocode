/*
 * XREFs of ?HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInputInfo@@@Z @ 0x1800D5D2C
 * Callers:
 *     ??$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersContinuousTracing@@SAXAEAKAEAW4MPCGestureType@@$$QEAPEAULegacyInputInfo@@@Z @ 0x1800D36F8 (--$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersCont.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@333AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180003780 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U1@.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?Provider@RawInputProvidersContinuousTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D7404 (-Provider@RawInputProvidersContinuousTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall RawInputProvidersContinuousTracing::HandInputReportProcessed_(__int64 a1, int a2, int a3, __int64 a4)
{
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  int v12; // [rsp+70h] [rbp+17h] BYREF
  int v13; // [rsp+74h] [rbp+1Bh] BYREF
  int v14; // [rsp+78h] [rbp+1Fh] BYREF
  int v15; // [rsp+7Ch] [rbp+23h] BYREF
  int v16; // [rsp+80h] [rbp+27h] BYREF
  int v17; // [rsp+84h] [rbp+2Bh] BYREF
  __int64 v18; // [rsp+88h] [rbp+2Fh] BYREF
  _QWORD v19[4]; // [rsp+90h] [rbp+37h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+67h] BYREF
  int v21; // [rsp+D8h] [rbp+7Fh] BYREF

  v20 = a1;
  v7 = RawInputProvidersContinuousTracing::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    LOBYTE(v7) = tlgKeywordOn((__int64)v7, 2LL);
    if ( (_BYTE)v7 )
    {
      v12 = *(_DWORD *)(a4 + 1068);
      v13 = *(_DWORD *)(a4 + 1072);
      LOBYTE(v20) = *(_BYTE *)(a4 + 965);
      v19[0] = *(_QWORD *)(a4 + 1080);
      v14 = *(_DWORD *)(a4 + 1060);
      v16 = *(_DWORD *)(a4 + 72);
      v18 = a4 + 1172;
      v21 = *(_DWORD *)(a4 + 1200);
      v15 = a3;
      v17 = a2;
      LOBYTE(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                     v10,
                     (__int64)&unk_180215627,
                     v8,
                     v9,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)v19,
                     (__int64)&v20,
                     (__int64)&v13,
                     (__int64)&v12,
                     (__int64)&v21,
                     &v18);
    }
  }
  return (char)v7;
}
