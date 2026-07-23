/*
 * XREFs of KeRcuSynchronize @ 0x1407BD260
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1404D0428 (KeInitializeGate.c)
 *     KiRcuStartGracePeriod @ 0x140526914 (KiRcuStartGracePeriod.c)
 */

__int64 KeRcuSynchronize()
{
  __int128 v1; // [rsp+20h] [rbp-58h] BYREF
  __int64 v2; // [rsp+30h] [rbp-48h]
  PVOID *v3; // [rsp+38h] [rbp-40h] BYREF
  __int128 v4; // [rsp+40h] [rbp-38h]
  __int64 v5; // [rsp+50h] [rbp-28h]
  __int128 *v6; // [rsp+58h] [rbp-20h]
  __int64 v7; // [rsp+60h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  v7 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v6 = &v1;
  v5 = 6LL;
  KeInitializeGate((__int64)&v1, 0);
  KiRcuStartGracePeriod(&v3);
  return KeWaitForGate((__int64)&v1, 42LL);
}
