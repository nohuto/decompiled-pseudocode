/*
 * XREFs of ?GetHwnd@CInteraction@@QEBAPEAUHWND__@@W4CompositionInputType@@@Z @ 0x18021F0D0
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800944C4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetHwnd(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = *(_QWORD *)(a1 + 112);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = v2 + 64;
    while ( v2 != v4 )
    {
      if ( a2 == *(_DWORD *)v2 )
        return *(_QWORD *)(v2 + 8);
      v2 += 16LL;
    }
  }
  return v3;
}
