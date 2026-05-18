/*
 * XREFs of sub_18001D3F0 @ 0x18001D3F0
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_180024D88 @ 0x180024D88 (sub_180024D88.c)
 *     sub_180025208 @ 0x180025208 (sub_180025208.c)
 *     sub_180089B38 @ 0x180089B38 (sub_180089B38.c)
 *     sub_18008A170 @ 0x18008A170 (sub_18008A170.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001D3F0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
