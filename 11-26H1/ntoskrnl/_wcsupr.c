/*
 * XREFs of _wcsupr @ 0x140536890
 * Callers:
 *     PfTFiNotifyVolumeCreateCallback @ 0x14048B160 (PfTFiNotifyVolumeCreateCallback.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x14048B2E0 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfSnParametersRead @ 0x1407C7510 (PfSnParametersRead.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140894258 (BiUpdateObjectReferenceInEfiEntry.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409D4220 (BiGetObjectReferenceFromEfiEntry.c)
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
