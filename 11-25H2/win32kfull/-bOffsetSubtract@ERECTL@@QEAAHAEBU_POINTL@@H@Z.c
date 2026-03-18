/*
 * XREFs of ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140177478
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x14009B018 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x14030EAD8 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x14032287C (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     GreUnlockDisplayArea @ 0x14032FFA0 (GreUnlockDisplayArea.c)
 * Callees:
 *     ?LongLongToLong@@YAJ_JPEAJ@Z @ 0x14016CC64 (-LongLongToLong@@YAJ_JPEAJ@Z.c)
 */

__int64 __fastcall ERECTL::bOffsetSubtract(ERECTL *this, const struct _POINTL *a2, int a3)
{
  const struct _POINTL *v3; // r10
  ERECTL *v4; // r9
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r11
  int v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = this;
  if ( a3
    && ((int)LongLongToLong(*(int *)this - (__int64)a2->x, &v12) < 0
     || (int)LongLongToLong(*(int *)(v6 + 8) - v7, &v12) < 0
     || (int)LongLongToLong(*(int *)(v8 + 4) - (__int64)*(int *)(v9 + 4), &v12) < 0
     || (int)LongLongToLong(*(int *)(v10 + 12) - v11, &v12) < 0) )
  {
    return 0LL;
  }
  *(_DWORD *)v4 -= v3->x;
  *((_DWORD *)v4 + 2) -= v3->x;
  *((_DWORD *)v4 + 1) -= v3->y;
  *((_DWORD *)v4 + 3) -= v3->y;
  return 1LL;
}
