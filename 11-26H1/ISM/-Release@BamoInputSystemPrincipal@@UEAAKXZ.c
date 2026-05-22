/*
 * XREFs of ?Release@BamoInputSystemPrincipal@@UEAAKXZ @ 0x180075AE0
 * Callers:
 *     ?Release@BamoDockableDeviceStub@@W7EAAKXZ @ 0x1800AA530 (-Release@BamoDockableDeviceStub@@W7EAAKXZ.c)
 *     ?Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x180135660 (-Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?Release@GestureServices@@WDI@EAAKXZ @ 0x180136B20 (-Release@GestureServices@@WDI@EAAKXZ.c)
 *     ?Release@InputDelegationInputObjectProxy@@WEI@EAAKXZ @ 0x180136B30 (-Release@InputDelegationInputObjectProxy@@WEI@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WIA@EAAKXZ @ 0x180139120 (-Release@ShellGesturesClientProxy@@WIA@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WII@EAAKXZ @ 0x180139140 (-Release@ShellGesturesClientProxy@@WII@EAAKXZ.c)
 *     ?Release@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x18015E640 (-Release@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputSystemPrincipal::Release(BamoInputSystemPrincipal *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
