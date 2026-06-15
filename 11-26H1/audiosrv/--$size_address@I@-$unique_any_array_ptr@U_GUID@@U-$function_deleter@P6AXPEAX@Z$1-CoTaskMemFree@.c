/*
 * XREFs of ??$size_address@I@?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA?AU?$size_address_ptr@I@01@XZ @ 0x180154644
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x18009DEA0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800AF1F4 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ??$get_sr_entity_propset@UIApplicationExtension@StateRepository@Internal@Windows@@@wil@@YAJPEAUIApplicationExtension@StateRepository@Internal@Windows@@PEAPEAUIPropertySet@Collections@Foundation@4@@Z @ 0x180154570 (--$get_sr_entity_propset@UIApplicationExtension@StateRepository@Internal@Windows@@@wil@@YAJPEAUI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::size_address<unsigned int>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = a1;
  result = a2;
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 12) = 1;
  return result;
}
