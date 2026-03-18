/*
 * XREFs of ?GetScrollRange@CInteractionTracker2@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x180273DD0
 * Callers:
 *     ?BoundaryFromValue@CInteractionTracker2@@UEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180271E60 (-BoundaryFromValue@CInteractionTracker2@@UEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?ClampValueToBoundary@CInteractionTracker2@@UEAAMW4ScrollAxis@@M@Z @ 0x180272720 (-ClampValueToBoundary@CInteractionTracker2@@UEAAMW4ScrollAxis@@M@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker2@@UEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x180277A40 (-ValueFromBoundary@CInteractionTracker2@@UEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker2::GetScrollRange(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // xmm0_4
  int v5; // xmm1_4
  int v6; // edx

  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v4 = a1[121];
        v5 = a1[122];
      }
    }
    else
    {
      v4 = a1[110];
      v5 = a1[113];
    }
  }
  else
  {
    v4 = a1[109];
    v5 = a1[112];
  }
  *a3 = v4;
  *a4 = v5;
}
