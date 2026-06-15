/*
 * XREFs of ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x180156860
 * Callers:
 *     _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x180037B94 (_lambda_0b797c3ec2b40741812a9b93d57ea05e_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18005E468 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800AD434 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x1801569BC (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckForAllEndpoints(AtmosCheck *this, bool *a2)
{
  bool v4; // di
  int CurrentEndpointsUnderLock; // eax
  unsigned int v6; // ebx
  __int64 i; // rbx
  char *v9; // rdx
  const unsigned __int16 *v10; // rdx
  int v11; // eax
  unsigned int v12; // esi
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  bool v16; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0;
  v13 = 0LL;
  v14 = 0LL;
  CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64)&v13);
  v6 = CurrentEndpointsUnderLock;
  if ( CurrentEndpointsUnderLock >= 0 )
  {
    for ( i = v13; ; i += 32LL )
    {
      v9 = (char *)*((_QWORD *)&v13 + 1);
      if ( i == *((_QWORD *)&v13 + 1) )
        break;
      v16 = 0;
      v10 = (const unsigned __int16 *)i;
      if ( *(_QWORD *)(i + 24) > 7uLL )
        v10 = *(const unsigned __int16 **)i;
      v11 = AtmosCheck::PerformLicenseCheckForEndpoint(this, v10, &v16);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8B9,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v11);
        if ( (_QWORD)v13 )
        {
          std::_Destroy_range<std::allocator<std::wstring>>((char *)v13, *((char **)&v13 + 1));
          std::_Deallocate<16>((void *)v13, (struct std::nothrow_t *)((v14 - v13) & 0xFFFFFFFFFFFFFFE0uLL));
        }
        return v12;
      }
      if ( v4 || v16 )
        v4 = 1;
    }
    if ( a2 )
      *a2 = v4;
    if ( (_QWORD)v13 )
    {
      std::_Destroy_range<std::allocator<std::wstring>>((char *)v13, v9);
      std::_Deallocate<16>((void *)v13, (struct std::nothrow_t *)((v14 - v13) & 0xFFFFFFFFFFFFFFE0uLL));
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B3,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)CurrentEndpointsUnderLock);
    if ( (_QWORD)v13 )
    {
      std::_Destroy_range<std::allocator<std::wstring>>((char *)v13, *((char **)&v13 + 1));
      std::_Deallocate<16>((void *)v13, (struct std::nothrow_t *)((v14 - v13) & 0xFFFFFFFFFFFFFFE0uLL));
    }
    return v6;
  }
}
