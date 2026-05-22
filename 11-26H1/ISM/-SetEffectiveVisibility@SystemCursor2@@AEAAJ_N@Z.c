/*
 * XREFs of ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1800FCBC4
 * Callers:
 *     ?OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800FC3A0 (-OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?ResetState@SystemCursor2@@QEAAJXZ @ 0x1800FC684 (-ResetState@SystemCursor2@@QEAAJXZ.c)
 *     ?SetCursorShellVisibility@SystemCursorService2@@UEAAJ_K_N@Z @ 0x1800FCA20 (-SetCursorShellVisibility@SystemCursorService2@@UEAAJ_K_N@Z.c)
 *     ?SetSuppressionState@SystemCursor2@@QEAAJ_N@Z @ 0x1800FD07C (-SetSuppressionState@SystemCursor2@@QEAAJ_N@Z.c)
 * Callees:
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18006B4CC (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCursorVisibility@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1800FCB74 (-SetCursorVisibility@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursor2::SetEffectiveVisibility(SystemCursor2 *this, unsigned __int8 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::weak_ptr<SystemCursorService2>::lock((__int64)this + 56, &v8);
  if ( v8
    && *((_QWORD *)this + 21)
    && (InputTraceLogging::Cursor::SetCursorVisibility(a2),
        LOBYTE(v4) = a2,
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 21) + 8LL))(*((_QWORD *)this + 21), v4),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x268,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)(unsigned int)v5);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return v6;
  }
  else
  {
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return 0LL;
  }
}
