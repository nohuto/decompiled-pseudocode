/*
 * XREFs of MiDoesImageContainFunctionOverrideFixups @ 0x140962FC0
 * Callers:
 *     PspLocateSystemDll @ 0x1407EE38C (PspLocateSystemDll.c)
 *     MiMapAllImageScpPages @ 0x140962E18 (MiMapAllImageScpPages.c)
 *     MiInitializeImageMapParameters @ 0x1409CD514 (MiInitializeImageMapParameters.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x140495994 (MiGetControlAreaLoadConfig.c)
 */

bool __fastcall MiDoesImageContainFunctionOverrideFixups(__int64 a1)
{
  __int64 ControlAreaLoadConfig; // r8
  bool result; // al

  ControlAreaLoadConfig = MiGetControlAreaLoadConfig(a1);
  result = 0;
  if ( ControlAreaLoadConfig )
    return *(_QWORD *)(ControlAreaLoadConfig + 24) != 0LL;
  return result;
}
