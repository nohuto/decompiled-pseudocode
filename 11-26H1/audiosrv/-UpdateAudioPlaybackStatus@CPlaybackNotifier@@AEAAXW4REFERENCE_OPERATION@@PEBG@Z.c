/*
 * XREFs of ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x1800131F4
 * Callers:
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180011240 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ @ 0x180071B00 (-_Destroy@-$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x180013528 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180013B1C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     wmemcmp @ 0x18009DD6C (wmemcmp.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800A9EA0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800C2998 (-_Xlen_string@std@@YAXXZ.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800E8360 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800F98D0 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801006B0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18010E708 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus(CPlaybackNotifier *a1, int a2, _WORD *a3)
{
  __int64 *v6; // r14
  size_t v7; // rbx
  __int64 v8; // r15
  size_t v9; // rbx
  const char *v10; // r9
  __int64 inserted; // rbx
  __int64 v12; // rdi
  const wchar_t *v13; // rcx
  const wchar_t *v14; // rdx
  size_t v15; // rsi
  size_t v16; // r15
  size_t v17; // r8
  int v18; // eax
  const wchar_t *v19; // rdx
  size_t v20; // rdi
  const wchar_t *v21; // rcx
  size_t v22; // rsi
  size_t v23; // r8
  int v24; // eax
  int v25; // eax
  bool v26; // zf
  int v27; // eax
  size_t v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int128 v31; // [rsp+30h] [rbp-98h]
  __int128 v32; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v33[16]; // [rsp+60h] [rbp-68h] BYREF
  wchar_t *S2[2]; // [rsp+70h] [rbp-58h] BYREF
  size_t N; // [rsp+80h] [rbp-48h]
  unsigned __int64 v36; // [rsp+88h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v6 = (__int64 *)((char *)a1 + 80);
  *(_OWORD *)S2 = 0LL;
  N = 0LL;
  v36 = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  try
  {
    if ( v7 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    if ( v7 <= 7 )
    {
      N = v7;
      v36 = 7LL;
      v28 = 2 * v7;
      memcpy_0(S2, a3, v28);
      *(_WORD *)((char *)S2 + v28) = 0;
    }
    else
    {
      v8 = std::wstring::_Calculate_growth(v7, 7LL);
      if ( (unsigned __int64)(v8 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
      S2[0] = (wchar_t *)std::_Allocate<16,std::_Default_allocate_traits>(2 * (v8 + 1));
      N = v7;
      v36 = v8;
      v9 = v7;
      memcpy_0(S2[0], a3, v9 * 2);
      S2[0][v9] = 0;
    }
    inserted = *v6;
    v12 = *(_QWORD *)(*v6 + 8);
    v31 = (unsigned __int64)v12;
    while ( !*(_BYTE *)(v12 + 25) )
    {
      *(_QWORD *)&v31 = v12;
      v13 = (const wchar_t *)(v12 + 32);
      v14 = (const wchar_t *)S2;
      if ( v36 > 7 )
        v14 = S2[0];
      v15 = *(_QWORD *)(v12 + 48);
      if ( *(_QWORD *)(v12 + 56) > 7uLL )
        v13 = *(const wchar_t **)v13;
      v16 = N;
      v17 = *(_QWORD *)(v12 + 48);
      if ( N < v15 )
        v17 = N;
      v18 = wmemcmp(v13, v14, v17);
      if ( v18 )
      {
        if ( v18 < 0 )
        {
LABEL_10:
          DWORD2(v31) = 0;
          v12 += 16LL;
          goto LABEL_11;
        }
      }
      else if ( v15 < v16 )
      {
        goto LABEL_10;
      }
      DWORD2(v31) = 1;
      inserted = v12;
LABEL_11:
      v12 = *(_QWORD *)v12;
    }
    if ( *(_BYTE *)(inserted + 25) )
      goto LABEL_41;
    v19 = (const wchar_t *)(inserted + 32);
    v20 = *(_QWORD *)(inserted + 48);
    if ( *(_QWORD *)(inserted + 56) > 7uLL )
      v19 = *(const wchar_t **)v19;
    v21 = (const wchar_t *)S2;
    if ( v36 > 7 )
      v21 = S2[0];
    v22 = N;
    v23 = N;
    if ( v20 < N )
      v23 = *(_QWORD *)(inserted + 48);
    v24 = wmemcmp(v21, v19, v23);
    if ( v24 )
    {
      if ( v24 >= 0 )
        goto LABEL_31;
LABEL_41:
      if ( v6[1] == 0x38E38E38E38E38ELL )
        std::_Throw_tree_length_error();
      *(_QWORD *)&v32 = S2;
      v29 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>(
              (unsigned int)v33,
              (_DWORD)v6,
              *v6,
              (_DWORD)v10,
              (__int64)&v32);
      v30 = *(_QWORD *)(v29 + 8);
      *(_QWORD *)(v29 + 8) = 0LL;
      std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>,void *>>>(v33);
      v32 = v31;
      inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>::_Insert_node(
                   v6,
                   &v32,
                   v30);
    }
    else if ( v22 < v20 )
    {
      goto LABEL_41;
    }
LABEL_31:
    if ( v36 > 7 )
      std::_Deallocate<16>(S2[0], 2 * v36 + 2);
    N = 0LL;
    v36 = 7LL;
    LOWORD(S2[0]) = 0;
    if ( !a2 )
    {
      v26 = ++*(_DWORD *)(inserted + 64) == 1;
      goto LABEL_38;
    }
    if ( a2 == 1 )
    {
      v25 = *(_DWORD *)(inserted + 64);
      if ( v25 )
      {
        v27 = v25 - 1;
        v26 = v27 == 0;
        *(_DWORD *)(inserted + 64) = v27;
LABEL_38:
        if ( v26 )
          CPlaybackNotifier::PublishPlaybackAudioStatus(a1);
      }
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2C5,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v10);
  }
}
