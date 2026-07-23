/*
 * XREFs of PopDiagTraceCsEnterReason @ 0x140B3B52C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsEnterReason(int a1)
{
  char result; // al
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+44h] [rbp-BCh] BYREF
  int v7; // [rsp+48h] [rbp-B8h] BYREF
  int v8; // [rsp+4Ch] [rbp-B4h] BYREF
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  int v10; // [rsp+54h] [rbp-ACh] BYREF
  int v11; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  int *v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  int *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  __int64 *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  int *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  int *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  __int64 *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  int *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  int *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  int *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  int *v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  int *v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]

  v12 = PopWnfCsEnterScenarioId;
  v4 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v3 = (unsigned __int8)PopLidOpened;
  v5 = PopCsConsumption;
  result = dword_140E27168;
  v6 = dword_140E27168;
  v2 = a1;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_ENTER_REASON);
    if ( result )
    {
      result = SSHSupportIsPlatformAoAc();
      if ( result )
      {
        UserData.Ptr = (ULONGLONG)&v2;
        *(_QWORD *)&UserData.Size = 4LL;
        v15 = &v3;
        v16 = 4LL;
        v17 = &v4;
        v18 = 4LL;
        v19 = &v12;
        v21 = &v5;
        v23 = &v6;
        v25 = &PopWnfCsEnterScenarioId;
        v27 = 0xFFFFF780000002C4uLL;
        v20 = 1LL;
        v22 = 4LL;
        v24 = 4LL;
        v26 = 8LL;
        v28 = 4LL;
        result = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_ENTER_REASON, 0LL, 8u, &UserData);
      }
    }
  }
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
    if ( result )
    {
      v13 = PopWnfCsEnterScenarioId;
      v31 = 8LL;
      v30 = &v13;
      v7 = v2;
      v32 = &v7;
      v8 = v3;
      v34 = &v8;
      v9 = v4;
      v36 = &v9;
      v10 = v5;
      v38 = &v10;
      v11 = v6;
      v40 = &v11;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07560,
               (unsigned __int8 *)&word_14004BE16,
               0LL,
               0LL,
               8u,
               &v29);
    }
  }
  return result;
}
