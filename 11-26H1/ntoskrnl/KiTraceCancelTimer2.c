/*
 * XREFs of KiTraceCancelTimer2 @ 0x1403B37F0
 * Callers:
 *     KiTraceSetTimer2 @ 0x1403B3624 (KiTraceSetTimer2.c)
 *     KeDisableTimer2 @ 0x1403B3D14 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiTraceCancelTimer2(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v4[2]; // [rsp+38h] [rbp-20h] BYREF

  v4[1] = 8LL;
  v3 = 0x7E35C6C7F3DD7277LL
     * (KiWaitNever ^ __ROR8__(
                        a2 ^ _byteswap_uint64((__int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ a1),
                        KiWaitNever));
  v4[0] = &v3;
  return EtwTraceKernelEvent((int)v4, 1, 0x40020000u, 3946, 1538);
}
