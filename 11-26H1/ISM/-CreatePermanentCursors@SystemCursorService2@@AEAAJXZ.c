/*
 * XREFs of ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800FB80C
 * Callers:
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1800FBD44 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BE0C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18008FC04 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA-AV-$shared_ptr@VSy.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB28 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800FA1CC (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??$make_shared@VSystemCursor2@@V?$shared_ptr@VSystemCursorService2@@@std@@PEAUCursorDeviceInfo@@@std@@YA?AV?$shared_ptr@VSystemCursor2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAUCursorDeviceInfo@@@Z @ 0x1800FA4D4 (--$make_shared@VSystemCursor2@@V-$shared_ptr@VSystemCursorService2@@@std@@PEAUCursorDeviceInfo@@.c)
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800FB6C8 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 *     ?GetCursorDeviceIdForInputType@@YA_KW4InputType@@@Z @ 0x1800FBD00 (-GetCursorDeviceIdForInputType@@YA_KW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursorService2::CreatePermanentCursors(SystemCursorService2 *this)
{
  _QWORD *v2; // rax
  int CursorVisual; // eax
  unsigned int v4; // ebx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  SystemCursor2 *v10; // rax
  std::_Ref_count_base *v11; // rdx
  std::_Ref_count_base *v12; // rbx
  std::_Ref_count_base *v13; // rcx
  SystemCursor2 *v14; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-48h]
  __int64 CursorDeviceIdForInputType; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  std::_Ref_count_base *v18; // [rsp+40h] [rbp-30h]
  __int64 v19[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h] BYREF
  int v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+64h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  CursorDeviceIdForInputType = GetCursorDeviceIdForInputType(2LL);
  v21 = 0;
  v20 = CursorDeviceIdForInputType;
  v22 = 100;
  v19[0] = (__int64)&v20;
  v2 = (_QWORD *)std::enable_shared_from_this<SystemCursorService2>::shared_from_this((__int64)this + 32, &v17);
  std::make_shared<SystemCursor2,std::shared_ptr<SystemCursorService2>,CursorDeviceInfo *>(&v14, v2, v19);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  CursorVisual = SystemCursor2::CreateCursorVisual(v14);
  v4 = CursorVisual;
  if ( CursorVisual >= 0 )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
      (float *)this + 14,
      (__int64)v19,
      (unsigned __int8 *)&CursorDeviceIdForInputType);
    v6 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v17, &v14);
    v7 = *v6;
    *v6 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)(v8 + 24) = v7;
    v9 = v6[1];
    v6[1] = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 32) = v9;
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    v10 = 0LL;
    v11 = 0LL;
    v12 = v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 3);
      v10 = v14;
      v11 = v12;
    }
    *((_QWORD *)this + 32) = v10;
    v13 = (std::_Ref_count_base *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 33) = v11;
    if ( v13 )
      std::_Ref_count_base::_Decwref(v13);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)(unsigned int)CursorVisual);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)v4);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    return v4;
  }
}
