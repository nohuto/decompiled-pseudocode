/*
 * XREFs of ?RequestPositionAndSizeUpdate@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18003823C
 * Callers:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18009496C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void TouchKeyboardExperienceTelemetryLogger::RequestPositionAndSizeUpdate(void)
{
  const struct _tlgProvider_t *v0; // rax
  __int64 v1; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  void *v4; // [rsp+60h] [rbp+27h]
  int v5; // [rsp+68h] [rbp+2Fh]
  int v6; // [rsp+6Ch] [rbp+33h]
  __int64 *v7; // [rsp+70h] [rbp+37h]
  int v8; // [rsp+78h] [rbp+3Fh]
  int v9; // [rsp+7Ch] [rbp+43h]

  v0 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 5u && (*((_BYTE *)v0 + 16) & 0x10) != 0 && (*((_QWORD *)v0 + 3) & 0x10LL) == *((_QWORD *)v0 + 3) )
  {
    v9 = 0;
    v7 = &v1;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v0 + 1);
    v1 = 0x1000000LL;
    v8 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 16LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v4 = &unk_1807D5FBC;
    UserData.Reserved = 2;
    v5 = 48;
    v6 = 1;
    EventWriteTransfer(*((_QWORD *)v0 + 4), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
