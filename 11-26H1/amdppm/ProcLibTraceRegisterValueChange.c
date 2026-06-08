/*
 * XREFs of ProcLibTraceRegisterValueChange @ 0x1400059DC
 * Callers:
 *     HwDebugUpdateRegister @ 0x14000CBA8 (HwDebugUpdateRegister.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTraceRegisterValueChange(__int64 a1)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp-28h]
  __int64 v4; // [rsp+48h] [rbp-20h]
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = a1;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_HARDWARE_DEBUG_REGISTER_VALUE_CHANGE);
  if ( result )
  {
    UserData.Ptr = (unsigned __int64)&v5;
    *(_QWORD *)&UserData.Size = 8LL;
    v3 = v5 + 16;
    v4 = 8LL;
    return EtwWrite(
             (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
             &PPM_ETW_HARDWARE_DEBUG_REGISTER_VALUE_CHANGE,
             0LL,
             (ULONG)2,
             &UserData);
  }
  return result;
}
