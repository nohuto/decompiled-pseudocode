/*
 * XREFs of sub_140191538 @ 0x140191538
 * Callers:
 *     sub_1400D2464 @ 0x1400D2464 (sub_1400D2464.c)
 * Callees:
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140191538(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0LL;
  if ( *(_DWORD *)(a1 + 88) || *(_DWORD *)(a1 + 96) || *(_DWORD *)(a1 + 92) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( byte_140168DAA )
  {
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1401694F2 & 0x20) != 0 )
    {
      v6 = *(_DWORD *)(a2 + 48);
      sub_140052F3C(v4, &stru_140149FE8, &v7, a2, v6);
    }
  }
  return sub_14001B0D0(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}
