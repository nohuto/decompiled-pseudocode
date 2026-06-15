/*
 * XREFs of ??$?0PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@?$__compressed_pair@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@$$QEAPEAUtWAVEFORMATEX@@$$QEAU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@Z @ 0x1800AA8A0
 * Callers:
 *     ??0?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@QEAA@$$QEAV01@@Z @ 0x1800AA874 (--0-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U-$default_delete@$$BY0A@UEn.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__compressed_pair<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::__compressed_pair<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = *a2;
  return a1;
}
