/*
 * XREFs of MiDoesImageContainFunctionOverrideFixups @ 0x140A08E48
 * Callers:
 *     PspLocateSystemDll @ 0x1407F3EEC (PspLocateSystemDll.c)
 *     MiInitializeImageMapParameters @ 0x14099E4F4 (MiInitializeImageMapParameters.c)
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 *     MiMapAllImageScpPages @ 0x140A08CA0 (MiMapAllImageScpPages.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x14048F4E4 (MiGetControlAreaLoadConfig.c)
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
