/*
 * XREFs of sub_18000C158 @ 0x18000C158
 * Callers:
 *     sub_18000BDFC @ 0x18000BDFC (sub_18000BDFC.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000CCA0 (-__uncaught_exception@@YA_NXZ.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18000C158(
        __int64 a1,
        int a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, _QWORD, __int64),
        unsigned int a5,
        __int64 a6)
{
  int v10; // eax

  LOBYTE(v10) = __uncaught_exception();
  if ( !v10 && a2 == 1 )
    a4(a1, 0LL, a3);
  return o__seh_filter_dll(a5, a6);
}
