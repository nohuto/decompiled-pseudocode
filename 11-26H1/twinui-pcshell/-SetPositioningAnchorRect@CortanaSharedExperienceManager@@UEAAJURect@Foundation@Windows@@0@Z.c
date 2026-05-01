/*
 * XREFs of ?SetPositioningAnchorRect@CortanaSharedExperienceManager@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1803752C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::SetPositioningAnchorRect(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 488);
  *(_OWORD *)v7 = *a3;
  v8 = *a2;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *, int *))(*(_QWORD *)v3 + 40LL))(v3, &v8, v7);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
