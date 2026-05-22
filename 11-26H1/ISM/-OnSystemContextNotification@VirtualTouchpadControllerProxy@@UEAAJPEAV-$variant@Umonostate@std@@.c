/*
 * XREFs of ?OnSystemContextNotification@VirtualTouchpadControllerProxy@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180138C10
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180137A44 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnSystemContextNotification(__int64 a1)
{
  VirtualTouchpadControllerProxy *v1; // rcx

  v1 = (VirtualTouchpadControllerProxy *)(a1 - 136);
  if ( *((_DWORD *)v1 + 62) )
    VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(v1);
  return 0LL;
}
