/*
 * XREFs of ?SetRasterizationScale@SystemCursor2@@QEAAJI@Z @ 0x1800FCCF8
 * Callers:
 *     ?OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1800FBE40 (-OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z.c)
 *     ?OnCursorParametersChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorParametersData@@@Z @ 0x1800FC220 (-OnCursorParametersChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorParametersData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShapeExists@SystemCursor2@@QEBA_N_K@Z @ 0x1800F99C8 (-ShapeExists@SystemCursor2@@QEBA_N_K@Z.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800FCD58 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 */

__int64 __fastcall SystemCursor2::SetRasterizationScale(SystemCursor2 *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 8) == a2 )
    return 0LL;
  *((_DWORD *)this + 8) = a2;
  if ( !SystemCursor2::ShapeExists(this, *((_QWORD *)this + 5)) )
    return 0LL;
  v3 = SystemCursor2::SetShape(this, *((_QWORD *)this + 5), 0);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x277,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcursorservice2.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
