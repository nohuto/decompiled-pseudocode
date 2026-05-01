/*
 * XREFs of ?GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x180655C64
 * Callers:
 *     ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x180110050 (-GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800ED100 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@UGMRelatedProcess@KnownGameList@@@wil@@YA?AV?$unique_ptr@$$BY0A@UGMRelatedProcess@KnownGameList@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x1802972F0 (--$make_unique_cotaskmem_nothrow@$$BY0A@UGMRelatedProcess@KnownGameList@@@wil@@YA-AV-$unique_ptr.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Emplace@AEBUGMRelatedProcess@KnownGameList@@@?$list@UGMRelatedProcess@KnownGameList@@V?$allocator@UGMRelatedProcess@KnownGameList@@@std@@@std@@QEAAPEAU?$_List_node@UGMRelatedProcess@KnownGameList@@PEAX@1@QEAU21@AEBUGMRelatedProcess@KnownGameList@@@Z @ 0x1806555F4 (--$_Emplace@AEBUGMRelatedProcess@KnownGameList@@@-$list@UGMRelatedProcess@KnownGameList@@V-$allo.c)
 *     ??0?$list@UGMRelatedProcess@KnownGameList@@V?$allocator@UGMRelatedProcess@KnownGameList@@@std@@@std@@QEAA@XZ @ 0x1806556C4 (--0-$list@UGMRelatedProcess@KnownGameList@@V-$allocator@UGMRelatedProcess@KnownGameList@@@std@@@.c)
 *     ?_Tokenize@AutoGameProfile@@YAJPEBG0V?$function@$$A6AJPEAGH@Z@std@@@Z @ 0x180656120 (-_Tokenize@AutoGameProfile@@YAJPEBG0V-$function@$$A6AJPEAGH@Z@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AutoGameProfile::GetGameRelatedFromGcsData(
        AutoGameProfile *this,
        const unsigned __int16 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  __int64 v6; // r13
  __int64 v8; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  char *v12; // rbx
  __int128 v13; // xmm6
  unsigned int v14; // esi
  _QWORD **v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  _QWORD **v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rax
  _QWORD **v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rbx
  void *v27; // rcx
  _OWORD *v28; // r8
  _QWORD **v29; // rdx
  _QWORD *v30; // rax
  _QWORD **v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rbx
  _QWORD *v34; // rcx
  _QWORD *v35; // rbx
  int v36; // [rsp+20h] [rbp-D8h] BYREF
  void *v37; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD **v38; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-C0h]
  int v40; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int16 *v41; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+50h] [rbp-A8h]
  unsigned __int16 v43[16]; // [rsp+60h] [rbp-98h] BYREF
  __int128 v44; // [rsp+80h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-68h]
  unsigned __int16 *v46; // [rsp+98h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v6 = (unsigned int)a2;
  if ( !this )
  {
    v8 = 388LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !*(_WORD *)this )
    return 2147942487LL;
  if ( !a3 )
  {
    v8 = 390LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v8 = 391LL;
    goto LABEL_3;
  }
  v40 = 124;
  v41 = 0LL;
  LOWORD(v36) = 0;
  std::list<KnownGameList::GMRelatedProcess>::list<KnownGameList::GMRelatedProcess>(&v38);
  *(_QWORD *)&v42 = &v41;
  *((_QWORD *)&v42 + 1) = &v36;
  v12 = (char *)this;
  v13 = v42;
  while ( v12 && v12 < (char *)this + 2 * v6 && *(_WORD *)v12 )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v37,
      v12,
      0xFFFFFFFFFFFFFFFFuLL,
      v11);
    if ( !v37 )
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AA,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
        (const char *)0x8007000ELL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v37);
      v15 = v38;
      *v38[1] = 0LL;
      v16 = *v15;
      if ( v16 )
      {
        do
        {
          v17 = (_QWORD *)*v16;
          std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)0x50);
          v16 = v17;
        }
        while ( v17 );
      }
      goto LABEL_46;
    }
    *(_QWORD *)v43 = off_1807344A8;
    *(_OWORD *)&v43[4] = v13;
    v46 = v43;
    if ( (int)AutoGameProfile::_Tokenize(v37, &v40, v43) >= 0 )
    {
      if ( v41 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( v41[v18] );
        if ( v18 )
        {
          memset(v43, 0, sizeof(v43));
          v44 = 0LL;
          v45 = 0LL;
          LODWORD(v46) = 0;
          WORD2(v46) = 0;
          v19 = StringCchCopyW((char *)&v43[1], 30LL, (char *)v41);
          v14 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1B5,
              (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)(unsigned int)v19);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v37);
            v20 = v38;
            *v38[1] = 0LL;
            v21 = *v20;
            if ( v21 )
            {
              do
              {
                v22 = (_QWORD *)*v21;
                std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)0x50);
                v21 = v22;
              }
              while ( v22 );
            }
            goto LABEL_46;
          }
          try
          {
            v43[0] = v36;
            LOWORD(v36) = 0;
            std::list<KnownGameList::GMRelatedProcess>::_Emplace<KnownGameList::GMRelatedProcess const &>(
              (__int64)&v38,
              (__int64)v38,
              (__int64)v43);
          }
          catch ( std::bad_alloc )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1C0,
              (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)0x8007000ELL);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v37);
            v24 = v38;
            *v38[1] = 0LL;
            v25 = *v24;
            if ( v25 )
            {
              do
              {
                v26 = (_QWORD *)*v25;
                std::_Deallocate<16,0>(v25, (const struct std::nothrow_t *)0x50);
                v25 = v26;
              }
              while ( v26 );
            }
            v14 = -2147024882;
            goto LABEL_46;
          }
        }
      }
    }
    v41 = 0LL;
    v23 = -1LL;
    do
      ++v23;
    while ( *(_WORD *)&v12[2 * v23] );
    v12 += 2 * v23 + 2;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v37);
  }
  if ( v39 )
  {
    wil::make_unique_cotaskmem_nothrow<KnownGameList::GMRelatedProcess [0]>((char **)&v37, v39, v10, v11);
    v27 = v37;
    if ( !v37 )
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CE,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
        (const char *)0x8007000ELL);
      v31 = v38;
      *v38[1] = 0LL;
      v32 = *v31;
      if ( v32 )
      {
        do
        {
          v33 = (_QWORD *)*v32;
          std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)0x50);
          v32 = v33;
        }
        while ( v33 );
      }
      goto LABEL_46;
    }
    v28 = v37;
    v29 = v38;
    v30 = *v38;
    while ( v30 != v29 )
    {
      *v28 = *((_OWORD *)v30 + 1);
      v28[1] = *((_OWORD *)v30 + 2);
      v28[2] = *((_OWORD *)v30 + 3);
      *((_QWORD *)v28 + 6) = v30[8];
      *((_DWORD *)v28 + 14) = *((_DWORD *)v30 + 18);
      *((_WORD *)v28 + 30) = *((_WORD *)v30 + 38);
      v28 = (_OWORD *)((char *)v28 + 62);
      v30 = (_QWORD *)*v30;
      v29 = v38;
    }
    *(_QWORD *)a4 = v27;
    *a3 = v39;
  }
  else
  {
    *(_QWORD *)a4 = 0LL;
    *a3 = 0;
    v29 = v38;
  }
  *v29[1] = 0LL;
  v34 = *v29;
  if ( *v29 )
  {
    do
    {
      v35 = (_QWORD *)*v34;
      std::_Deallocate<16,0>(v34, (const struct std::nothrow_t *)0x50);
      v34 = v35;
    }
    while ( v35 );
  }
  v14 = 0;
LABEL_46:
  std::_Deallocate<16,0>(v38, (const struct std::nothrow_t *)0x50);
  return v14;
}
