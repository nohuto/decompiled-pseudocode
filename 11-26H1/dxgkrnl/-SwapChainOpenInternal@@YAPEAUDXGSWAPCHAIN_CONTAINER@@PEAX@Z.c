/*
 * XREFs of ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x14036B374
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x14036AF68 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x14041AA8C (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct DXGSWAPCHAIN_CONTAINER *__fastcall SwapChainOpenInternal(void *a1)
{
  NTSTATUS v2; // eax
  struct DXGSWAPCHAIN_CONTAINER *result; // rax
  PVOID v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v2 = ObReferenceObjectByHandle(a1, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v4, 0LL);
  if ( v2 >= 0 )
    return (struct DXGSWAPCHAIN_CONTAINER *)v4;
  WdLogSingleEntry2(3LL, a1, v2);
  result = 0LL;
  WdLogGlobalForLineNumber = 1695;
  return result;
}
