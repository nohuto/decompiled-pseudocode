/*
 * XREFs of ??1HANDLELOCK@@QEAA@XZ @ 0x140016260
 * Callers:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140016520 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140016730 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     HmgRemoveObject @ 0x140019EC0 (HmgRemoveObject.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001AE78 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x14001B29C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?HmgpThreadUnrestrictHandle@@YAXI@Z @ 0x140040FDC (-HmgpThreadUnrestrictHandle@@YAXI@Z.c)
 *     HmgUnlock @ 0x14006E658 (HmgUnlock.c)
 *     HmgSwapLockedHandleContents @ 0x14006E700 (HmgSwapLockedHandleContents.c)
 *     HmgMarkLazyDelete @ 0x14006E930 (HmgMarkLazyDelete.c)
 *     HmgShareLockIgnoreStockBit @ 0x14006F0F0 (HmgShareLockIgnoreStockBit.c)
 *     HmgLockAndModifyHandleType @ 0x14006F600 (HmgLockAndModifyHandleType.c)
 *     HmgShareUnlockRemoveObject @ 0x14006F750 (HmgShareUnlockRemoveObject.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140070FD4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     GreSetSolidBrushLight @ 0x140071A70 (GreSetSolidBrushLight.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14008B640 (--1DCOBJA@@QEAA@XZ.c)
 *     bDeleteSurface @ 0x14008CE40 (bDeleteSurface.c)
 *     EngLockSurface @ 0x14008D090 (EngLockSurface.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgReplaceObject @ 0x1400BD7A0 (HmgReplaceObject.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6A80 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1400C7380 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1400D8050 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     HmgMarkDeletable @ 0x140108810 (HmgMarkDeletable.c)
 *     HmgMarkUndeletable @ 0x14010C3A0 (HmgMarkUndeletable.c)
 *     HmgMarkUnXferable @ 0x140143C10 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x140147960 (HmgMarkXferable.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x14019EA2C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x1401C4D28 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x1401C4E20 (-HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@.c)
 *     ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C4ED4 (-HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEA.c)
 *     ?HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z @ 0x1401C4FCC (-HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z.c)
 *     ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401C5120 (-Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z.c)
 *     HmgFreeFast @ 0x1401C56C0 (HmgFreeFast.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C8050 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D13B8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1498 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1588 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1680 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1760 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HANDLELOCK::~HANDLELOCK(HANDLELOCK *this)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned int v4; // r9d
  __int64 v5; // r10
  unsigned int v6; // r11d
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int v10; // r11d
  __int64 v11; // r10
  _DWORD *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned int v16; // r11d
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // r9d
  __int64 v21; // r10

  if ( *((_DWORD *)this + 2) )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 5672LL);
    v3 = **(unsigned int **)this;
    if ( (unsigned int)v3 >= 0x10000 )
    {
      v4 = (unsigned __int16)v3;
      if ( *(_DWORD *)v2 <= 0x10000u )
      {
        v3 = (unsigned __int16)v3;
      }
      else
      {
        v5 = *(_QWORD *)(v2 + 16);
        v6 = *(_DWORD *)(v5 + 2056);
        if ( (unsigned __int16)v3 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
        {
          v8 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v3 >= v6 )
          {
            v7 = *(_QWORD *)(v5 + 8LL * ((((unsigned __int16)v3 - v6) >> 16) + 1) + 8);
            v4 = -65536 * (((unsigned __int16)v3 - v6) >> 16) - v6 + (unsigned __int16)v3;
          }
          else
          {
            v7 = *(_QWORD *)(v5 + 8);
          }
          v8 = 0LL;
          if ( v4 < *(_DWORD *)(v7 + 20) )
            v8 = *(_QWORD *)v7 + 24LL * v4;
        }
        if ( *(unsigned __int8 *)(v8 + 13) == WORD1(v3) )
          v3 = (unsigned __int16)v3;
      }
    }
    v9 = *(_QWORD *)(v2 + 16);
    v10 = *(_DWORD *)(v9 + 2056);
    if ( (unsigned int)v3 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16)
      || ((unsigned int)v3 >= v10
        ? (v11 = *(_QWORD *)(v9 + 8LL * ((((unsigned int)v3 - v10) >> 16) + 1) + 8),
           v3 = -65536 * (((unsigned int)v3 - v10) >> 16) - v10 + (unsigned int)v3)
        : (v11 = *(_QWORD *)(v9 + 8)),
          (unsigned int)v3 >= *(_DWORD *)(v11 + 20)) )
    {
      v12 = 0LL;
    }
    else
    {
      v12 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * (v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8);
    }
    v13 = (unsigned __int16)*v12 | (*v12 >> 8) & 0xFF0000;
    if ( v13 >= 0x10000 )
    {
      v14 = (unsigned __int16)*v12;
      if ( *(_DWORD *)v2 <= 0x10000u )
      {
        v13 = (unsigned __int16)*v12;
      }
      else
      {
        v15 = *(_QWORD *)(v2 + 16);
        v16 = *(_DWORD *)(v15 + 2056);
        if ( (unsigned __int16)*v12 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
        {
          v18 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)*v12 >= v16 )
          {
            v17 = *(_QWORD *)(v15 + 8LL * ((((unsigned __int16)*v12 - v16) >> 16) + 1) + 8);
            v14 = -65536 * (((unsigned __int16)v13 - v16) >> 16) - v16 + (unsigned __int16)v13;
          }
          else
          {
            v17 = *(_QWORD *)(v15 + 8);
          }
          v18 = 0LL;
          if ( (unsigned int)v14 < *(_DWORD *)(v17 + 20) )
            v18 = *(_QWORD *)v17 + 24 * v14;
        }
        if ( *(unsigned __int8 *)(v18 + 13) == HIWORD(v13) )
          v13 = (unsigned __int16)v13;
      }
    }
    v19 = *(_QWORD *)(v2 + 16);
    v20 = *(_DWORD *)(v19 + 2056);
    if ( v13 < v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
    {
      if ( v13 >= v20 )
      {
        v21 = *(_QWORD *)(v19 + 8LL * (((v13 - v20) >> 16) + 1) + 8);
        v13 += -65536 * ((v13 - v20) >> 16) - v20;
      }
      else
      {
        v21 = *(_QWORD *)(v19 + 8);
      }
      *(_BYTE *)(*(_QWORD *)v21 + 24LL * v13 + 6) = 0;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v13 >> 8)) + 16LL * (unsigned __int8)v13,
        0LL);
      KeLeaveCriticalRegion();
    }
    *((_DWORD *)this + 2) = 0;
    *(_QWORD *)this = 0LL;
    KeLeaveCriticalRegion();
  }
}
