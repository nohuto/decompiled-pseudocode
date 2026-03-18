/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690
 * Callers:
 *     EngCreatePalette @ 0x1400C3940 (EngCreatePalette.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140152360 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1401A50F4 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     GreCreatePalette @ 0x1401B9770 (GreCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401F1028 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     bInitPALOBJ @ 0x1402F0008 (bInitPALOBJ.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140019490 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E4C (-TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z @ 0x14001C700 (-TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001C74C (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     XEPALOBJ_FreePaletteMemory @ 0x140043F50 (XEPALOBJ_FreePaletteMemory.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1400C4910 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1400C497C (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(__int64 **this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 SessionState; // rax
  __int64 *v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // edx
  unsigned int *v8; // r14
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v9; // r8
  unsigned int v10; // edx
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int *v15; // r15
  __int64 v16; // rax
  struct OBJECT *v17; // rbx
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rcx
  __int64 v24; // rax
  unsigned int *v25; // [rsp+20h] [rbp-20h] BYREF
  int v26; // [rsp+28h] [rbp-18h]
  __int16 v27; // [rsp+2Ch] [rbp-14h]
  __int64 v28; // [rsp+30h] [rbp-10h]
  HSEMAPHORE v29; // [rsp+70h] [rbp+30h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState(this) + 88);
  if ( !*this )
    return;
  if ( *((_DWORD *)this + 2) )
  {
    SessionState = W32GetSessionState(v2);
    v5 = *this;
    v25 = 0LL;
    v26 = 0;
    v6 = *(_QWORD *)(SessionState + 88);
    v7 = (unsigned __int16)*(_DWORD *)v5 | (*(_DWORD *)v5 >> 8) & 0xFF0000;
    v27 = 0;
    v28 = v6;
    HANDLELOCK::vLockHandle((__int64 *)&v25, v7, 1);
    if ( !v26 )
    {
      HmgPentryFromPobj(v6);
      goto LABEL_9;
    }
    v8 = v25;
    switch ( *((_BYTE *)v25 + 14) )
    {
      case 4:
        v9 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v5[14];
        v10 = 2;
        break;
      case 5:
        v9 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v5[85];
        v10 = 3;
        break;
      case 0x10:
        v9 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v5[17];
        v10 = 0;
        break;
      default:
        goto LABEL_8;
    }
    TrackObjectReferenceDecrement(v6, v10, v9);
LABEL_8:
    --*((_DWORD *)v5 + 2);
    v11 = *(__int64 **)(v28 + 8);
    v12 = *v11;
    v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v11 + 96))(v11, *v8);
    (*(void (__fastcall **)(__int64 *, __int64))(v12 + 48))(v11, v13);
    KeLeaveCriticalRegion();
LABEL_9:
    *this = 0LL;
    return;
  }
  v14 = **this;
  v29 = (HSEMAPHORE)(*(_QWORD *)v3 + 1512LL);
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v2, v29);
  HANDLELOCK::HANDLELOCK((__int64 *)&v25, (unsigned int *)v3, v14, 4);
  if ( !v26 )
    goto LABEL_16;
  v15 = v25;
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v28 + 8) + 96LL))(*(_QWORD *)(v28 + 8), *v25);
  v17 = (struct OBJECT *)v16;
  if ( *((_BYTE *)v15 + 14) != 8 || *((_WORD *)v15 + 6) != WORD1(v14) )
  {
    HIBYTE(v27) = 1;
LABEL_15:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
LABEL_16:
    v17 = 0LL;
    goto LABEL_17;
  }
  if ( *(_WORD *)(v16 + 12) || *(_DWORD *)(v16 + 8) != 1 )
    goto LABEL_15;
  v24 = HmgPentryFromPobj(v3);
  TrackHmgrReferenceDecrement((struct Gre::Base::SESSION_GLOBALS *)v3, *(_BYTE *)(v24 + 14), v17);
  HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v25);
LABEL_17:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v25);
  SEMOBJ<20>::vUnlock(&v29, v18, v19);
  if ( v17 )
  {
    if ( *this != (__int64 *)(*this)[15] )
    {
      v29 = (HSEMAPHORE)(*this)[15];
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v29);
    }
    v23 = (char *)(*this)[13];
    if ( v23 )
    {
      if ( v23 != *(char **)(v3 + 3864) )
        GreDeleteFastMutex(v23, v20, v21, v22);
      (*this)[13] = 0LL;
    }
    XEPALOBJ_FreePaletteMemory((__int64)this, v20, v21, v22);
  }
  else
  {
    XEPALOBJ::DecShareRefCountAndInvalidatePalette((XEPALOBJ *)this);
  }
}
