/*
 * XREFs of AMLIIsEqualHandle @ 0x140023D94
 * Callers:
 *     GetPciAddressWorker @ 0x140022E60 (GetPciAddressWorker.c)
 *     ACPIBuildDevicePowerNodes @ 0x14003666C (ACPIBuildDevicePowerNodes.c)
 *     ACPIEcStartDevice @ 0x14005FEB0 (ACPIEcStartDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsEqualHandle(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( a2 )
      return *a1 == *a2;
  }
  else if ( !a2 )
  {
    return 1;
  }
  return result;
}
