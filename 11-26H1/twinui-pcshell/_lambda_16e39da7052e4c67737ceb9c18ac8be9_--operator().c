/*
 * XREFs of _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x180179994
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::Run @ 0x180179970 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___--.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x18017A000 (-GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_D.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18017A198 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@Q.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, __int64 *); // rdi
  int v4; // eax
  int v5; // eax
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64 *); // rdi
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int128 v15; // xmm6
  __int64 v16; // xmm7_8
  int v17; // r15d
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  WindowingEnvironmentConfig *v22; // rcx
  int v23; // edx
  unsigned int v24; // r8d
  int v25; // eax
  int v26; // eax
  const char *v27; // r9
  _QWORD *v28; // rbx
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rax
  __int64 result; // rax
  char v34; // r9
  __int64 *v35; // rax
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(__int64, HSTRING, _QWORD, _QWORD); // r14
  unsigned __int64 v38; // rdi
  unsigned int v39; // eax
  UINT32 v40; // edx
  HRESULT v41; // eax
  int v42; // edx
  unsigned int v43; // r8d
  int v44; // eax
  __int64 v45; // rdi
  __int64 (__fastcall *v46)(__int64, _QWORD, __int64 *); // r14
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rax
  int v50; // [rsp+20h] [rbp-268h]
  unsigned int v51; // [rsp+30h] [rbp-258h] BYREF
  __int64 v52; // [rsp+38h] [rbp-250h] BYREF
  unsigned int v53; // [rsp+40h] [rbp-248h] BYREF
  __int64 v54; // [rsp+48h] [rbp-240h] BYREF
  HMONITOR v55[2]; // [rsp+50h] [rbp-238h] BYREF
  __int128 v56; // [rsp+60h] [rbp-228h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-218h] BYREF
  HSTRING string; // [rsp+88h] [rbp-200h] BYREF
  DISPLAYCONFIG_TARGET_DEVICE_NAME v59; // [rsp+90h] [rbp-1F8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  try
  {
    v52 = 0LL;
    v54 = 0LL;
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 80) + 32LL))(*(_QWORD *)(*a1 + 80));
    v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL);
    v54 = 0LL;
    v4 = v3(v2, &v54);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBB,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v4,
        v50);
    v51 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)a1[1] + 24LL))(*(_QWORD *)a1[1], &v51);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBE,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v5,
        v50);
    v6 = *a1;
    v7 = *(_QWORD *)(*a1 + 104);
    v8 = *(_QWORD *)(v7 + 8);
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[12] = 0;
    v9 = v7;
    while ( !*(_BYTE *)(v8 + 25) )
    {
      if ( *(_DWORD *)(v8 + 28) < v51 )
      {
        v34 = 1;
      }
      else
      {
        v34 = 0;
        v9 = v8;
      }
      v35 = (__int64 *)(v8 + 16);
      if ( !v34 )
        v35 = (__int64 *)v8;
      v8 = *v35;
    }
    if ( v9 == v7 || *(_BYTE *)(v9 + 25) || v51 < *(_DWORD *)(v9 + 28) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 80) + 40LL))(*(_QWORD *)(v6 + 80), v51);
      v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 48LL);
      v12 = v52;
      v52 = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v13 = v11(v10, &v52);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC3,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v13,
          v50);
      v53 = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v52 + 64LL))(v52, &v53);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC6,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v14,
          v50);
      hstringHeader.Reserved.Reserved1 = (PVOID)__PAIR64__(v51, v53);
      *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)a1[2];
      LOBYTE(string) = *(_DWORD *)a1[3] != 0;
      v15 = *(_OWORD *)&hstringHeader.Reserved.Reserved1;
      v16 = *(_OWORD *)&_mm_unpackhi_pd(
                          *(__m128d *)&hstringHeader.Reserved.Reserved2[8],
                          *(__m128d *)&hstringHeader.Reserved.Reserved2[8]);
      v17 = (int)string;
    }
    else
    {
      v15 = *(_OWORD *)(v9 + 32);
      *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v15;
      v16 = *(_QWORD *)(v9 + 48);
      v17 = *(_DWORD *)(v9 + 56);
      v45 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 80) + 40LL))(*(_QWORD *)(v6 + 80));
      v46 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v45 + 56LL);
      v47 = v52;
      v52 = 0LL;
      if ( v47 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      v48 = v46(v45, LODWORD(hstringHeader.Reserved.Reserved1), &v52);
      if ( v48 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xCD,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v48,
          v50);
      v49 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Extract(
              *a1 + 104,
              v9);
      std::_Deallocate<16>(v49, 64LL);
    }
    v56 = *(_OWORD *)a1[4];
    v18 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v52 + 104LL))(v52, &v56);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD1,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v18,
        v50);
    LOBYTE(v19) = *(_DWORD *)a1[3] != 0;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v52 + 112LL))(v52, v19);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD2,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v20,
        v50);
    v55[0] = 0LL;
    v21 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR *))(**(_QWORD **)a1[1] + 40LL))(*(_QWORD *)a1[1], v55);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD5,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v21,
        v50);
    memset_0(&v59, 0, sizeof(v59));
    if ( WindowingEnvironmentConfig::GetTargetDeviceName(v22, v55[0], &v59) >= 0 )
    {
      v36 = v52;
      v37 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, _QWORD))(*(_QWORD *)v52 + 168LL);
      v38 = -1LL;
      do
        ++v38;
      while ( v59.monitorDevicePath[v38] );
      if ( v38 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v23, v24);
        __debugbreak();
      }
      v39 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v38, v23, v24);
      v40 = v39 - 1;
      if ( (unsigned int)v38 < v39 )
        v40 = v38;
      v41 = WindowsCreateStringReference(v59.monitorDevicePath, v40, &hstringHeader, &string);
      if ( v41 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v41, v42, v43);
        __debugbreak();
      }
      v44 = v37(v36, string, 0LL, 0LL);
      if ( v44 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xDB,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v44,
          v50);
    }
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 64) + 96LL))(*(_QWORD *)(*a1 + 64), v52);
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xDE,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v25,
        v50);
    v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 56LL))(v54);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE0,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v26,
        v50);
    v28 = (_QWORD *)(*a1 + 104);
    v29 = (_QWORD *)*v28;
    v30 = *(_QWORD **)(*v28 + 8LL);
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = (unsigned __int64)v30;
    v31 = v29;
    while ( !*((_BYTE *)v30 + 25) )
    {
      hstringHeader.Reserved.Reserved1 = v30;
      if ( *((_DWORD *)v30 + 7) < v51 )
      {
        *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = 0;
        v30 += 2;
      }
      else
      {
        *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = 1;
        v31 = v30;
      }
      v30 = (_QWORD *)*v30;
    }
    if ( *((_BYTE *)v31 + 25) || v51 < *((_DWORD *)v31 + 7) )
    {
      if ( v28[1] == 0x3FFFFFFFFFFFFFFLL )
        std::_Throw_tree_length_error();
      v56 = (unsigned __int64)v28;
      v32 = std::_Allocate<16,std::_Default_allocate_traits>(64LL);
      *(_DWORD *)(v32 + 28) = v51;
      *(_OWORD *)(v32 + 32) = v15;
      *(_QWORD *)(v32 + 48) = v16;
      *(_DWORD *)(v32 + 56) = v17;
      *(_QWORD *)v32 = v29;
      *(_QWORD *)(v32 + 8) = v29;
      *(_QWORD *)(v32 + 16) = v29;
      *(_WORD *)(v32 + 24) = 0;
      v56 = *(_OWORD *)&hstringHeader.Reserved.Reserved1;
      std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
        (__int64)v28,
        (__int64)&v56,
        v32);
    }
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE4,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v27);
  }
  return result;
}
