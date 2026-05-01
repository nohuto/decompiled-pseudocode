/*
 * XREFs of ?SetPositioningAnchorRect@UndockedSearchAppExperienceManager@@UEAAJURect@Foundation@Windows@@0@Z @ 0x18024B460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18024A45C (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::SetPositioningAnchorRect(__int64 a1, _OWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_OWORD *)(a1 + 128) = *a2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(
          *(_QWORD *)(a1 + 88),
          *(_QWORD *)(a1 + 56)) )
    return 0LL;
  v3 = UndockedSearchAppExperienceManager::PositionSearchAppWindow((UndockedSearchAppExperienceManager *)a1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x370,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
