/*
 * XREFs of RtlVirtualUnwind2 @ 0x18004AE10
 * Callers:
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x18004C680 (RtlDispatchException.c)
 * Callees:
 *     RtlVirtualUnwind3 @ 0x18014CC58 (RtlVirtualUnwind3.c)
 */

__int64 __fastcall RtlVirtualUnwind2(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  return RtlVirtualUnwind3(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
