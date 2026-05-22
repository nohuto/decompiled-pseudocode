/*
 * XREFs of ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x180075BF0
 * Callers:
 *     ?AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ @ 0x1800A9930 (-AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ.c)
 *     ?AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x180134B70 (-AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x180135B20 (-AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WEI@EAAKXZ @ 0x180135B30 (-AddRef@InputDelegationInputObjectProxy@@WEI@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x180137A10 (-AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x180137A30 (-AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x18015E0E0 (-AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputObserverManagerPrincipal::AddRef(BamoInputObserverManagerPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
