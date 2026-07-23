/*
 * XREFs of PnpTraceDriverBlocked @ 0x1407B4B38
 * Callers:
 *     PiIsDriverBlocked @ 0x140A3814C (PiIsDriverBlocked.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PnpTraceDriverBlocked()
{
  const WCHAR *v0; // r8
  int v1; // r9d
  __int64 v2; // r11
  int v3; // r10d
  int v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+34h] [rbp-35h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-9h]
  __int64 v9; // [rsp+68h] [rbp-1h]
  _BYTE v10[16]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v11; // [rsp+80h] [rbp+17h]
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  int *v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh]
  int *v15; // [rsp+A0h] [rbp+37h]
  __int64 v16; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_140E06E48 > 5 && tlgKeywordOn((__int64)&dword_140E06E48, 0x400000000000LL) )
  {
    v6 = 2048LL;
    v8 = &v6;
    v9 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v10, v0);
    v5 = v1;
    v13 = &v4;
    v11 = v2;
    v15 = &v5;
    v12 = 16LL;
    v4 = v3;
    v14 = 4LL;
    v16 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06E48, (unsigned __int8 *)byte_1400485C9, 0LL, 0LL, 7u, &v7);
  }
}
