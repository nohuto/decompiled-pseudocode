/*
 * XREFs of ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x1800812C0
 * Callers:
 *     _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x180037B94 (_lambda_0b797c3ec2b40741812a9b93d57ea05e_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180013A08 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18005E468 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800AD434 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1801586A0 (-find@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$u.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AtmosCheck::CheckInstalledAppServicesAvailable(AtmosCheck *this)
{
  char v2; // di
  __int64 i; // rbx
  char *v4; // rdx
  _WORD *v5; // rdx
  __int64 v6; // rdx
  _BYTE *v7; // r8
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h]
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  char *v12[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-18h]

  v2 = 1;
  v9 = 0LL;
  v10 = 0LL;
  if ( (int)AtmosCheck::GetCurrentEndpointsUnderLock(this, &v9) < 0 )
  {
    v4 = (char *)*((_QWORD *)&v9 + 1);
  }
  else
  {
    for ( i = v9; ; i += 32LL )
    {
      v4 = (char *)*((_QWORD *)&v9 + 1);
      if ( i == *((_QWORD *)&v9 + 1) )
        break;
      v5 = (_WORD *)i;
      if ( *(_QWORD *)(i + 24) > 7uLL )
        v5 = *(_WORD **)i;
      std::wstring::wstring(v12, v5);
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::find(
        (char *)this + 664,
        &v11,
        v12);
      if ( v13 > 7 )
        std::_Deallocate<16>(v12[0], (struct std::nothrow_t *)(2 * v13 + 2));
      if ( v2 && v11 != *((_QWORD *)this + 84) )
      {
        v6 = 0LL;
        v7 = (char *)this + 272;
        while ( v6 < 224 )
        {
          if ( *v7 && *(int *)(v6 + *(_QWORD *)(v11 + 48) + 8) < 0 )
          {
            v2 = 0;
            break;
          }
          v7 += 56;
          v6 += 32LL;
        }
      }
    }
  }
  if ( (_QWORD)v9 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>((char *)v9, v4);
    std::_Deallocate<16>((void *)v9, (struct std::nothrow_t *)((v10 - v9) & 0xFFFFFFFFFFFFFFE0uLL));
  }
  return v2;
}
