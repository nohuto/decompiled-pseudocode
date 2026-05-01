/*
 * XREFs of ?GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x18067BCAC
 * Callers:
 *     ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x18004E1A0 (-GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7710 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@UGMRelatedProcess@KnownGameList@@@wil@@YA?AV?$unique_ptr@$$BY0A@UGMRelatedProcess@KnownGameList@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x180291A4C (--$make_unique_cotaskmem_nothrow@$$BY0A@UGMRelatedProcess@KnownGameList@@@wil@@YA-AV-$unique_ptr.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Emplace@AEBUGMRelatedProcess@KnownGameList@@@?$list@UGMRelatedProcess@KnownGameList@@V?$allocator@UGMRelatedProcess@KnownGameList@@@std@@@std@@QEAAPEAU?$_List_node@UGMRelatedProcess@KnownGameList@@PEAX@1@QEAU21@AEBUGMRelatedProcess@KnownGameList@@@Z @ 0x18067B624 (--$_Emplace@AEBUGMRelatedProcess@KnownGameList@@@-$list@UGMRelatedProcess@KnownGameList@@V-$allo.c)
 *     ??0?$list@UGMRelatedProcess@KnownGameList@@V?$allocator@UGMRelatedProcess@KnownGameList@@@std@@@std@@QEAA@XZ @ 0x18067B6F8 (--0-$list@UGMRelatedProcess@KnownGameList@@V-$allocator@UGMRelatedProcess@KnownGameList@@@std@@@.c)
 *     ?_Tokenize@AutoGameProfile@@YAJPEBG0V?$function@$$A6AJPEAGH@Z@std@@@Z @ 0x18067C150 (-_Tokenize@AutoGameProfile@@YAJPEBG0V-$function@$$A6AJPEAGH@Z@std@@@Z.c)
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
  unsigned int v13; // esi
  _QWORD **v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  _QWORD **v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rax
  _QWORD **v23; // rcx
  _QWORD *v24; // rcx
  _QWORD *v25; // rbx
  void *v26; // rcx
  _OWORD *v27; // r8
  _QWORD **v28; // rdx
  _QWORD *v29; // rax
  _QWORD **v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rbx
  _QWORD *v33; // rcx
  _QWORD *v34; // rbx
  int v35; // [rsp+20h] [rbp-B8h] BYREF
  void *v36; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD **v37; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-A0h]
  int v39; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int16 *v40; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int16 v41[8]; // [rsp+58h] [rbp-80h] BYREF
  __int128 v42; // [rsp+68h] [rbp-70h]
  __int128 v43; // [rsp+78h] [rbp-60h]
  __int64 v44; // [rsp+88h] [rbp-50h]
  unsigned __int16 *v45; // [rsp+90h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

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
  v39 = 124;
  v40 = 0LL;
  LOWORD(v35) = 0;
  std::list<KnownGameList::GMRelatedProcess>::list<KnownGameList::GMRelatedProcess>(&v37);
  v12 = (char *)this;
  while ( v12 && v12 < (char *)this + 2 * v6 && *(_WORD *)v12 )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v36,
      v12,
      0xFFFFFFFFFFFFFFFFuLL,
      v11);
    if ( !v36 )
    {
      v13 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AA,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
        (const char *)0x8007000ELL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v36);
      v14 = v37;
      *v37[1] = 0LL;
      v15 = *v14;
      if ( v15 )
      {
        do
        {
          v16 = (_QWORD *)*v15;
          std::_Deallocate<16>(v15, (struct std::nothrow_t *)0x50);
          v15 = v16;
        }
        while ( v16 );
      }
      goto LABEL_46;
    }
    *(_QWORD *)v41 = off_18075ED40;
    *(_QWORD *)&v41[4] = &v40;
    *(_QWORD *)&v42 = &v35;
    v45 = v41;
    if ( (int)AutoGameProfile::_Tokenize(v36, &v39, v41) >= 0 )
    {
      if ( v40 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( v40[v17] );
        if ( v17 )
        {
          *(_OWORD *)v41 = 0LL;
          v42 = 0LL;
          v43 = 0LL;
          v44 = 0LL;
          LODWORD(v45) = 0;
          WORD2(v45) = 0;
          v18 = StringCchCopyW((char *)&v41[1], 30LL, (char *)v40);
          v13 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1B5,
              (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)(unsigned int)v18);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v36);
            v19 = v37;
            *v37[1] = 0LL;
            v20 = *v19;
            if ( v20 )
            {
              do
              {
                v21 = (_QWORD *)*v20;
                std::_Deallocate<16>(v20, (struct std::nothrow_t *)0x50);
                v20 = v21;
              }
              while ( v21 );
            }
            goto LABEL_46;
          }
          try
          {
            v41[0] = v35;
            LOWORD(v35) = 0;
            std::list<KnownGameList::GMRelatedProcess>::_Emplace<KnownGameList::GMRelatedProcess const &>(
              (__int64)&v37,
              (__int64)v37,
              (__int64)v41);
          }
          catch ( std::bad_alloc )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1C0,
              (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)0x8007000ELL);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v36);
            v23 = v37;
            *v37[1] = 0LL;
            v24 = *v23;
            if ( v24 )
            {
              do
              {
                v25 = (_QWORD *)*v24;
                std::_Deallocate<16>(v24, (struct std::nothrow_t *)0x50);
                v24 = v25;
              }
              while ( v25 );
            }
            v13 = -2147024882;
            goto LABEL_46;
          }
        }
      }
    }
    v40 = 0LL;
    v22 = -1LL;
    do
      ++v22;
    while ( *(_WORD *)&v12[2 * v22] );
    v12 += 2 * v22 + 2;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v36);
  }
  if ( v38 )
  {
    wil::make_unique_cotaskmem_nothrow<KnownGameList::GMRelatedProcess [0]>((char **)&v36, v38, v10, v11);
    v26 = v36;
    if ( !v36 )
    {
      v13 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CE,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
        (const char *)0x8007000ELL);
      v30 = v37;
      *v37[1] = 0LL;
      v31 = *v30;
      if ( v31 )
      {
        do
        {
          v32 = (_QWORD *)*v31;
          std::_Deallocate<16>(v31, (struct std::nothrow_t *)0x50);
          v31 = v32;
        }
        while ( v32 );
      }
      goto LABEL_46;
    }
    v27 = v36;
    v28 = v37;
    v29 = *v37;
    while ( v29 != v28 )
    {
      *v27 = *((_OWORD *)v29 + 1);
      v27[1] = *((_OWORD *)v29 + 2);
      v27[2] = *((_OWORD *)v29 + 3);
      *((_QWORD *)v27 + 6) = v29[8];
      *((_DWORD *)v27 + 14) = *((_DWORD *)v29 + 18);
      *((_WORD *)v27 + 30) = *((_WORD *)v29 + 38);
      v27 = (_OWORD *)((char *)v27 + 62);
      v29 = (_QWORD *)*v29;
      v28 = v37;
    }
    *(_QWORD *)a4 = v26;
    *a3 = v38;
  }
  else
  {
    *(_QWORD *)a4 = 0LL;
    *a3 = 0;
    v28 = v37;
  }
  *v28[1] = 0LL;
  v33 = *v28;
  if ( *v28 )
  {
    do
    {
      v34 = (_QWORD *)*v33;
      std::_Deallocate<16>(v33, (struct std::nothrow_t *)0x50);
      v33 = v34;
    }
    while ( v34 );
  }
  v13 = 0;
LABEL_46:
  std::_Deallocate<16>(v37, (struct std::nothrow_t *)0x50);
  return v13;
}
