/*
 * XREFs of ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1400EC23C
 * Callers:
 *     ?PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z @ 0x1400EC6D4 (-PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1401AF324 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 * Callees:
 *     RIMRegQueryDWordFromKey @ 0x1400EC2B8 (RIMRegQueryDWordFromKey.c)
 */

bool __fastcall ReadDevicePropertyFromRegistry(const unsigned __int16 *a1, void *a2, void *a3, int a4, int *a5)
{
  bool v6; // bl
  bool result; // al

  v6 = 0;
  if ( (unsigned int)RIMRegQueryDWordFromKey(a2) || (unsigned int)RIMRegQueryDWordFromKey(a3) )
    v6 = 1;
  result = v6;
  *a5 = a4;
  return result;
}
