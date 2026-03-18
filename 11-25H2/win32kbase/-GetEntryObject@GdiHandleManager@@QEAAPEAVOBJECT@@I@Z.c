/*
 * XREFs of ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70
 * Callers:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     bPEBCacheHandle @ 0x140016060 (bPEBCacheHandle.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001A830 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     EngUnlockSurface @ 0x14001CEB0 (EngUnlockSurface.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x14006E4E4 (-vReleaseCurrentpMapProcForSurfaces@@YAXXZ.c)
 *     HmgUnlock @ 0x14006E658 (HmgUnlock.c)
 *     HmgSwapLockedHandleContents @ 0x14006E700 (HmgSwapLockedHandleContents.c)
 *     HmgSetLock @ 0x14006ED3C (HmgSetLock.c)
 *     HmgShareLockIgnoreStockBit @ 0x14006F0F0 (HmgShareLockIgnoreStockBit.c)
 *     HmgQueryAltLock @ 0x14006F190 (HmgQueryAltLock.c)
 *     HmgNextGarbageCollectible @ 0x14006F2A4 (HmgNextGarbageCollectible.c)
 *     HmgModifyHandleType @ 0x14006F6A0 (HmgModifyHandleType.c)
 *     HmgShareUnlockRemoveObject @ 0x14006F750 (HmgShareUnlockRemoveObject.c)
 *     HmgReferenceCheckLock @ 0x14006F8A0 (HmgReferenceCheckLock.c)
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400856CC (-vCleanupDCs@@YAXK@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140085920 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x1401C4D28 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401C5120 (-Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z.c)
 *     HmgFreeFast @ 0x1401C56C0 (HmgFreeFast.c)
 *     HmgQueryLock @ 0x1401C57D0 (HmgQueryLock.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C8050 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     <none>
 */

struct OBJECT *__fastcall GdiHandleManager::GetEntryObject(GdiHandleManager *this, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned int v9; // r8d
  __int64 v10; // rax

  v2 = 0LL;
  if ( a2 >= 0x10000 )
  {
    v3 = (unsigned __int16)a2;
    if ( *(_DWORD *)this <= 0x10000u )
    {
      a2 = (unsigned __int16)a2;
    }
    else
    {
      v4 = *((_QWORD *)this + 2);
      v5 = *(_DWORD *)(v4 + 2056);
      if ( (unsigned __int16)a2 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
      {
        v7 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)a2 >= v5 )
        {
          v6 = *(_QWORD *)(v4 + 8LL * ((((unsigned __int16)a2 - v5) >> 16) + 1) + 8);
          v3 = -65536 * (((unsigned __int16)a2 - v5) >> 16) - v5 + (unsigned __int16)a2;
        }
        else
        {
          v6 = *(_QWORD *)(v4 + 8);
        }
        v7 = 0LL;
        if ( (unsigned int)v3 < *(_DWORD *)(v6 + 20) )
          v7 = *(_QWORD *)v6 + 24 * v3;
        LODWORD(v3) = (unsigned __int16)a2;
      }
      if ( *(unsigned __int8 *)(v7 + 13) == HIWORD(a2) )
        a2 = v3;
    }
  }
  v8 = *((_QWORD *)this + 2);
  v9 = *(_DWORD *)(v8 + 2056);
  if ( a2 < v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
  {
    if ( a2 >= v9 )
    {
      v10 = *(_QWORD *)(v8 + 8LL * (((a2 - v9) >> 16) + 1) + 8);
      a2 += -65536 * ((a2 - v9) >> 16) - v9;
    }
    else
    {
      v10 = *(_QWORD *)(v8 + 8);
    }
    if ( a2 < *(_DWORD *)(v10 + 20) )
      return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)a2 >> 8))
                               + 16LL * (unsigned __int8)a2
                               + 8);
  }
  return (struct OBJECT *)v2;
}
