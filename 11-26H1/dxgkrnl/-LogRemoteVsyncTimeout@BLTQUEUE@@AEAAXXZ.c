/*
 * XREFs of ?LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ @ 0x140283504
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140049164 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140057178 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall BLTQUEUE::LogRemoteVsyncTimeout(BLTQUEUE *this)
{
  unsigned int v1; // r9d
  __int64 v2; // [rsp+30h] [rbp-9h] BYREF
  __int64 v3; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v5; // [rsp+60h] [rbp+27h]
  __int64 v6; // [rsp+68h] [rbp+2Fh]
  __int64 *v7; // [rsp+70h] [rbp+37h]
  __int64 v8; // [rsp+78h] [rbp+3Fh]

  if ( (unsigned int)dword_1401665B8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1401665B8, 0x400000000800LL) )
    {
      v2 = 33556480LL;
      v7 = &v2;
      v3 = 1LL;
      v5 = &v3;
      v8 = 8LL;
      v6 = 8LL;
      tlgWriteAgg((__int64)&dword_1401665B8, (unsigned __int8 *)dword_140146888, 0LL, 4u, &v4);
      v1 = dword_1401665B8;
    }
    if ( v1 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1401665B8, 2048LL) )
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1401665B8, byte_1401468C8, 0LL, 0LL, 2u, &v4);
    }
  }
}
