/*
 * XREFs of sub_1401929D8 @ 0x1401929D8
 * Callers:
 *     sub_1400D2464 @ 0x1400D2464 (sub_1400D2464.c)
 * Callees:
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400C93A0 @ 0x1400C93A0 (sub_1400C93A0.c)
 *     sub_1400CC090 @ 0x1400CC090 (sub_1400CC090.c)
 *     sub_1400D18F0 @ 0x1400D18F0 (sub_1400D18F0.c)
 *     sub_1400D7168 @ 0x1400D7168 (sub_1400D7168.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1401929D8(__int64 a1, IRP *a2)
{
  __int64 v2; // rax
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0LL;
  _InterlockedExchange((volatile __int32 *)(a1 + 84), 8);
  v2 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)v2 == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(v2 + 8) + 20LL) |= 2u;
    PoFxActivateComponent(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 8LL), 0LL, 1LL);
  }
  if ( (unsigned int)sub_1400C93A0() )
    sub_1400D18F0(a1);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0
    || (result = sub_140016AA8(*(_QWORD *)(a1 + 8), 4u, 0LL, 0LL, 0), result >= 0) )
  {
    if ( (unsigned int)sub_1400C93A0() )
      sub_1400CC090(a1);
    sub_1400D7168(a1, 1);
    if ( byte_140168DAA )
    {
      IoGetActivityIdIrp(a2, &v8);
      if ( (byte_1401694F2 & 0x20) != 0 )
      {
        LODWORD(v7) = a2->IoStatus.Status;
        sub_140052F3C(v6, &stru_140149FE8, &v8, a2, v7);
      }
    }
    a2->IoStatus.Status = 0;
    return sub_14001B0D0(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  }
  return result;
}
