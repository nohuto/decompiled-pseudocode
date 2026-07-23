/*
 * XREFs of EtwpTraceSystemShutdown @ 0x14082E34C
 * Callers:
 *     EtwShutdown @ 0x140B384BC (EtwShutdown.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     KeQuerySystemTimePrecise @ 0x14021CA00 (KeQuerySystemTimePrecise.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  if ( (unsigned int)dword_140E08F78 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E08F78, 0x400000000000LL);
    if ( result )
    {
      v1 = 2;
      v7 = 4LL;
      v6 = &v1;
      v3 = v2;
      v9 = 8LL;
      v8 = &v3;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140E08F78,
                 (unsigned __int8 *)byte_1400554B5,
                 0LL,
                 0LL,
                 4u,
                 &v5);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (ULONGLONG)&v2;
    return EtwWrite(EtwKernelProvRegHandle, &KernelSystemStop, 0LL, 1u, &UserData);
  }
  return result;
}
