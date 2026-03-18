/*
 * XREFs of ?AdjustInputTypeForInteraction@CHitTestContext@@AEBA?AW4InputType@@W42@PEBVCInteraction@@@Z @ 0x1801A35D0
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800944C4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHitTestContext::AdjustInputTypeForInteraction(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = a2;
  if ( a2 == 6
    && !(*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(a3 + 72) + 88LL))(
          a3 + 72,
          6LL,
          *(unsigned int *)(a1 + 92),
          0LL) )
  {
    return 5;
  }
  return v3;
}
