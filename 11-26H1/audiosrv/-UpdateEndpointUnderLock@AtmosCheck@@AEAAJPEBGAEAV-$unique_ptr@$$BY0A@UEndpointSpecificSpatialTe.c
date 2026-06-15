/*
 * XREFs of ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x180037D18
 * Callers:
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x1801569BC (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800395E0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1801586A0 (-find@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$u.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::UpdateEndpointUnderLock(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v12; // [rsp+30h] [rbp-68h] BYREF
  __int128 v13; // [rsp+40h] [rbp-58h]

  for ( i = 0LL; i < 224; i += 32LL )
  {
    v7 = *a3;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    v11[1] = a1 + 56;
    v12 = 0LL;
    v13 = 0LL;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(a2 + 2 * v8) );
    std::wstring::_Construct<1,unsigned short const *>(&v12, a2);
    std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::find(
      a1 + 664,
      v11,
      &v12);
    if ( *((_QWORD *)&v13 + 1) > 7uLL )
      std::_Deallocate<16>(v12, 2LL * *((_QWORD *)&v13 + 1) + 2);
    v9 = v11[0];
    if ( v11[0] != *(_QWORD *)(a1 + 672) )
    {
      *(_BYTE *)(i + *(_QWORD *)(v11[0] + 48LL)) = *(_BYTE *)(i + v7);
      *(_BYTE *)(i + *(_QWORD *)(v9 + 48) + 1) = *(_BYTE *)(i + v7 + 1);
      *(_DWORD *)(i + *(_QWORD *)(v9 + 48) + 4) = *(_DWORD *)(i + v7 + 4);
      *(_DWORD *)(i + *(_QWORD *)(v9 + 48) + 8) = *(_DWORD *)(i + v7 + 8);
      *(_QWORD *)(i + *(_QWORD *)(v9 + 48) + 16) = *(_QWORD *)(i + v7 + 16);
    }
    if ( a1 != -56 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  }
  return 0LL;
}
