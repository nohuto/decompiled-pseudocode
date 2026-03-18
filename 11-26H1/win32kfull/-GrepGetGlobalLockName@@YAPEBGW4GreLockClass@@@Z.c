/*
 * XREFs of ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424
 * Callers:
 *     GreClientRgnUpdated @ 0x140013A14 (GreClientRgnUpdated.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x14018548C (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x140253454 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x14026ABBC (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z @ 0x1403129D0 (--$GreAcquireSemaphore@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z @ 0x140312A20 (--$GreReleaseSemaphoreExclusive@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x140313B10 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1403162AC (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x140318698 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x14031912C (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140319690 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     EngCreateWnd @ 0x140319940 (EngCreateWnd.c)
 *     GreClientRgnDone @ 0x140319FA4 (GreClientRgnDone.c)
 *     GreDeleteWnd @ 0x14031A0A0 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x14031A314 (GreSetClientRgn.c)
 *     ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z @ 0x14031BD5C (-GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x14031BE44 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     EngFreeModule @ 0x14031C020 (EngFreeModule.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall GrepGetGlobalLockName(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx

  if ( a1 <= 19 )
  {
    if ( a1 == 19 )
      return L"DriverMgmt";
    if ( a1 > 9 )
    {
      v11 = a1 - 10;
      if ( !v11 )
        return L"HT";
      v12 = v11 - 1;
      if ( !v12 )
        return L"VisRgnPublish";
      v13 = v12 - 1;
      if ( !v13 )
        return L"GammaLock";
      v14 = v13 - 1;
      if ( !v14 )
        return L"Palette";
      v15 = v14 - 1;
      if ( !v15 )
        return L"VisRgnUniqueness";
      v16 = v15 - 1;
      if ( !v16 )
        return L"RFONT_EUDC";
      v17 = v16 - 1;
      if ( !v17 )
        return L"EUDC1";
      v18 = v17 - 1;
      if ( !v18 )
        return L"PublicPFT";
      if ( v18 == 1 )
        return L"RFONTList";
    }
    else
    {
      if ( a1 == 9 )
        return L"SpriteRangeLock";
      if ( !a1 )
        return L"EnableEUDC";
      v1 = a1 - 1;
      if ( !v1 )
        return L"DynamicModeChange";
      v2 = v1 - 1;
      if ( !v2 )
        return L"GreLock";
      v3 = v2 - 1;
      if ( !v3 )
        return L"DCVisRgn";
      v4 = v3 - 1;
      if ( !v4 )
        return L"Pointer";
      v5 = v4 - 1;
      if ( !v5 )
        return L"RFONT_Cache";
      v6 = v5 - 1;
      if ( !v6 )
        return L"Sprite";
      v21 = v6 - 1;
      if ( !v21 )
        return L"DwmState";
      if ( v21 == 1 )
        return L"DevLock";
    }
    return L"Unknown";
  }
  if ( a1 <= 29 )
  {
    if ( a1 == 29 )
      return L"PoolTracker";
    v8 = a1 - 20;
    if ( !v8 )
      return L"Hmgr";
    v9 = v8 - 1;
    if ( !v9 )
      return L"SPRITE_State";
    v10 = v9 - 1;
    if ( !v10 )
      return L"TrustedFontFileTable";
    v19 = v10 - 1;
    if ( !v19 )
      return L"PrintKView";
    v20 = v19 - 1;
    if ( !v20 )
      return L"EUDC2";
    v22 = v20 - 1;
    if ( !v22 )
      return L"FntCache";
    v23 = v22 - 1;
    if ( !v23 )
      return L"NetworkedFontFile";
    v24 = v23 - 1;
    if ( !v24 )
      return L"GreEngLoadModuleAllocListLock";
    if ( v24 == 1 )
      return L"GlyphSet";
    return L"Unknown";
  }
  v25 = a1 - 30;
  if ( !v25 )
    return L"DEBUG";
  v26 = v25 - 1;
  if ( !v26 )
    return L"DebugGreMapViewListLock";
  v27 = v26 - 1;
  if ( !v27 )
    return L"MultiUserEngAllocListLock";
  v28 = v27 - 1;
  if ( !v28 )
    return L"Wndobj";
  v29 = v28 - 1;
  if ( !v29 )
    return L"WNDOBJ";
  v30 = v29 - 1;
  if ( !v30 )
    return L"PATHALLOC_FreeList";
  v31 = v30 - 1;
  if ( !v31 )
    return L"MapRot";
  v32 = v31 - 1;
  if ( v32 )
  {
    if ( v32 == 1 )
      return L"MaxGreLock";
    return L"Unknown";
  }
  return L"Other";
}
