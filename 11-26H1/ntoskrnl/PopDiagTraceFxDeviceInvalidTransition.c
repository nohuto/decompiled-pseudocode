/*
 * XREFs of PopDiagTraceFxDeviceInvalidTransition @ 0x14060B798
 * Callers:
 *     PopFxNotifyPreDIrpIssue @ 0x1405123F4 (PopFxNotifyPreDIrpIssue.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDeviceInvalidTransition(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // r8
  __int64 v5; // r9
  int ActivityId; // [rsp+20h] [rbp-89h]
  int RelatedActivityId; // [rsp+28h] [rbp-81h]
  int v8; // [rsp+40h] [rbp-69h] BYREF
  int v9; // [rsp+44h] [rbp-65h] BYREF
  __int64 v10; // [rsp+48h] [rbp-61h] BYREF
  __int64 v11; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-51h] BYREF
  __int64 *v13; // [rsp+68h] [rbp-41h]
  __int64 v14; // [rsp+70h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+80h] [rbp-29h] BYREF
  _DWORD *v16; // [rsp+A0h] [rbp-9h]
  __int64 v17; // [rsp+A8h] [rbp-1h]
  __int64 v18; // [rsp+B0h] [rbp+7h]
  _DWORD v19[2]; // [rsp+B8h] [rbp+Fh] BYREF
  int *v20; // [rsp+C0h] [rbp+17h]
  __int64 v21; // [rsp+C8h] [rbp+1Fh]
  int *v22; // [rsp+D0h] [rbp+27h]
  __int64 v23; // [rsp+D8h] [rbp+2Fh]
  __int64 *v24; // [rsp+E0h] [rbp+37h]
  __int64 v25; // [rsp+E8h] [rbp+3Fh]
  __int64 v26; // [rsp+118h] [rbp+6Fh] BYREF

  v26 = a2;
  result = *(_BYTE *)(a2 + 66);
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
    if ( result )
    {
      v17 = 2LL;
      v16 = v19;
      v18 = *(_QWORD *)(a1 + 224);
      v19[0] = *(unsigned __int16 *)(a1 + 216);
      v8 = *(_DWORD *)(a1 + 32);
      v20 = &v8;
      v9 = *(_DWORD *)(v5 + 192);
      v22 = &v9;
      v24 = &v10;
      v19[1] = 0;
      v21 = 4LL;
      v23 = 4LL;
      v10 = 0x1000000LL;
      v25 = 8LL;
      result = tlgWriteEx_EtwWriteEx(
                 (__int64)&dword_140E07560,
                 (unsigned __int8 *)&byte_14004B907,
                 v4,
                 1u,
                 ActivityId,
                 RelatedActivityId,
                 7u,
                 &v15);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_FX_INVALID_DEVICE_TRANSITION);
    if ( result )
    {
      v11 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v11;
      v13 = &v26;
      v14 = 8LL;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_FX_INVALID_DEVICE_TRANSITION, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
