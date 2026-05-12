/*
 * XREFs of sub_1401B1224 @ 0x1401B1224
 * Callers:
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 * Callees:
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1401B1224(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 92) || *(_DWORD *)(a1 + 100) || *(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (*(_BYTE *)(a1 + 109) & 8) != 0 )
    *(_DWORD *)(a2 + 56) |= 4u;
  if ( byte_140168DAA )
  {
    v7 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1401694F2 & 0x20) != 0 )
    {
      v6 = *(_DWORD *)(a2 + 48);
      sub_140052F3C(v5, &stru_140149FE8, &v7, a2, v6);
    }
  }
  return sub_14001B0D0(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}
