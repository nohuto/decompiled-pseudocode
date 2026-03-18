/*
 * XREFs of VslFreeSecureHibernateResources @ 0x140703984
 * Callers:
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405B8408 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  VslpEnterIumSecureMode(2u, 0x26u, 0, (__int64)v1);
  return KeAllocateKernelHiberSwapShadowStacks(0);
}
