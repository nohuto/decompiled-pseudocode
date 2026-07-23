/*
 * XREFs of EtwTraceLeapSecondDataUpdate @ 0x14082DBC8
 * Callers:
 *     ExpReadLeapSecondData @ 0x14083C19C (ExpReadLeapSecondData.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall EtwTraceLeapSecondDataUpdate(int a1, int a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  int v5; // r8d
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  int v10; // [rsp+38h] [rbp-79h] BYREF
  int v11; // [rsp+3Ch] [rbp-75h] BYREF
  int v12; // [rsp+40h] [rbp-71h] BYREF
  int v13; // [rsp+44h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-69h] BYREF
  int *v15; // [rsp+58h] [rbp-59h]
  __int64 v16; // [rsp+60h] [rbp-51h]
  int *v17; // [rsp+68h] [rbp-49h]
  __int64 v18; // [rsp+70h] [rbp-41h]
  int *v19; // [rsp+78h] [rbp-39h]
  __int64 v20; // [rsp+80h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+88h] [rbp-29h] BYREF
  int *v22; // [rsp+A8h] [rbp-9h]
  __int64 v23; // [rsp+B0h] [rbp-1h]
  int *v24; // [rsp+B8h] [rbp+7h]
  __int64 v25; // [rsp+C0h] [rbp+Fh]
  int *v26; // [rsp+C8h] [rbp+17h]
  __int64 v27; // [rsp+D0h] [rbp+1Fh]
  int *v28; // [rsp+D8h] [rbp+27h]
  __int64 v29; // [rsp+E0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF
  int v31; // [rsp+118h] [rbp+67h] BYREF
  int v32; // [rsp+120h] [rbp+6Fh] BYREF
  int v33; // [rsp+128h] [rbp+77h] BYREF
  int v34; // [rsp+130h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v34 = a4;
  v33 = a3;
  v32 = a2;
  v31 = a1;
  if ( (unsigned int)dword_140E08F78 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140E08F78, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v12 = v5;
      v22 = &v10;
      v13 = v6;
      v24 = &v11;
      v10 = v8;
      v26 = &v12;
      v23 = 4LL;
      v28 = &v13;
      v11 = v7;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140E08F78,
                     (unsigned __int8 *)&word_1400549F6,
                     0LL,
                     0LL,
                     6u,
                     &v21);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v31;
    v16 = 4LL;
    v15 = &v32;
    v18 = 4LL;
    v17 = &v33;
    v20 = 4LL;
    v19 = &v34;
    LOBYTE(v4) = EtwWrite(EtwKernelProvRegHandle, &KernelLeapSecondDataUpdate, 0LL, 4u, &UserData);
  }
  return (char)v4;
}
