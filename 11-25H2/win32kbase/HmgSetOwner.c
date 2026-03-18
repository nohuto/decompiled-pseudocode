/*
 * XREFs of HmgSetOwner @ 0x140015EC0
 * Callers:
 *     SetOrCreateRectRgnIndirectPublic @ 0x140014B10 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRegionOwner @ 0x140015E60 (GreSetRegionOwner.c)
 *     GreMakeBitmapNonStock @ 0x14006F4E0 (GreMakeBitmapNonStock.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140085920 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     CreateEmptyRgnPublic @ 0x1400899B0 (CreateEmptyRgnPublic.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x14008BE60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     GreSetBitmapOwner @ 0x14008CDB0 (GreSetBitmapOwner.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x14010C320 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x140137160 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     GreSetPaletteOwner @ 0x1401C6EB0 (GreSetPaletteOwner.c)
 *     bInitPALOBJ @ 0x1402E8008 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1402E8494 (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1402E9AB8 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402EA240 (bInitBrush.c)
 *     bInitICM @ 0x1402EA32C (bInitICM.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140018960 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x14003DED8 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     HmgIncProcessHandleCountEx @ 0x1400D9490 (HmgIncProcessHandleCountEx.c)
 *     UMPDGetThreadClientPID @ 0x14013974C (UMPDGetThreadClientPID.c)
 *     HmgIsGarbageCollectibleType @ 0x140177280 (HmgIsGarbageCollectibleType.c)
 *     HmgDecProcessHandleCount @ 0x140179250 (HmgDecProcessHandleCount.c)
 */

__int64 __fastcall HmgSetOwner(__int64 a1, int a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v6; // r15d
  int v7; // r14d
  __int64 v8; // rsi
  struct OBJECT *EntryObject; // rdi
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  int v16; // [rsp+28h] [rbp-18h]
  char v17; // [rsp+2Dh] [rbp-13h]
  __int64 v18; // [rsp+30h] [rbp-10h]
  char v19; // [rsp+88h] [rbp+48h] BYREF

  LODWORD(v4) = a2;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  SEMOBJ<20>::SEMOBJ<20>(&v19);
  HANDLELOCK::HANDLELOCK(&v15, a1, 1LL);
  if ( v16 )
  {
    v8 = v15;
    if ( *(_BYTE *)(v15 + 14) == a3 && *(_WORD *)(v15 + 12) == WORD1(a1) )
    {
      EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v18 + 5672), *(_DWORD *)v15);
      CurrentThread = GreGetCurrentThread();
      if ( CurrentThread && *((_QWORD *)CurrentThread + 8) && (_DWORD)v4 )
        v7 = 1;
      if ( !*((_WORD *)EntryObject + 6) )
        goto LABEL_14;
      if ( *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() || v7 )
      {
        v8 = v15;
LABEL_14:
        v6 = 1;
        v11 = *(_DWORD *)(v8 + 8) & 0xFFFFFFFE;
        if ( v7 )
          LODWORD(v4) = UMPDGetThreadClientPID(CurrentThread, 1LL);
        if ( v11 != (_DWORD)v4 )
        {
          v6 = HmgIncProcessHandleCountEx((unsigned int)v4, 0LL);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v11);
            HANDLELOCK::Pid((HANDLELOCK *)&v15, v4);
            if ( (_DWORD)v4 )
            {
              if ( (_DWORD)v4 != -2147483630 )
              {
                LOBYTE(v12) = a3;
                if ( (unsigned int)HmgIsGarbageCollectibleType(v12) )
                {
                  if ( *((_WORD *)EntryObject + 6) || *((_DWORD *)EntryObject + 2) )
                  {
                    v13 = *((_WORD *)EntryObject + 7);
                    if ( (v13 & 0x40) == 0 )
                      *((_WORD *)EntryObject + 7) = v13 | 0x40;
                  }
                }
              }
            }
          }
        }
        goto LABEL_26;
      }
    }
    v17 = 1;
LABEL_26:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v15);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v15);
  SEMOBJ<20>::vUnlock(&v19);
  return v6;
}
