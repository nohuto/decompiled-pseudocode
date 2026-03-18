/*
 * XREFs of TtmiLogSessionWorkerPass @ 0x14075EBD8
 * Callers:
 *     TtmpSessionWorker @ 0x14075B340 (TtmpSessionWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void TtmiLogSessionWorkerPass()
{
  int v0; // r8d
  int v1; // r9d
  int v2; // r10d
  int v3; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+34h] [rbp-15h] BYREF
  int v5; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-9h] BYREF
  int *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  int *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140FD78E8 > 5 && tlgKeywordOn((__int64)&dword_140FD78E8, 1LL) )
  {
    v4 = v1;
    v7 = &v3;
    v5 = v0;
    v9 = &v4;
    v3 = v2;
    v11 = &v5;
    v8 = 4LL;
    v10 = 4LL;
    v12 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD78E8, (unsigned __int8 *)&word_14004F7BE, 0LL, 0LL, 5u, &v6);
  }
}
