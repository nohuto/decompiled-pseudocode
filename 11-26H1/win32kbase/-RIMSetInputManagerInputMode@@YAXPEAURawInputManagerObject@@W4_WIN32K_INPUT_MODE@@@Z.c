/*
 * XREFs of ?RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z @ 0x14017B9D8
 * Callers:
 *     _lambda_94dd59a04c39bb1513797c78502b3509_::_lambda_invoker_cdecl_ @ 0x14017B9C0 (_lambda_94dd59a04c39bb1513797c78502b3509_--_lambda_invoker_cdecl_.c)
 *     rimDoSetInputModeWorkItem @ 0x1401BFFC0 (rimDoSetInputModeWorkItem.c)
 * Callees:
 *     RIMIsWakeCapableDevice @ 0x140095FA0 (RIMIsWakeCapableDevice.c)
 *     RIMSetDeviceInputMode @ 0x1401BC3F0 (RIMSetDeviceInputMode.c)
 */

void __fastcall RIMSetInputManagerInputMode(__int64 a1, int a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (*(_DWORD *)(i + 172) & 4) != 0 && a2 == 2 )
      RIMIsWakeCapableDevice(i);
    RIMSetDeviceInputMode((struct RIMDEV *)i);
  }
}
