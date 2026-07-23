/*
 * XREFs of EtwTraceTimeZoneBiasChange @ 0x14082DE60
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall EtwTraceTimeZoneBiasChange(int a1, int a2)
{
  _UNKNOWN **v2; // rax
  int v3; // r8d
  int v4; // r9d
  int v6; // [rsp+38h] [rbp-29h] BYREF
  int v7; // [rsp+3Ch] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-21h] BYREF
  int *v9; // [rsp+50h] [rbp-11h]
  __int64 v10; // [rsp+58h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+68h] [rbp+7h] BYREF
  int *v12; // [rsp+88h] [rbp+27h]
  __int64 v13; // [rsp+90h] [rbp+2Fh]
  int *v14; // [rsp+98h] [rbp+37h]
  __int64 v15; // [rsp+A0h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  int v17; // [rsp+C8h] [rbp+67h] BYREF
  int v18; // [rsp+D0h] [rbp+6Fh] BYREF

  v2 = &retaddr;
  v18 = a2;
  v17 = a1;
  if ( (unsigned int)dword_140E08F78 > 5 )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E08F78, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v6 = v4;
      v12 = &v6;
      v7 = v3;
      v14 = &v7;
      v13 = 4LL;
      v15 = 4LL;
      LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140E08F78,
                     (unsigned __int8 *)byte_140054988,
                     0LL,
                     0LL,
                     4u,
                     &v11);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v17;
    v10 = 4LL;
    v9 = &v18;
    LOBYTE(v2) = EtwWrite(EtwKernelProvRegHandle, &KernelTimeZoneBiasChange, 0LL, 2u, &UserData);
  }
  return (char)v2;
}
