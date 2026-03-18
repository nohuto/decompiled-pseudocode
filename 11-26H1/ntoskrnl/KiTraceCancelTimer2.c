/*
 * XREFs of KiTraceCancelTimer2 @ 0x1403A9BE0
 * Callers:
 *     KiTraceSetTimer2 @ 0x1403A9A14 (KiTraceSetTimer2.c)
 *     KeDisableTimer2 @ 0x1403AA104 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall KiTraceCancelTimer2(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v4[2]; // [rsp+38h] [rbp-20h] BYREF

  v4[1] = 8LL;
  v3 = 0x7E35C6C7F3DD7277LL
     * (KiWaitNever ^ __ROR8__(
                        a2 ^ _byteswap_uint64((__int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ a1),
                        KiWaitNever));
  v4[0] = &v3;
  return EtwTraceKernelEvent((int)v4, 1, 0x40020000u, 3946, 1538);
}
