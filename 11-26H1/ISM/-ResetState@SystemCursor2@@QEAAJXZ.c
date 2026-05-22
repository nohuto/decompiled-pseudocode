/*
 * XREFs of ?ResetState@SystemCursor2@@QEAAJXZ @ 0x1800FC684
 * Callers:
 *     ?ResetForNewShellInstance@SystemCursorService2@@UEAAJK@Z @ 0x1800FC5E0 (-ResetForNewShellInstance@SystemCursorService2@@UEAAJK@Z.c)
 * Callees:
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006B538 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ @ 0x1800FBD20 (-GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ.c)
 *     ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1800FCBC4 (-SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z.c)
 *     ?SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x180163600 (-SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z.c)
 */

__int64 __fastcall SystemCursor2::ResetState(SystemCursor2 *this)
{
  _QWORD *v1; // rdi
  SystemCursors::SharedTargetWithHandle *v3; // rcx
  int v4; // eax
  CursorSuppressionProcessor *v5; // rcx
  char v6; // al
  bool EffectiveVisibiltyState; // al
  SystemCursor2 *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (_QWORD *)((char *)this + 152);
  v3 = (SystemCursors::SharedTargetWithHandle *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    v4 = SystemCursors::SharedTargetWithHandle::SetRoot(v3, 0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1DC,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice2.cpp",
        (const char *)(unsigned int)v4);
    *(_OWORD *)v12 = 0LL;
    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
      v1,
      (__int64 *)v12);
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
  }
  v5 = CursorSuppressionProcessor::s_processor;
  v6 = 1;
  *((_BYTE *)this + 36) = 0;
  *((_BYTE *)this + 176) = 1;
  if ( !v5 || *((_DWORD *)v5 + 22) >= 2u )
    v6 = 0;
  *((_BYTE *)this + 178) = v6;
  EffectiveVisibiltyState = SystemCursor2::GetEffectiveVisibiltyState(this);
  v9 = SystemCursor2::SetEffectiveVisibility(v8, EffectiveVisibiltyState);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F1,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcursorservice2.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
