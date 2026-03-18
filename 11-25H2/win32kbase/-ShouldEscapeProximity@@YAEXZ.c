/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1401B05EC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@554@Z @ 0x140003254 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U2@@-$.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall ShouldEscapeProximity(__int64 a1, __int64 a2)
{
  char v2; // si
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v18; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-8h] BYREF
  char v20; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+48h] BYREF

  v2 = 0;
  v3 = -1LL;
  v4 = MEMORY[0xFFFFF78000000008];
  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 592);
  if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + 576) != -1LL )
  {
    if ( v4 <= *(_QWORD *)(W32GetUserSessionState(v9, v8) + 576) )
    {
      LODWORD(v21) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 842);
    }
    v3 = v4 - *(_QWORD *)(W32GetUserSessionState(v11, v10) + 576);
    if ( v3 < 0x1C9C380 )
    {
      v2 = 1;
      v12 = W32GetUserSessionState(v9, v8);
      ++*(_DWORD *)(v12 + 588);
    }
  }
  if ( (unsigned int)dword_14029EDE8 > 5 && tlgKeywordOn((__int64)&dword_14029EDE8, 0x400000000000LL) )
  {
    v21 = v4;
    v22 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 588);
    v23 = *(_DWORD *)(W32GetUserSessionState(v22, v13) + 584);
    v18 = *(_DWORD *)(W32GetUserSessionState(v23, v14) + 592);
    v19 = v3;
    v20 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v18,
      (__int64)&unk_140278685,
      v15,
      v16,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21);
  }
  *(_QWORD *)(W32GetUserSessionState(v9, v8) + 576) = v4;
  return v2;
}
