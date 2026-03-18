/*
 * XREFs of ?IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z @ 0x1401EEE30
 * Callers:
 *     InkProcessorIsInkDevice @ 0x1401EED90 (InkProcessorIsInkDevice.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EEF70 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall InkDeviceParser::IsInkDevice(
        __int16 a1,
        __int16 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  return a1 == -241 && a2 == 256 && (!a3 || *a3 == 1118) && (!a4 || *a4 == 85);
}
