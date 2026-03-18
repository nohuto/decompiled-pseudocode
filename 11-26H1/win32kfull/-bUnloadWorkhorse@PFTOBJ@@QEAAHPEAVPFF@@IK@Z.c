/*
 * XREFs of ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4
 * Callers:
 *     vCleanupPrivateFonts @ 0x1400FD9B0 (vCleanupPrivateFonts.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x140105ED0 (HDEV_DeleteRfontsAndUnloadDeviceFonts.c)
 *     ?GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401062B4 (-GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x14024FF90 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x14026C658 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x14028F80C (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     PFF_bUnloadWorkhorseForDCOBJ @ 0x140329980 (PFF_bUnloadWorkhorseForDCOBJ.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x140329BC8 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     bKillPFFOBJ @ 0x1400D38E8 (bKillPFFOBJ.c)
 *     prfntKillList @ 0x1400F60E8 (prfntKillList.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x140101320 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140104D2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x140105B38 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z @ 0x140106418 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140166AC8 (--$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x140173DA8 (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x14021B928 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     vKillRFONTList @ 0x140327774 (vKillRFONTList.c)
 *     ?vRemovePFF@PFF@@QEAAXXZ @ 0x140327A04 (-vRemovePFF@PFF@@QEAAXXZ.c)
 */

_BOOL8 __fastcall PFTOBJ::bUnloadWorkhorse(PFTOBJ *this, struct PFF *a2, unsigned int a3, int a4)
{
  unsigned int v5; // r15d
  struct PFF *v6; // rbx
  BOOL v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r13
  int v12; // eax
  struct tagPvtData *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  struct PFF *v16; // r14
  int v17; // edi
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  int *v22[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+60h] [rbp-20h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v27; // [rsp+D0h] [rbp+50h] BYREF

  v27 = a3;
  v5 = a3;
  v6 = a2;
  v8 = 0;
  v11 = *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96);
  if ( !v6 )
    goto LABEL_28;
  v12 = *((_DWORD *)v6 + 13);
  v13 = 0LL;
  v23[0] = v6;
  if ( (v12 & 1) != 0 )
  {
    v8 = 1;
    if ( *((_DWORD *)v6 + 14) || *((_DWORD *)v6 + 15) || *((_QWORD *)v6 + 19) || *((_DWORD *)v6 + 16) )
      goto LABEL_28;
  }
  else
  {
    if ( PFTOBJ::bIsPrivatePFT(this, v9, v10) )
    {
      v13 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v23);
      if ( !v13 )
        goto LABEL_28;
    }
    v26 = 0;
    v8 = 1;
    if ( !(unsigned int)PFFOBJ::bDeleteLoadRef((PFFOBJ *)v23, a4, v13, &v26) )
    {
      if ( PFTOBJ::bIsPrivatePFT(this, v14, v15) )
        v8 = v26 == 0;
      goto LABEL_28;
    }
    PFFOBJ::vRemoveHash((PFFOBJ *)v23, v14, v15);
    v16 = 0LL;
    if ( !*((_DWORD *)v6 + 16) )
      v16 = v6;
    v17 = *((_DWORD *)v6 + 13) & 0x200;
    if ( v5 == -1 )
    {
      PUBLIC_PFTOBJ::pPFFGet(
        this,
        *((const unsigned __int16 **)v6 + 3),
        *((_DWORD *)v6 + 8),
        *((_DWORD *)v6 + 9),
        *((struct tagDESIGNVECTOR **)v6 + 5),
        *((_DWORD *)v6 + 12),
        &v27,
        0);
      v5 = v27;
    }
    if ( *(struct PFF **)(*(_QWORD *)this + 8LL * v5 + 40) == v6 )
      *(_QWORD *)(*(_QWORD *)this + 8LL * v5 + 40) = *((_QWORD *)v6 + 1);
    PFF::vRemovePFF(v6);
    v18 = *(_QWORD *)this;
    if ( !v17 )
      ++*(_DWORD *)(v18 + 32);
    --*(_DWORD *)(v18 + 28);
    v6 = v16;
    v8 = 1;
    if ( !v16 )
    {
LABEL_28:
      GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        *(_QWORD *)(v11 + 20320));
      return v8;
    }
  }
  v23[0] = v6;
  v22[1] = (int *)v22;
  v22[0] = (int *)v22;
  prfntKillList(v23, v22, v10);
  if ( (int **)v22[0] == v22 )
  {
    v24 = 0LL;
    v25 = 0LL;
    v19 = bKillPFFOBJ((PFFOBJ *)v23, (struct PFFCLEANUP *)&v24);
    v20 = *(_QWORD *)(v11 + 20320);
    if ( v19 )
    {
      GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v20);
      vCleanupFontFile((struct PFFCLEANUP *)&v24);
    }
    else
    {
      GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v20);
    }
  }
  else
  {
    GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      *(_QWORD *)(v11 + 20320));
    vKillRFONTList((PFFOBJ *)v23);
  }
  return 1;
}
