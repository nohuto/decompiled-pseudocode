/*
 * XREFs of sub_14005D584 @ 0x14005D584
 * Callers:
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 *     sub_1400D2464 @ 0x1400D2464 (sub_1400D2464.c)
 * Callees:
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14005D584(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  NTSTATUS Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( byte_140168DAA )
  {
    v7 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1401694F2 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      sub_140052F3C(v4, &stru_140149FE8, &v7, a2, Status);
    }
  }
  return sub_14001B0D0(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
