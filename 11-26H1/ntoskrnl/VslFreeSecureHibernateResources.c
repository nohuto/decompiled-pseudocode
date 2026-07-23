/*
 * XREFs of VslFreeSecureHibernateResources @ 0x140794DF8
 * Callers:
 *     PopFreeHiberContext @ 0x140B1CE40 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405F2F8C (KeAllocateKernelHiberSwapShadowStacks.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  VslpEnterIumSecureMode(2u, 0x26u, 0, (__int64)v1);
  return KeAllocateKernelHiberSwapShadowStacks(0);
}
