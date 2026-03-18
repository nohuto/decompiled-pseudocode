/*
 * XREFs of _wcsupr @ 0x1404FBF50
 * Callers:
 *     PfTFiNotifyFileStreamCreateCallback @ 0x140470850 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyVolumeCreateCallback @ 0x1404A9460 (PfTFiNotifyVolumeCreateCallback.c)
 *     PfSnParametersRead @ 0x14073BCB0 (PfSnParametersRead.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140805C44 (BiUpdateObjectReferenceInEfiEntry.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140A27C2C (BiGetObjectReferenceFromEfiEntry.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsupr(wchar_t *String)
{
  wchar_t v1; // dx
  wchar_t *v2; // r8

  v1 = *String;
  v2 = String;
  while ( v1 )
  {
    if ( (unsigned __int16)(v1 - 97) <= 0x19u )
      *v2 = v1 - 32;
    v1 = *++v2;
  }
  return String;
}
