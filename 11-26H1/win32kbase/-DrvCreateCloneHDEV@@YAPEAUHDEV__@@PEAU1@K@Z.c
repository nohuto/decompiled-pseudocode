/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028174 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x140032B00 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400C5180 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1400C7880 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     vEnableSynchronize @ 0x1400C98B4 (vEnableSynchronize.c)
 *     bSpEnableSprites @ 0x1400C98F0 (bSpEnableSprites.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x140190BA4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401975A8 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x14019A264 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1401ED038 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvCreateCloneHDEV(char *a1)
{
  __int64 v2; // rcx
  __int64 SessionState; // rax
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rsi
  int (*v11)(void); // rax
  __int64 v12; // rcx
  int (*v13)(void); // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r8d
  struct _ERESOURCE *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v22[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23[5]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+30h] BYREF
  char *v25; // [rsp+B0h] [rbp+40h] BYREF
  struct _ERESOURCE *v26; // [rsp+B8h] [rbp+48h] BYREF

  WdLogSingleEntry2(4LL, a1, 1LL);
  WdLogGlobalForLineNumber = 20189;
  SessionState = W32GetSessionState(v2);
  v4 = 0LL;
  v25 = a1;
  v5 = *(_QWORD *)(SessionState + 88);
  if ( !a1 )
    return 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v22, (struct PDEVOBJ *)&v25);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v24, a1);
  if ( v24 )
  {
    v10 = PALLOCMEM(2176LL, 1886221383LL, v7, v8);
    if ( v10 )
    {
      v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 24) + 912LL);
      if ( v11 )
      {
        if ( v11() >= 0 && (unsigned int)bSpEnableSprites(v24) )
        {
          v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 24) + 928LL);
          if ( v13 && v13() >= 0 )
            vEnableSynchronize(v24);
          *(_QWORD *)(v10 + 976) = v10 + 544;
          *(_DWORD *)(v10 + 728) = 0;
          *(_DWORD *)(v10 + 720) = 0xFFFFFF;
          v14 = *(_QWORD *)(v10 + 976);
          *(_DWORD *)(v10 + 120) = 0;
          *(_QWORD *)(v14 + 248) = 0LL;
          v15 = HmgShareLock(v5, *(_QWORD *)(v5 + 144), 16, 0);
          HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>((__int64)v23, v15);
          v16 = v24;
          *(_QWORD *)(v24 + 1592) = 0LL;
          *(_QWORD *)(v16 + 1568) = 0LL;
          *(_DWORD *)(v16 + 1576) = 0;
          EBRUSHOBJ::vInitBrush(
            (unsigned int *)(v24 + 1560),
            v10,
            v23[0],
            *(_QWORD *)(v5 + 3872),
            *(_QWORD *)(*(_QWORD *)(v24 + 2544) + 128LL),
            *(_QWORD *)(v24 + 2544),
            1u);
          HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>((__int64)v23);
          SEMOBJ<19>::SEMOBJ<19>(&v26, (struct _ERESOURCE **)v5);
          v18 = v26;
          --*((_DWORD *)a1 + 3);
          if ( v18 )
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              (__int64)v18,
              v17);
          PDEVOBJ::vUnreferencePdev((HDEV *)&v25, (struct Gre::Base::SESSION_GLOBALS *)v5);
          PDEVOBJ::bDisabled((PDEVOBJ *)&v24, *((_DWORD *)a1 + 10) & 0x400);
          v4 = v24;
          goto LABEL_15;
        }
      }
    }
    PDEVOBJ::vClearSurface((PDEVOBJ *)&v24);
    PDEVOBJ::vUnreferencePdev((HDEV *)&v24, (struct Gre::Base::SESSION_GLOBALS *)v5);
    if ( v10 )
LABEL_15:
      GreDeleteFastMutex((char *)v10, v19, v20, v21);
  }
  WdLogSingleEntry1(5LL, v4);
  WdLogGlobalForLineNumber = 20300;
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v22);
  return v4;
}
