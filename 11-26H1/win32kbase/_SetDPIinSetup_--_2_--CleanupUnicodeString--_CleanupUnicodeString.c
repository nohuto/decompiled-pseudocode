/*
 * XREFs of _SetDPIinSetup_::_2_::CleanupUnicodeString::_CleanupUnicodeString @ 0x1401C5C44
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14011F640 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDPIinSetup_::_2_::CleanupUnicodeString::_CleanupUnicodeString(struct _UNICODE_STRING **a1)
{
  struct _UNICODE_STRING *v1; // rcx

  v1 = *a1;
  if ( v1 )
  {
    if ( v1->Buffer )
      RtlFreeUnicodeString(v1);
  }
}
