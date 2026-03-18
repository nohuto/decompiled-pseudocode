/*
 * XREFs of KeSecureThread @ 0x1404F8EE8
 * Callers:
 *     PspCreateSecureThread @ 0x140B342F8 (PspCreateSecureThread.c)
 * Callees:
 *     VslCreateSecureThread @ 0x140B27928 (VslCreateSecureThread.c)
 */

__int64 __fastcall KeSecureThread(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return VslCreateSecureThread(*(_QWORD *)(a1 + 544), a1, a2, a3, a4, a5, a1 + 796);
}
