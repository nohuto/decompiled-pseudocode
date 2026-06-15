/*
 * XREFs of ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18007010C
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180037A44 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180013A08 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1801586A0 (-find@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$u.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::UpdateEndpointUnderLock(
        AtmosCheck *this,
        unsigned __int16 *a2,
        int a3,
        const struct AtmosCheck::EndpointSpecificSpatialTechInfo *a4)
{
  __int64 v5; // r14
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  _QWORD v12[2]; // [rsp+20h] [rbp-68h] BYREF
  char *v13[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v5 = a3;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v12[1] = v8;
  std::wstring::wstring(v13, a2);
  std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::find(
    (char *)this + 664,
    v12,
    v13);
  if ( v14 > 7 )
    std::_Deallocate<16>(v13[0], (struct std::nothrow_t *)(2 * v14 + 2));
  v9 = v12[0];
  if ( v12[0] != *((_QWORD *)this + 84) )
  {
    v10 = 32 * v5;
    *(_BYTE *)(v10 + *(_QWORD *)(v12[0] + 48LL)) = *((_BYTE *)a4 + 32 * v5);
    *(_BYTE *)(v10 + *(_QWORD *)(v9 + 48) + 1) = *((_BYTE *)a4 + 32 * v5 + 1);
    *(_DWORD *)(v10 + *(_QWORD *)(v9 + 48) + 4) = *((_DWORD *)a4 + 8 * v5 + 1);
    *(_DWORD *)(v10 + *(_QWORD *)(v9 + 48) + 8) = *((_DWORD *)a4 + 8 * v5 + 2);
    *(_QWORD *)(v10 + *(_QWORD *)(v9 + 48) + 16) = *((_QWORD *)a4 + 4 * v5 + 2);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
