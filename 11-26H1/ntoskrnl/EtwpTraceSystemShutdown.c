/*
 * XREFs of EtwpTraceSystemShutdown @ 0x14082810C
 * Callers:
 *     EtwShutdown @ 0x140B362AC (EtwShutdown.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     KeQuerySystemTimePrecise @ 0x14021B070 (KeQuerySystemTimePrecise.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char EtwpTraceSystemShutdown()
{
  char result; // al
  int v1; // [rsp+30h] [rbp-29h] BYREF
  __int64 v2; // [rsp+38h] [rbp-21h] BYREF
  __int64 v3; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+60h] [rbp+7h] BYREF
  int *v6; // [rsp+80h] [rbp+27h]
  __int64 v7; // [rsp+88h] [rbp+2Fh]
  __int64 *v8; // [rsp+90h] [rbp+37h]
  __int64 v9; // [rsp+98h] [rbp+3Fh]

  v2 = 0LL;
  result = KeQuerySystemTimePrecise(&v2);
  if ( (unsigned int)dword_140E08F48 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E08F48, 0x400000000000LL);
    if ( result )
    {
      v1 = 2;
      v7 = 4LL;
      v6 = &v1;
      v3 = v2;
      v9 = 8LL;
      v8 = &v3;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140E08F48,
                 (unsigned __int8 *)byte_140054471,
                 0LL,
                 0LL,
                 4u,
                 &v5);
    }
  }
  if ( EtwpSecurityLock.MutantListHead.Blink )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (ULONGLONG)&v2;
    return EtwWrite((REGHANDLE)EtwpSecurityLock.MutantListHead.Blink, &KernelSystemStop, 0LL, 1u, &UserData);
  }
  return result;
}
