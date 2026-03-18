/*
 * XREFs of IopLiveDumpTraceDumpDisabledOnBoot @ 0x1405D20FC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405D78B4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char IopLiveDumpTraceDumpDisabledOnBoot()
{
  char result; // al
  char v1; // [rsp+30h] [rbp-19h] BYREF
  __int64 v2; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v3[2]; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v5; // [rsp+70h] [rbp+27h]
  __int64 v6; // [rsp+78h] [rbp+2Fh]
  char *v7; // [rsp+80h] [rbp+37h]
  __int64 v8; // [rsp+88h] [rbp+3Fh]

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v3[1] = 4LL;
    v3[0] = &AllowLiveDump;
    result = IopLiveDumpTrace(LIVEDUMP_EVENT_LIVEDUMP_DISABLED_ON_BOOT_BY_POLICY, 1LL, v3);
  }
  if ( (unsigned int)dword_140E06D90 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL);
    if ( result )
    {
      v2 = 0x1000000LL;
      v5 = &v2;
      v1 = AllowLiveDump;
      v6 = 8LL;
      v7 = &v1;
      v8 = 1LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E06D90,
               (unsigned __int8 *)&dword_140047074,
               0LL,
               0LL,
               4u,
               &v4);
    }
  }
  return result;
}
