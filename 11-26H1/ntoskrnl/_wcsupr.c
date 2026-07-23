/*
 * XREFs of _wcsupr @ 0x140538D10
 * Callers:
 *     PfTFiNotifyVolumeCreateCallback @ 0x140484CA0 (PfTFiNotifyVolumeCreateCallback.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x140484E20 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfSnParametersRead @ 0x1407CA570 (PfSnParametersRead.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14089A658 (BiUpdateObjectReferenceInEfiEntry.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409A5200 (BiGetObjectReferenceFromEfiEntry.c)
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
