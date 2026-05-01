/*
 * XREFs of ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x18001454C
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180010A10 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     wprintf @ 0x180003000 (wprintf.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800109DC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXAEA_K@Z @ 0x180013EB8 (--$_Reallocate@$0A@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??1?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800141AC (--1-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@QEAA@XZ.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180014884 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@$$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DoWorkOnGameConfigStore(__int64 a1, __int64 a2)
{
  void *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  const char *v7; // r9
  int v8; // eax
  unsigned int v10; // esi
  unsigned int v11; // edi
  int v12; // eax
  void *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  const struct std::nothrow_t *v16; // rdx
  const struct std::nothrow_t *v17; // rdx
  void *v18[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v23; // [rsp+90h] [rbp+8h] BYREF
  int v24; // [rsp+A0h] [rbp+18h] BYREF
  void *v25; // [rsp+A8h] [rbp+20h] BYREF

  v23 = 0;
  v4 = 0LL;
  v25 = 0LL;
  v24 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)a1 + 48LL))(a1, 0LL, &v23);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  if ( !v23 )
  {
    wprintf(L"GameConfigStore is empty\n");
    return 0;
  }
  v20 = 0LL;
  v21 = 0LL;
  v18[0] = (void *)(unsigned int)v23;
  try
  {
    std::vector<_GUID>::_Reallocate<0>(&v20, v18);
  }
  catch ( ... )
  {
    LODWORD(v25) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x79,
                     (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                     v7);
    std::vector<_GUID>::~vector<_GUID>((__int64)&v20);
    return (unsigned int)v25;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)a1 + 48LL))(a1, v20, &v23);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v8);
    std::vector<_GUID>::~vector<_GUID>((__int64)&v20);
    return v6;
  }
  v10 = 0;
  v11 = 0;
  if ( v23 )
  {
    while ( 1 )
    {
      *(_OWORD *)v18 = *(_OWORD *)(v20 + 16LL * v11);
      v12 = ((__int64 (__fastcall *)(__int64, void **, void **, int *))GetGameFromGameConfigStore)(a1, v18, &v25, &v24);
      v10 = v12;
      if ( v12 < 0 )
        break;
      v13 = v25;
      v4 = 0LL;
      v25 = 0LL;
      v18[0] = v13;
      v19 = *(_OWORD *)(v20 + 16LL * v11);
      v14 = *(_QWORD *)(a2 + 56);
      if ( !v14 )
      {
        std::_Xbad_function_call();
        break;
      }
      v15 = (*(__int64 (__fastcall **)(__int64, __int128 *, void **))(*(_QWORD *)v14 + 16LL))(v14, &v19, v18);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8F,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v15);
      if ( v18[0] )
        operator delete(v18[0], v16);
      if ( ++v11 >= v23 )
        goto LABEL_20;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v12);
    v4 = v25;
  }
LABEL_20:
  std::vector<_GUID>::~vector<_GUID>((__int64)&v20);
  if ( v4 )
    operator delete(v4, v17);
  return v10;
}
