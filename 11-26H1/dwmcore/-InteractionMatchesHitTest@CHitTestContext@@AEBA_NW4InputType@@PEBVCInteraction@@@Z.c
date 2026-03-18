/*
 * XREFs of ?InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z @ 0x1801902D4
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800944C4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CHitTestContext::InteractionMatchesHitTest(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl

  if ( (_DWORD)a2 != 4 )
    return (unsigned int)(a2 - 5) > 1
        || (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(a3 + 72) + 88LL))(
             a3 + 72,
             a2,
             *(unsigned int *)(a1 + 92),
             0LL) != 0;
  v4 = 0;
  if ( !*(_DWORD *)(a1 + 96)
    || (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(a3 + 72) + 88LL))(a3 + 72, 4LL) )
  {
    return 1;
  }
  return v4;
}
