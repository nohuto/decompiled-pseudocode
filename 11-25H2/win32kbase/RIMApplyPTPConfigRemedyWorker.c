/*
 * XREFs of RIMApplyPTPConfigRemedyWorker @ 0x1400F1818
 * Callers:
 *     rimInputApc @ 0x140182D20 (rimInputApc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x14000659C (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400B2938 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400B2DEC (RIMConfigurePointerDevice.c)
 *     IsPTPInputEnabled @ 0x1400D74A8 (IsPTPInputEnabled.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400ED4D4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1401E0654 (RIMFindSiblingPointerDeviceForMouse.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

char __fastcall RIMApplyPTPConfigRemedyWorker(__int64 a1, __int64 a2)
{
  char v3; // r12
  _UNKNOWN **v4; // rax
  __int64 v5; // rdx
  char v6; // si
  bool v7; // r14
  char v8; // bl
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  char v14; // si
  char v15; // bl
  bool v16; // r14
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 *v20; // rsi
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // ecx
  __int64 v26; // rcx
  unsigned __int16 *v27; // r8
  __int64 v28; // r9
  char v29; // r14
  bool v30; // r15
  char v31; // bl
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  PVOID Object; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int16 *v37[3]; // [rsp+68h] [rbp-21h] BYREF
  _OWORD v38[2]; // [rsp+80h] [rbp-9h] BYREF
  int v39; // [rsp+A0h] [rbp+17h]

  v3 = a1;
  LODWORD(v4) = IsPTPInputEnabled(a1, a2);
  if ( (_DWORD)v4 && (*(_DWORD *)(a2 + 168) & 0x10000000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v6 = 0;
    }
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(_BYTE *)(a2 + 190);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v10) = v7;
      LOBYTE(v11) = v6;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        12,
        (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
        v3,
        a2,
        v8);
    }
    v12 = *(_DWORD *)(a2 + 2308);
    v13 = v12 / 0x19;
    LOBYTE(v4) = 25 * v13;
    if ( v12 % 0x19 == 1
      && (LOBYTE(v4) = *(_BYTE *)(a2 + 190),
          v14 = (_BYTE)v4 + 1,
          *(_BYTE *)(a2 + 190) = (_BYTE)v4 + 1,
          (unsigned __int8)v4 < 0x14u) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v15 = 0;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v15;
        WPP_RECORDER_AND_TRACE_SF_qqd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(v17 + 19336),
          4,
          1,
          13,
          (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
          v3,
          a2,
          v14);
      }
      Object = 0LL;
      LOBYTE(v4) = RIMFindSiblingPointerDeviceForMouse(a2, &Object);
      v20 = (__int64 *)Object;
      if ( Object )
      {
        v21 = *((_QWORD *)Object + 49);
        RIMLockExclusive(v21 + 104);
        if ( *(_BYTE *)(a2 + 190) == 1
          && (unsigned int)dword_14029EF38 > 5
          && tlgKeywordOn((__int64)&dword_14029EF38, 0x800000000000LL) )
        {
          Object = v20 + 33;
          v37[0] = (unsigned __int16 *)(a2 + 192);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v22,
            (__int64)&unk_14027DAC5,
            v23,
            v24,
            v37,
            (unsigned __int16 **)&Object);
        }
        RIMConfigurePointerDevice(v21, (__int64)(v20 + 9), v20[64]);
        if ( !v20[66] )
        {
          LODWORD(Object) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 162LL);
        }
        RIMApiSetSetUserPTPEnabledPreference((__int64)(v20 + 9), v20[64], v21);
        RIMUnlockExclusive(v21 + 104);
LABEL_41:
        LOBYTE(v4) = ObfDereferenceObject(v20);
      }
    }
    else if ( *(_BYTE *)(a2 + 190) >= 0x14u )
    {
      v25 = dword_14029EF38;
      v20 = 0LL;
      Object = 0LL;
      if ( dword_14029EF38 )
      {
        RIMFindSiblingPointerDeviceForMouse(a2, &Object);
        v25 = dword_14029EF38;
        v20 = (__int64 *)Object;
      }
      v39 = *(_DWORD *)L">";
      v37[2] = (unsigned __int16 *)v38;
      v37[1] = (unsigned __int16 *)2359330;
      v38[0] = *(_OWORD *)L"<Unknown sibling>";
      v38[1] = *(_OWORD *)L" sibling>";
      if ( v25 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x800000000000LL) )
      {
        v37[0] = v27;
        Object = (PVOID)(a2 + 192);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
          v26,
          (__int64)&unk_14027DA79,
          (__int64)v27,
          v28,
          (unsigned __int16 **)&Object,
          v37);
      }
      *(_DWORD *)(a2 + 168) &= ~0x10000000u;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v29 = 0;
      }
      v4 = &WPP_RECORDER_INITIALIZED;
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = *(_BYTE *)(a2 + 190);
        v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v33) = v30;
        LOBYTE(v34) = v29;
        LOBYTE(v4) = WPP_RECORDER_AND_TRACE_SF_qqd(
                       *((_QWORD *)WPP_GLOBAL_Control + 3),
                       v34,
                       v33,
                       *(_QWORD *)(v32 + 19336),
                       4,
                       1,
                       14,
                       (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
                       v3,
                       a2,
                       v31);
      }
      if ( v20 )
        goto LABEL_41;
    }
  }
  return (char)v4;
}
