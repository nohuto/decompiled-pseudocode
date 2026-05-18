/*
 * XREFs of sub_1800184CC @ 0x1800184CC
 * Callers:
 *     sub_18001A000 @ 0x18001A000 (sub_18001A000.c)
 *     sub_1800D86A8 @ 0x1800D86A8 (sub_1800D86A8.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800184CC(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
