/*
 * XREFs of PopThermalHandlePreviousShutdown @ 0x1407D4910
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PopOpenThermalLoggingKey @ 0x1404F9FC4 (PopOpenThermalLoggingKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PopThermalHandlePreviousShutdown()
{
  HANDLE v0; // rbx
  ULONG v1; // eax
  char v2; // r15
  void *v3; // rax
  char v4; // r14
  int v5; // esi
  WCHAR *v6; // r12
  WCHAR *Pool2; // rdi
  HANDLE v8; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-D8h]
  ULONG Data[2]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  void *v13; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v14; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName_8; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING v16; // [rsp+88h] [rbp-80h] BYREF
  __int64 v17; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+B0h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v21[16]; // [rsp+E8h] [rbp-20h] BYREF
  HANDLE *p_KeyHandle; // [rsp+F8h] [rbp-10h]
  __int64 v23; // [rsp+100h] [rbp-8h]
  HANDLE *p_Handle; // [rsp+108h] [rbp+0h]
  __int64 v25; // [rsp+110h] [rbp+8h]
  __int64 *v26; // [rsp+118h] [rbp+10h]
  __int64 v27; // [rsp+120h] [rbp+18h]

  KeyHandle = 0LL;
  Data[0] = 0;
  Data[1] = 0;
  DestinationString = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  Handle = 0LL;
  ValueName_8 = 0LL;
  v16 = 0LL;
  if ( (int)PopOpenThermalLoggingKey(0, &KeyHandle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ShutdownOccurred");
    RtlInitUnicodeString(&v14, L"ShutdownSource");
    RtlInitUnicodeString(&ValueName_8, L"ShutdownTemperature");
    RtlInitUnicodeString(&v16, L"ShutdownTotalUpTime");
    v0 = KeyHandle;
    memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x18u, Data) >= 0
      && *(_QWORD *)&KeyValueInformation[4] == 0x400000004LL )
    {
      if ( ZwQueryValueKey(v0, &ValueName_8, KeyValuePartialInformation, KeyValueInformation, 0x18u, Data) >= 0
        && *(_QWORD *)&KeyValueInformation[4] == 0x400000004LL )
      {
        v1 = *(_DWORD *)&KeyValueInformation[12];
        v2 = 1;
      }
      else
      {
        v2 = 0;
        v1 = 0;
      }
      Data[1] = v1;
      if ( ZwQueryValueKey(v0, &v16, KeyValuePartialInformation, KeyValueInformation, 0x18u, Data) >= 0
        && *(_QWORD *)&KeyValueInformation[4] == 0x80000000BLL )
      {
        v3 = *(void **)&KeyValueInformation[12];
        v4 = 1;
      }
      else
      {
        v4 = 0;
        v3 = 0LL;
      }
      v13 = v3;
      v5 = 16;
      v6 = (WCHAR *)L"Unknown";
      Pool2 = 0LL;
      if ( ZwQueryValueKey(v0, &v14, KeyValuePartialInformation, 0LL, 0, Data) == -1073741789 )
      {
        Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          if ( ZwQueryValueKey(v0, &v14, KeyValuePartialInformation, Pool2, Data[0], Data) >= 0
            && *((_DWORD *)Pool2 + 1) == 1 )
          {
            v5 = *((_DWORD *)Pool2 + 2);
            v6 = Pool2 + 6;
          }
        }
      }
      if ( ZwDeleteValueKey(v0, &DestinationString) >= 0 )
      {
        if ( (int)PopOpenThermalLoggingKey(1, &Handle) >= 0 )
        {
          ResultLength = v5;
          v8 = Handle;
          ZwSetValueKey(Handle, &v14, 0, 1u, v6, ResultLength);
          if ( v2 )
            ZwSetValueKey(v8, &ValueName_8, 0, 4u, &Data[1], 4u);
          if ( v4 )
            ZwSetValueKey(v8, &v16, 0, 0xBu, &v13, 8u);
          ZwClose(v8);
        }
        ZwUpdateWnfStateData(&WNF_PO_THERMAL_SHUTDOWN_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
        if ( (unsigned int)dword_140E07598 > 5 && tlgKeywordOn((__int64)&dword_140E07598, 0x800000000000LL) )
        {
          tlgCreate1Sz_wchar_t((__int64)v21, v6);
          p_KeyHandle = &KeyHandle;
          Handle = v13;
          LODWORD(KeyHandle) = Data[1];
          p_Handle = &Handle;
          v23 = 4LL;
          v26 = &v17;
          v25 = 8LL;
          v17 = 0x1000000LL;
          v27 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E07598,
            (unsigned __int8 *)&dword_14004A224,
            0LL,
            0LL,
            6u,
            &v20);
        }
        ZwDeleteValueKey(v0, &ValueName_8);
        ZwDeleteValueKey(v0, &v14);
        ZwDeleteValueKey(v0, &v16);
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x6D726854u);
    }
    if ( v0 )
      ZwClose(v0);
  }
}
