/*
 * XREFs of bDeleteBrush @ 0x140085F50
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x140013640 (NtGdiDeleteObjectApp.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x140085EE8 (-vCleanupBrushes@@YAXK@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x140087560 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C8050 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D13B8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x14000CA60 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     bPEBCacheHandle @ 0x140016060 (bPEBCacheHandle.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x140019EC0 (HmgRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x14001B29C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x14006EA20 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140071190 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400715A4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140075AB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     bDeleteSurface @ 0x14008CE40 (bDeleteSurface.c)
 *     HmgFreeObjectAttr @ 0x14008E9D0 (HmgFreeObjectAttr.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140091E00 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@XZ @ 0x1400C8424 (--0HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400CFBA8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x14019E190 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x14019FBE8 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2, int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // r13d
  int v7; // esi
  _DWORD *v8; // r12
  unsigned int *v9; // r12
  __int64 v10; // rax
  int v11; // edx
  int v12; // eax
  char *v13; // rcx
  __int64 v14; // rcx
  int v15; // r8d
  volatile signed __int32 *v16; // rcx
  int v17; // r8d
  unsigned int *v19; // [rsp+40h] [rbp-98h] BYREF
  int v20; // [rsp+48h] [rbp-90h]
  char v21; // [rsp+4Dh] [rbp-8Bh]
  __int64 v22; // [rsp+50h] [rbp-88h]
  _DWORD *v23; // [rsp+60h] [rbp-78h]
  struct OBJECT *EntryObject; // [rsp+68h] [rbp-70h]
  _QWORD v25[13]; // [rsp+70h] [rbp-68h] BYREF

  v5 = 0LL;
  v6 = 1;
  v7 = 1;
  v8 = 0LL;
  if ( !a2 )
  {
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v19);
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v19, a1, 0x10u);
    if ( !v20 )
    {
LABEL_9:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v19);
      goto LABEL_10;
    }
    v9 = v19;
    EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v22 + 5672), *v19);
    v8 = (_DWORD *)GreDecodeUserModePointer(*((void **)v9 + 2));
    v23 = v8;
    if ( (unsigned int)HANDLELOCK::ShareCount((HANDLELOCK *)&v19) )
    {
      **((_DWORD **)EntryObject + 6) = 2;
      v21 = 1;
    }
    else
    {
      if ( !v8 )
        goto LABEL_6;
      if ( (*v8 & 1) == 0 )
      {
        v11 = *((_DWORD *)EntryObject + 10) & 0x400;
        if ( (*((_DWORD *)EntryObject + 10) & 0x10) != 0
          && (!v11 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
          && (unsigned int)bPEBCacheHandle(v11 != 0, v8, v19, (HANDLELOCK *)&v19, 0LL) )
        {
          v7 = 0;
        }
        v6 = v7;
        goto LABEL_6;
      }
    }
    v7 = 0;
LABEL_6:
    if ( v6 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v19);
    v6 = 1;
    goto LABEL_9;
  }
LABEL_10:
  if ( !v7 )
    return v6;
  if ( a3 )
  {
    if ( a3 != 1 )
      goto LABEL_24;
    v10 = HmgRemoveObjectImpl(a1, 0, 1, 2, 16, 0LL);
  }
  else
  {
    v10 = HmgRemoveObject((__int64)a1, 0, 0, 0, 16, 0LL);
  }
  v5 = v10;
LABEL_24:
  if ( v5 )
  {
    v12 = *(_DWORD *)(v5 + 40);
    if ( (v12 & 0x400) != 0 )
    {
      v13 = *(char **)(v5 + 152);
      if ( v13 )
      {
        if ( (v12 & 0x4000) == 0 )
          GreDeleteFastMutex(v13);
      }
    }
    v14 = *(_QWORD *)(v5 + 24);
    if ( v14 )
      bDeleteSurface(v14);
    if ( *(_DWORD *)(v5 + 100) != -1 )
    {
      v15 = *(_DWORD *)(v5 + 40);
      if ( v15 >= 0 )
      {
        v16 = *(volatile signed __int32 **)(v5 + 120);
        v17 = v15 & 0x40000000;
        if ( _InterlockedExchangeAdd(v16, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v16, v17 != 0);
        *(_QWORD *)(v5 + 120) = 0LL;
      }
    }
    if ( (*(_DWORD *)(v5 + 40) & 0x80u) != 0 )
      BRUSH::vDeleteIcmDIBs((BRUSH *)v5);
    if ( *(_QWORD *)(v5 + 136) )
      ReleaseReferenceCountedObjectHandle(2LL);
    FreeBrushMemory((_DWORD *)v5);
    if ( !a2 && v8 )
      HmgFreeObjectAttr(v8);
  }
  else
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v25, (__int64)a1);
    if ( !v25[0] || (*(_DWORD *)(v25[0] + 40LL) & 0x200) == 0 )
      v6 = 0;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v25);
  }
  return v6;
}
