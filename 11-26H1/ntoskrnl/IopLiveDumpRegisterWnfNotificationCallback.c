/*
 * XREFs of IopLiveDumpRegisterWnfNotificationCallback @ 0x1405D3D24
 * Callers:
 *     IopInitializeDumpPolicySettings @ 0x140796374 (IopInitializeDumpPolicySettings.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 */

char IopLiveDumpRegisterWnfNotificationCallback()
{
  int v0; // eax
  __int64 v2; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v3[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+68h] [rbp-18h]
  __int64 v6; // [rsp+70h] [rbp-10h]

  HIDWORD(v3[0]) = 0;
  v0 = ExSubscribeWnfStateChange(
         (unsigned int)&v2,
         (unsigned int)&WNF_DUMP_ALLOW_LIVEDUMP_POLICY_VALUE_CHANGED,
         1,
         0,
         (__int64)IopLiveDumpPolicyChangeWnfCallback,
         0LL);
  if ( v0 < 0 )
  {
    LOBYTE(v0) = IopLiveDumpIsTracingEnabled();
    if ( (_BYTE)v0 )
    {
      v3[1] = 56LL;
      v3[0] = "Failed to subscribe for policy value change notification";
      LOBYTE(v0) = IopLiveDumpTrace(LIVEDUMP_EVENT_LIVEDUMP_POLICY_OPERATION_FAILURE, 1LL, v3);
    }
    if ( (unsigned int)dword_140E06D90 > 5 )
    {
      LOBYTE(v0) = tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL);
      if ( (_BYTE)v0 )
      {
        v2 = 0x1000000LL;
        v5 = &v2;
        v6 = 8LL;
        LOBYTE(v0) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E06D90,
                       (unsigned __int8 *)&byte_140047637,
                       0LL,
                       0LL,
                       3u,
                       &v4);
      }
    }
  }
  return v0;
}
