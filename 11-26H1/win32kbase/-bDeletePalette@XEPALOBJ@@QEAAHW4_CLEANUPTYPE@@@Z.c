/*
 * XREFs of ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC
 * Callers:
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1400C4910 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1400C57B0 (NtGdiDeleteObjectApp.c)
 *     vUnreferencePdevWorker @ 0x1400C5E70 (vUnreferencePdevWorker.c)
 *     bDeletePalette @ 0x14017D940 (bDeletePalette.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401EDE88 (-bGarbageCollect@XEPALOBJ2@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z @ 0x14001C700 (-TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001C74C (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     XEPALOBJ_FreePaletteMemory @ 0x140043F50 (XEPALOBJ_FreePaletteMemory.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1400C4910 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     GreGetObjectOwner @ 0x1400C5980 (GreGetObjectOwner.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1400C5A40 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall XEPALOBJ::bDeletePalette(XEPALOBJ *a1, int a2)
{
  __int64 SessionState; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // r12
  unsigned int *v12; // r15
  __int64 v13; // rax
  struct OBJECT *v14; // r14
  __int64 v15; // rdx
  int v16; // r8d
  bool v17; // zf
  __int64 v18; // rdx
  char *v19; // rcx
  _QWORD *v20; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  _QWORD *v25; // rcx
  unsigned int *v26; // [rsp+40h] [rbp-20h] BYREF
  int v27; // [rsp+48h] [rbp-18h]
  char v28; // [rsp+4Dh] [rbp-13h]
  __int64 v29; // [rsp+50h] [rbp-10h]
  HSEMAPHORE v30; // [rsp+90h] [rbp+30h] BYREF

  SessionState = W32GetSessionState(a1);
  v7 = *(_QWORD *)a1;
  v8 = 0;
  v9 = *(_QWORD *)(SessionState + 88);
  if ( (*(_QWORD *)a1 == *(_QWORD *)(v9 + 3872) || v7 == *(_QWORD *)(v9 + 3904)) && !*(_DWORD *)(v9 + 3112) )
    return 1LL;
  if ( (*(_DWORD *)(v7 + 24) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(v7 + 56) )
      return 0LL;
    XEPALOBJ::vMakeNoXlate(a1);
  }
  LOBYTE(v5) = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
      LOBYTE(v5) = HmgRemoveObjectImpl((unsigned int *)v9, **(_QWORD **)a1, 0, 1, 1, 8, 0LL) != 0;
    v17 = (_BYTE)v5 == 0;
    goto LABEL_12;
  }
  v10 = *(__int64 **)a1;
  v30 = (HSEMAPHORE)(*(_QWORD *)v9 + 1512LL);
  v11 = *v10;
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v7, v30);
  HANDLELOCK::HANDLELOCK((__int64 *)&v26, (unsigned int *)v9, v11, 0);
  if ( v27 )
  {
    v12 = v26;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v29 + 8) + 96LL))(*(_QWORD *)(v29 + 8), *v26);
    v14 = (struct OBJECT *)v13;
    if ( *((_BYTE *)v12 + 14) == 8 && *((_WORD *)v12 + 6) == WORD1(v11) )
    {
      if ( !*(_WORD *)(v13 + 12) && *(_DWORD *)(v13 + 8) == 1 && (*((_BYTE *)v12 + 15) & 1) == 0 )
      {
        v24 = HmgPentryFromPobj(v9);
        TrackHmgrReferenceDecrement((struct Gre::Base::SESSION_GLOBALS *)v9, *(_BYTE *)(v24 + 14), v14);
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v26);
        goto LABEL_11;
      }
    }
    else
    {
      v28 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v26);
  }
  v14 = 0LL;
LABEL_11:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v26);
  SEMOBJ<20>::vUnlock(&v30, v15, v16);
  v17 = v14 == 0LL;
LABEL_12:
  v18 = *(_QWORD *)a1;
  if ( v17 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v9 + 8) + 8LL))(*(_QWORD *)(v9 + 8), v18);
    if ( !a2 )
    {
      v23 = *(_DWORD *)(v22 + 8) & 0xFFFFFFFE;
      if ( v23 )
      {
        if ( v23 != -2147483630 )
          *(_WORD *)(*(_QWORD *)a1 + 14LL) |= 0x10u;
      }
    }
  }
  else
  {
    v19 = *(char **)(v18 + 104);
    if ( v19 )
    {
      if ( v19 != *(char **)(v9 + 3864) )
        GreDeleteFastMutex(v19, v18, v5, v6);
      *(_QWORD *)(*(_QWORD *)a1 + 104LL) = 0LL;
    }
    if ( !*(_DWORD *)(v9 + 3112) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 )
      {
        v25 = *(_QWORD **)(*(_QWORD *)a1 + 48LL);
        if ( v25 )
        {
          v30 = *(HSEMAPHORE *)(*(_QWORD *)a1 + 48LL);
          if ( (unsigned int)GreGetObjectOwner(*v25, 8LL) != -2147483646 )
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v30);
        }
      }
      v20 = *(_QWORD **)(*(_QWORD *)a1 + 120LL);
      if ( *(_QWORD **)a1 != v20 )
      {
        v30 = *(HSEMAPHORE *)(*(_QWORD *)a1 + 120LL);
        if ( (unsigned int)GreGetObjectOwner(*v20, 8LL) != -2147483646 )
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v30);
      }
    }
    XEPALOBJ_FreePaletteMemory((__int64)a1, v18, v5, v6);
    return 1;
  }
  return v8;
}
