/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1401D59B4
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@554@Z @ 0x140004118 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U2@@-$.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall ShouldEscapeProximity(int a1, int a2, int a3)
{
  char v3; // si
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v24; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-8h] BYREF
  int v26; // [rsp+90h] [rbp+30h] BYREF
  int v27; // [rsp+98h] [rbp+38h] BYREF
  int v28; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0;
  v4 = -1LL;
  v5 = MEMORY[0xFFFFF78000000008];
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  ++*(_DWORD *)(UserSessionState + 592);
  if ( *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 576) != -1LL )
  {
    if ( v5 <= *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 576) )
    {
      v26 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 813);
    }
    v4 = v5 - *(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 576);
    if ( v4 < 0x1C9C380 )
    {
      v3 = 1;
      v16 = W32GetUserSessionState(v11, v10, v12);
      ++*(_DWORD *)(v16 + 588);
    }
  }
  if ( (unsigned int)dword_1402A9E08 > 5 && tlgKeywordOn((__int64)&dword_1402A9E08, 0x400000000000LL) )
  {
    v24 = v5;
    v27 = *(_DWORD *)(W32GetUserSessionState(v11, v10, v12) + 588);
    v28 = *(_DWORD *)(W32GetUserSessionState(v27, v17, v18) + 584);
    v29 = *(_DWORD *)(W32GetUserSessionState(v28, v19, v20) + 592);
    v25 = v4;
    LOBYTE(v26) = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v29,
      (__int64)&unk_14028293F,
      v21,
      v22,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v24);
  }
  *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 576) = v5;
  return v3;
}
