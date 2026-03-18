/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E2F4 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1400725DC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x140086360 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140086410 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1400912D0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     vEnableSynchronize @ 0x140093C88 (vEnableSynchronize.c)
 *     bSpEnableSprites @ 0x140093CC4 (bSpEnableSprites.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019E28C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1401C3EE4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401C9158 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401C919C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvCreateCloneHDEV(HDEV a1)
{
  __int64 v2; // rcx
  __int64 SessionState; // rax
  __int64 v4; // rdi
  __int64 v5; // r15
  unsigned int v6; // r8d
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  int (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int (*v14)(void); // rax
  __int64 v15; // rax
  struct _ERESOURCE *v16; // rdx
  _BYTE v18[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19[6]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+30h] BYREF
  struct _ERESOURCE *v21; // [rsp+C0h] [rbp+40h] BYREF
  HDEV v22; // [rsp+C8h] [rbp+48h] BYREF

  WdLogSingleEntry2(4LL, a1, 1LL);
  WdLogGlobalForLineNumber = 21353;
  SessionState = W32GetSessionState(v2);
  v22 = a1;
  v4 = 0LL;
  v5 = *(_QWORD *)(SessionState + 88);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v18, (struct PDEVOBJ *)&v22);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v20, a1, v6);
  v7 = v20;
  if ( v20 )
  {
    v10 = PALLOCMEM(2128LL, 1886221383LL);
    if ( v10 )
    {
      v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 24) + 912LL);
      if ( v11 )
      {
        if ( v11() >= 0 && (unsigned int)bSpEnableSprites(v7) )
        {
          v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 24) + 928LL);
          if ( v14 && v14() >= 0 )
            vEnableSynchronize(v7);
          *(_QWORD *)(v10 + 976) = v10 + 544;
          *(_DWORD *)(v10 + 728) = 0;
          *(_DWORD *)(*(_QWORD *)(v10 + 976) + 176LL) = 0xFFFFFF;
          *(_DWORD *)(v10 + 120) = 0;
          *(_QWORD *)(*(_QWORD *)(v10 + 976) + 248LL) = 0LL;
          v15 = HmgShareLockCheck(*(_QWORD *)(v5 + 56), 16);
          HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v19, v15);
          *(_QWORD *)(v7 + 1592) = 0LL;
          *(_QWORD *)(v7 + 1568) = 0LL;
          *(_DWORD *)(v7 + 1576) = 0;
          EBRUSHOBJ::vInitBrush(
            (unsigned int *)(v7 + 1560),
            v10,
            v19[0],
            *(_QWORD *)(v5 + 3768),
            *(_QWORD *)(*(_QWORD *)(v7 + 2544) + 128LL),
            *(_QWORD *)(v7 + 2544),
            1u);
          SEMOBJ<19>::SEMOBJ<19>(&v21, (struct _ERESOURCE **)v5);
          v16 = v21;
          --*((_DWORD *)a1 + 3);
          if ( v16 )
          {
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              (__int64)v16);
            v21 = 0LL;
          }
          PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v22);
          PDEVOBJ::bDisabled((PDEVOBJ *)&v20, (_DWORD)a1[10] & 0x400);
          v4 = v7;
          HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v19);
          goto LABEL_13;
        }
      }
    }
    PDEVOBJ::vClearSurface((PDEVOBJ *)&v20);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v20);
    if ( v10 )
LABEL_13:
      GreDeleteFastMutex((char *)v10);
  }
  WdLogSingleEntry1(5LL, v4);
  WdLogGlobalForLineNumber = 21457;
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v18);
  return v4;
}
