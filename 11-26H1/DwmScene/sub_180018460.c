/*
 * XREFs of sub_180018460 @ 0x180018460
 * Callers:
 *     sub_180016118 @ 0x180016118 (sub_180016118.c)
 *     sub_18001F180 @ 0x18001F180 (sub_18001F180.c)
 *     sub_18001F264 @ 0x18001F264 (sub_18001F264.c)
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 *     sub_18003E3B0 @ 0x18003E3B0 (sub_18003E3B0.c)
 *     sub_180089CE8 @ 0x180089CE8 (sub_180089CE8.c)
 *     unknown_libname_13 @ 0x1800D8C67 (unknown_libname_13.c)
 *     sub_1800D98C5 @ 0x1800D98C5 (sub_1800D98C5.c)
 *     sub_1800D9B96 @ 0x1800D9B96 (sub_1800D9B96.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180018460(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
