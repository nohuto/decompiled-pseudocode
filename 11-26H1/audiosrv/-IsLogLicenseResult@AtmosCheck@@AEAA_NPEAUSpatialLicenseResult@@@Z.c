/*
 * XREFs of ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x1801564B4
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180065228 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180013A08 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1801586A0 (-find@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$u.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AtmosCheck::IsLogLicenseResult(AtmosCheck *this, struct SpatialLicenseResult *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _DWORD *v5; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  void *v8[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v7[1] = v4;
  if ( *((_BYTE *)this + 217)
    || (std::wstring::wstring((char **)v8, L"LegacyDefaultEndpointKey"),
        std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::find(
          (char *)this + 664,
          v7,
          v8),
        std::wstring::~wstring(v8),
        v7[0] == *((_QWORD *)this + 84))
    || (v5 = *(_DWORD **)(v7[0] + 48LL), *(_DWORD *)a2 == v5[1])
    && *((_DWORD *)a2 + 1) == v5[9]
    && *((_DWORD *)a2 + 2) == v5[17]
    && *((_DWORD *)a2 + 3) == v5[25]
    && *((_DWORD *)a2 + 4) == v5[33]
    && *((_DWORD *)a2 + 5) == v5[41]
    && *((_DWORD *)a2 + 6) == v5[49] )
  {
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0;
  }
  else
  {
    if ( v4 )
      LeaveCriticalSection(v4);
    return 1;
  }
}
