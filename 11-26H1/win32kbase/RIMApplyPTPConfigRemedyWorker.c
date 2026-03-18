/*
 * XREFs of RIMApplyPTPConfigRemedyWorker @ 0x14013846C
 * Callers:
 *     rimInputApc @ 0x14009DFA0 (rimInputApc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x140006840 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@.c)
 *     IsPTPInputEnabled @ 0x140048E30 (IsPTPInputEnabled.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x14006E614 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400F074C (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400F0E9C (RIMConfigurePointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1401BDE58 (RIMFindSiblingPointerDeviceForMouse.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

char __fastcall RIMApplyPTPConfigRemedyWorker(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **v5; // rax
  int v6; // edx
  char v7; // si
  char v8; // r14
  int v9; // ebx
  __int64 UserSessionState; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned __int8 v13; // si
  char v14; // bl
  char v15; // r14
  __int64 v16; // rax
  __int64 *v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ecx
  unsigned __int16 *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r9
  char v26; // r14
  char v27; // r15
  int v28; // ebx
  __int64 v29; // rax
  __int64 v31; // [rsp+50h] [rbp-39h]
  PVOID Object; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int16 *v33; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v34[2]; // [rsp+70h] [rbp-19h] BYREF
  _OWORD v35[2]; // [rsp+80h] [rbp-9h] BYREF
  int v36; // [rsp+A0h] [rbp+17h]

  LODWORD(v5) = IsPTPInputEnabled(a1, a2, a3);
  if ( (_DWORD)v5 && (*(_DWORD *)(a2 + 168) & 0x10000000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v7 = 0;
    }
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *(unsigned __int8 *)(a2 + 190);
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, (unsigned int)&WPP_RECORDER_INITIALIZED);
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v8,
        *(_QWORD *)(UserSessionState + 19368),
        4u,
        1u,
        0xCu,
        (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
        a1,
        a2,
        v9);
    }
    v11 = *(_DWORD *)(a2 + 2300);
    v12 = v11 / 0x19;
    LODWORD(v5) = 25 * (v11 / 0x19);
    if ( v11 % 0x19 == 1
      && (LOBYTE(v5) = *(_BYTE *)(a2 + 190),
          v13 = (_BYTE)v5 + 1,
          *(_BYTE *)(a2 + 190) = (_BYTE)v5 + 1,
          (unsigned __int8)v5 < 0x14u) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v14 = 0;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, (unsigned int)&WPP_RECORDER_INITIALIZED);
        LODWORD(v31) = v13;
        WPP_RECORDER_AND_TRACE_SF_qqd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v15,
          *(_QWORD *)(v16 + 19368),
          4u,
          1u,
          0xDu,
          (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
          a1,
          a2,
          v31);
      }
      Object = 0LL;
      LOBYTE(v5) = RIMFindSiblingPointerDeviceForMouse(a2, &Object);
      v17 = (__int64 *)Object;
      if ( Object )
      {
        v18 = *((_QWORD *)Object + 49);
        RIMLockExclusive(v18 + 104);
        if ( *(_BYTE *)(a2 + 190) == 1
          && (unsigned int)dword_1402A9F58 > 5
          && tlgKeywordOn((__int64)&dword_1402A9F58, 0x800000000000LL) )
        {
          Object = v17 + 33;
          v33 = (unsigned __int16 *)(a2 + 192);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v19,
            (__int64)&unk_140288075,
            v20,
            v21,
            &v33,
            (unsigned __int16 **)&Object);
        }
        RIMConfigurePointerDevice(v18, (__int64)(v17 + 9), v17[64]);
        if ( !v17[66] )
        {
          LODWORD(Object) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 162LL);
        }
        RIMApiSetSetUserPTPEnabledPreference((__int64)(v17 + 9), v17[64], v18);
        RIMUnlockExclusive(v18 + 104);
LABEL_43:
        LOBYTE(v5) = ObfDereferenceObject(v17);
      }
    }
    else if ( *(_BYTE *)(a2 + 190) >= 0x14u )
    {
      v22 = dword_1402A9F58;
      v17 = 0LL;
      Object = 0LL;
      if ( dword_1402A9F58 )
      {
        RIMFindSiblingPointerDeviceForMouse(a2, &Object);
        v22 = dword_1402A9F58;
        v17 = (__int64 *)Object;
      }
      LODWORD(v23) = (_DWORD)v17 + 264;
      v36 = *(_DWORD *)L">";
      v34[1] = v35;
      v34[0] = 2359330LL;
      v35[0] = *(_OWORD *)L"<Unknown sibling>";
      v35[1] = *(_OWORD *)L" sibling>";
      if ( !v17 )
        v23 = (unsigned __int16 *)v34;
      if ( v22 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 0x800000000000LL) )
      {
        v33 = v23;
        Object = (PVOID)(a2 + 192);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
          v24,
          (__int64)&unk_1402880B8,
          (__int64)v23,
          v25,
          (unsigned __int16 **)&Object,
          &v33);
      }
      *(_DWORD *)(a2 + 168) &= ~0x10000000u;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v26 = 0;
      }
      v5 = &WPP_RECORDER_INITIALIZED;
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = *(unsigned __int8 *)(a2 + 190);
        v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, (_DWORD)v23);
        LODWORD(v31) = v28;
        LOBYTE(v5) = WPP_RECORDER_AND_TRACE_SF_qqd(
                       *((_QWORD *)WPP_GLOBAL_Control + 3),
                       v26,
                       v27,
                       *(_QWORD *)(v29 + 19368),
                       4u,
                       1u,
                       0xEu,
                       (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
                       a1,
                       a2,
                       v31);
      }
      if ( v17 )
        goto LABEL_43;
    }
  }
  return (char)v5;
}
