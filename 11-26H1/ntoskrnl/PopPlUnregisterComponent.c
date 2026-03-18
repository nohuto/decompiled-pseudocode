/*
 * XREFs of PopPlUnregisterComponent @ 0x140612ECC
 * Callers:
 *     PopPlUnregisterDevice @ 0x140510374 (PopPlUnregisterDevice.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopPlUnregisterComponent(__int64 a1)
{
  NTSTATUS result; // eax
  __int16 v3; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-58h] BYREF
  __int16 *v5; // [rsp+60h] [rbp-38h]
  __int64 v6; // [rsp+68h] [rbp-30h]
  __int64 v7; // [rsp+70h] [rbp-28h]
  __int64 v8; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_140E07598 > 5 )
  {
    v7 = a1;
    v3 = 1;
    v6 = 2LL;
    v5 = &v3;
    v8 = 16LL;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07598,
               (unsigned __int8 *)&word_1400503AE,
               0LL,
               0LL,
               4u,
               &v4);
  }
  *(_QWORD *)(a1 + 432) = 0LL;
  return result;
}
