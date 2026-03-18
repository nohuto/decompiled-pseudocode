/*
 * XREFs of ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1402F322C
 * Callers:
 *     TouchTargetingRankForRectDeep @ 0x1401C2420 (TouchTargetingRankForRectDeep.c)
 * Callees:
 *     _TTHmToPixels @ 0x1401C1E58 (_TTHmToPixels.c)
 *     _TTPixelsToHm @ 0x1401C1F6C (_TTPixelsToHm.c)
 */

void __fastcall _TTLimitDeepTargetingPoint(int a1, int a2, int *a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v7; // eax
  int v8; // r10d
  _DWORD *v9; // r11
  int v10; // edx

  v3 = *a3;
  v4 = a1 - *a3;
  v5 = *a3 - a1;
  if ( v5 < 0 )
    v5 = v4;
  if ( (int)TTPixelsToHm(v5, a2) > 200 )
  {
    v7 = TTHmToPixels(200, a2);
    v10 = v8 - v7;
    if ( v8 <= v3 )
      v10 = v8 + v7;
    *v9 = v10;
  }
}
