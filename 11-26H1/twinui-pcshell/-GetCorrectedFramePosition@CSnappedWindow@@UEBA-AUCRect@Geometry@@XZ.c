/*
 * XREFs of ?GetCorrectedFramePosition@CSnappedWindow@@UEBA?AUCRect@Geometry@@XZ @ 0x18022F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x18005A490 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA?AW4ExtendRectFlags@1@W4SnapRegion@@@Z @ 0x1805AB390 (-DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA-AW4ExtendRectFlags@1@W4SnapRegion@@@Z.c)
 *     ?ExtendRectToContainer@SnapLayoutHelpers@@YA?AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z @ 0x1805AB928 (-ExtendRectToContainer@SnapLayoutHelpers@@YA-AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall CSnappedWindow::GetCorrectedFramePosition(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( SnapLayoutHelpers::IsValidSnapRegion((SnapLayoutHelpers *)*(unsigned int *)(a1 + 40)) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v8 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 88LL))(v4, &v8) >= 0 )
    {
      v5 = SnapLayoutHelpers::DetermineExtendRectFlagsFromRegion(*(unsigned int *)(a1 + 40));
      *a2 = *(_OWORD *)SnapLayoutHelpers::ExtendRectToContainer(v7, &v8, a2, v5);
    }
  }
  return a2;
}
