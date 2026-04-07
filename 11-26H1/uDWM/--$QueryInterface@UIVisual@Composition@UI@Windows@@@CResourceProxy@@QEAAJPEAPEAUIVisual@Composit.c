/*
 * XREFs of ??$QueryInterface@UIVisual@Composition@UI@Windows@@@CResourceProxy@@QEAAJPEAPEAUIVisual@Composition@UI@Windows@@@Z @ 0x180082C44
 * Callers:
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x1800355CC (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18003628C (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResourceProxy::QueryInterface<Windows::UI::Composition::IVisual>(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64))(**(_QWORD **)(a1 + 16) + 104LL))(
         *(_QWORD *)(a1 + 16),
         *(unsigned int *)(a1 + 24),
         &GUID_117e202d_a859_4c89_873b_c2aa566788e3,
         a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x57,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
