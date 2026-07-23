/*
 * XREFs of AnFwDisplayFade @ 0x140C58BA0
 * Callers:
 *     BgDisplayFade @ 0x140C58B58 (BgDisplayFade.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     BgpGxConvertRectangleEx @ 0x14048B3C0 (BgpGxConvertRectangleEx.c)
 *     BgpGetBitsPerPixel @ 0x1404B98EC (BgpGetBitsPerPixel.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F1AFC (BgpFwQueryPerformanceCounter.c)
 *     BgpGxRectangleSize @ 0x1404F377C (BgpGxRectangleSize.c)
 *     GxpBitsToBytes @ 0x1404F716C (GxpBitsToBytes.c)
 *     BgpClearScreen @ 0x14071A834 (BgpClearScreen.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140C553CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxParseBitmap @ 0x140C554E8 (BgpGxParseBitmap.c)
 *     BgpTxtGetRegionContext @ 0x140C59234 (BgpTxtGetRegionContext.c)
 *     AnFwpDisableProgressTimer @ 0x140C5932C (AnFwpDisableProgressTimer.c)
 *     BgpGxReadRectangle @ 0x140C59390 (BgpGxReadRectangle.c)
 *     BgpGxRectangleDestroy @ 0x140C59414 (BgpGxRectangleDestroy.c)
 *     BgpGxFindSubRectangle @ 0x140C5943C (BgpGxFindSubRectangle.c)
 *     BgpGxRectangleCreate @ 0x140C59640 (BgpGxRectangleCreate.c)
 */

__int64 AnFwDisplayFade()
{
  __int64 v0; // rdi
  int *v1; // r12
  int *v2; // r13
  __int64 v3; // rsi
  int SubRectangle; // r14d
  unsigned int v5; // r15d
  __int64 RegionContext; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // esi
  LARGE_INTEGER v10; // r9
  int v11; // eax
  int v12; // r8d
  int v13; // eax
  int v14; // eax
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  ULONG v17; // eax
  unsigned int v18; // esi
  ULONG v19; // r11d
  int v20; // eax
  int v21; // eax
  __int64 v22; // rsi
  int Blink_high; // edi
  int v24; // eax
  unsigned int v25; // r14d
  unsigned int v26; // edi
  __int64 Memory; // rax
  __int64 v28; // rax
  _QWORD *v29; // rsi
  __int64 v30; // r15
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  unsigned int v38; // edx
  int *v39; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v40; // [rsp+38h] [rbp-51h]
  unsigned int BitsPerPixel; // [rsp+3Ch] [rbp-4Dh]
  __int64 v42; // [rsp+40h] [rbp-49h] BYREF
  int *v43; // [rsp+48h] [rbp-41h]
  int *v44; // [rsp+50h] [rbp-39h] BYREF
  __int64 v45; // [rsp+58h] [rbp-31h] BYREF
  __int64 v46; // [rsp+60h] [rbp-29h] BYREF
  int v47; // [rsp+68h] [rbp-21h]
  __int64 v48; // [rsp+70h] [rbp-19h] BYREF
  int *v49; // [rsp+78h] [rbp-11h] BYREF
  int *v50; // [rsp+80h] [rbp-9h] BYREF
  __int64 v51; // [rsp+88h] [rbp-1h]
  _OWORD v52[5]; // [rsp+90h] [rbp+7h] BYREF
  int v53; // [rsp+F0h] [rbp+67h] BYREF
  char v54; // [rsp+F8h] [rbp+6Fh]
  char v55; // [rsp+100h] [rbp+77h]
  char v56; // [rsp+108h] [rbp+7Fh]

  LOBYTE(v53) = 0;
  v0 = 0LL;
  v46 = 0LL;
  v1 = 0LL;
  v47 = 0;
  v2 = 0LL;
  v42 = 0LL;
  v3 = 0LL;
  v44 = 0LL;
  v48 = 0LL;
  v51 = 0LL;
  SubRectangle = 0;
  v40 = 0;
  v5 = 0;
  v43 = 0LL;
  v49 = 0LL;
  v39 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  memset(v52, 0, 32);
  if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x2000) != 0 )
    return (unsigned int)SubRectangle;
  if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x200000) == 0 )
  {
    RegionContext = BgpTxtGetRegionContext(gLoadedDiffHivesLock.NpxState);
    v7 = BgpTxtGetRegionContext(gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink);
    v8 = v7;
    if ( !RegionContext || !v7 )
    {
LABEL_31:
      v3 = v45;
      goto LABEL_32;
    }
    xmmword_140E0F020 = *(_OWORD *)RegionContext;
    xmmword_140E0F030 = *(_OWORD *)(RegionContext + 16);
    dword_140E0F040 = *(_DWORD *)(RegionContext + 32);
    xmmword_140E0F060 = *(_OWORD *)v7;
    xmmword_140E0F070 = *(_OWORD *)(v7 + 16);
    dword_140E0F080 = *(_DWORD *)(v7 + 32);
    BgpFwFreeMemory(RegionContext);
    BgpFwFreeMemory(v8);
    AnFwpDisableProgressTimer();
    AnFwDisableBackgroundUpdateTimer();
    v54 = 0;
    v55 = 0;
    BitsPerPixel = BgpGetBitsPerPixel();
    v9 = BitsPerPixel;
    *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorSummary = BgpFwQueryPerformanceCounter(0LL);
    qword_140E651B8 = *(_QWORD *)&WheapPfaLock.PriorityFloorSummary;
    if ( !gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink )
    {
      v56 = 1;
LABEL_62:
      LODWORD(v39) = v5;
      v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))BgpGxReadRectangle)(
              &v49,
              &xmmword_140E0F020,
              (char *)&xmmword_140E0F020 + 8,
              (LARGE_INTEGER)v10.QuadPart);
      v0 = (__int64)v49;
      SubRectangle = v34;
      if ( v34 < 0 )
        goto LABEL_26;
      v35 = *v49;
      v36 = v49[1];
      v43 = v49;
      v37 = BgpGxRectangleSize(v35, v36, v9);
      v5 = (_DWORD)v39 + 2 * (((v37 + 15) & 0xFFFFFFF0) + 32) + ((v37 + 15) & 0xFFFFFFF0) + 32;
LABEL_13:
      LODWORD(v39) = v5;
      if ( !v55 )
      {
        v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))BgpGxReadRectangle)(
                &v50,
                &xmmword_140E0F060,
                (char *)&xmmword_140E0F060 + 8,
                (LARGE_INTEGER)v10.QuadPart);
        v2 = v50;
        SubRectangle = v20;
        if ( v20 < 0 )
          goto LABEL_26;
        v21 = BgpGxRectangleSize(*v50, v50[1], v9);
        v5 = (_DWORD)v39 + 2 * (((v21 + 15) & 0xFFFFFFF0) + 32) + ((v21 + 15) & 0xFFFFFFF0) + 32;
      }
      v22 = *(_QWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[172];
      Blink_high = HIDWORD(gLoadedDiffHivesLock.MutantListHead.Blink);
      v39 = *(int **)&gLoadedDiffHivesLock.WaitBlockFill11[172];
      if ( !v56 )
      {
        SubRectangle = BgpGxFindSubRectangle(
                         (_DWORD)v1,
                         HIDWORD(gLoadedDiffHivesLock.MutantListHead.Blink),
                         (unsigned int)&v44,
                         (unsigned int)&v42,
                         (__int64)&v53);
        if ( SubRectangle >= 0 )
        {
          v32 = v40;
          *((_QWORD *)v52 + v40) = v1;
          v40 = v32 + 1;
          if ( (_BYTE)v53 )
          {
            v56 = 1;
            v1 = 0LL;
          }
          else
          {
            LODWORD(v39) = v42 + (_DWORD)v39;
            HIDWORD(v39) += HIDWORD(v42);
            v22 = (__int64)v39;
            v1 = v44;
          }
        }
      }
      if ( !v54 )
      {
        SubRectangle = BgpGxFindSubRectangle(
                         (_DWORD)v43,
                         Blink_high,
                         (unsigned int)&v44,
                         (unsigned int)&v42,
                         (__int64)&v53);
        if ( SubRectangle >= 0 )
        {
          v38 = v40;
          *((_QWORD *)v52 + v40) = v43;
          v40 = v38 + 1;
          if ( (_BYTE)v53 )
          {
            v54 = 1;
            v43 = 0LL;
          }
          else
          {
            v43 = v44;
            LODWORD(xmmword_140E0F020) = v42 + xmmword_140E0F020;
            DWORD1(xmmword_140E0F020) += HIDWORD(v42);
          }
        }
      }
      if ( !v55 )
      {
        SubRectangle = BgpGxFindSubRectangle(
                         (_DWORD)v2,
                         Blink_high,
                         (unsigned int)&v44,
                         (unsigned int)&v42,
                         (__int64)&v53);
        if ( SubRectangle >= 0 )
        {
          v33 = v40;
          *((_QWORD *)v52 + v40) = v2;
          v40 = v33 + 1;
          if ( (_BYTE)v53 )
          {
            v55 = 1;
            v2 = 0LL;
          }
          else
          {
            LODWORD(xmmword_140E0F060) = v42 + xmmword_140E0F060;
            DWORD1(xmmword_140E0F060) += HIDWORD(v42);
            v2 = v44;
          }
        }
      }
      if ( !v56 )
      {
        v24 = v1[1];
        v25 = BitsPerPixel;
        v53 = *v1;
        LODWORD(v39) = v24;
        v26 = GxpBitsToBytes(BitsPerPixel * v24 * v53);
        Memory = BgpFwAllocateMemory(v26 + 72);
        if ( !Memory )
        {
          v0 = (__int64)v43;
          SubRectangle = -1073741801;
          goto LABEL_26;
        }
        *(_DWORD *)Memory = v53;
        *(_DWORD *)(Memory + 4) = (_DWORD)v39;
        *(_DWORD *)(Memory + 8) = v25;
        SubRectangle = 0;
        *(_QWORD *)(Memory + 24) = Memory + 72;
        *(_DWORD *)(Memory + 16) = 0;
        *(_DWORD *)(Memory + 12) = v26;
        v51 = Memory;
        memset_0((void *)(Memory + 72), 0, v26);
      }
      v0 = (__int64)v43;
      if ( !v54 )
      {
        LODWORD(v46) = v43[1];
        HIDWORD(v46) = *v43;
        SubRectangle = BgpGxRectangleCreate(&v46, BitsPerPixel, &v48);
        if ( SubRectangle < 0 )
          goto LABEL_26;
        memset_0(*(void **)(v48 + 24), 0, *(unsigned int *)(v48 + 12));
      }
      if ( v55 )
      {
LABEL_25:
        *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorSummary = BgpFwQueryPerformanceCounter(0LL);
        v28 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E651B8;
        *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[16] += v28;
        *(_QWORD *)&WheapPfaLock.AbCompletedIoQoSBoostCount += v28;
        WheapPfaLock.OtherTransferCount = v28;
        WheapPfaLock.InGlobalForegroundList = v28;
        byte_140E0F010 = v54;
        byte_140E0F011 = v55;
        byte_140E0F012 = v56;
        qword_140E0F048 = v48;
        qword_140E0F058 = v51;
        qword_140E0F090 = v45;
        qword_140E0F000 = 100LL;
        qword_140E0F008 = v22;
        qword_140E0F018 = v0;
        qword_140E0F050 = (__int64)v1;
        qword_140E0F088 = (__int64)v2;
        KeResetEvent(&stru_140E65170);
        KeInitializeTimer(&stru_140E650F0);
        KeInitializeDpc(&stru_140E65030, (PKDEFERRED_ROUTINE)AnFwpFadeAnimationTimer, 0LL);
        LOBYTE(WheapPfaLock.SuspendEvent.Header.WaitListHead.Flink) = 1;
        *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorSummary = BgpFwQueryPerformanceCounter(0LL);
        qword_140E651C8 = *(_QWORD *)&WheapPfaLock.PriorityFloorSummary;
        KeSetCoalescableTimer(&stru_140E650F0, 0LL, 0x1Eu, 0, &stru_140E65030);
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x2000u;
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[108] = v5;
        goto LABEL_26;
      }
      LODWORD(v46) = v2[1];
      HIDWORD(v46) = *v2;
      SubRectangle = BgpGxRectangleCreate(&v46, BitsPerPixel, &v45);
      if ( SubRectangle >= 0 )
      {
        memset_0(*(void **)(v45 + 24), 0, *(unsigned int *)(v45 + 12));
        goto LABEL_25;
      }
LABEL_26:
      if ( v40 )
      {
        v29 = v52;
        v30 = v40;
        do
        {
          BgpGxRectangleDestroy(*v29++);
          --v30;
        }
        while ( v30 );
      }
LABEL_29:
      if ( SubRectangle >= 0 )
        return (unsigned int)SubRectangle;
      goto LABEL_31;
    }
    v56 = 0;
    v11 = BgpGxParseBitmap((__int64)gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink, &v39);
    v1 = v39;
    SubRectangle = v11;
    if ( v11 < 0 )
      goto LABEL_29;
    v12 = v39[2];
    if ( v9 != v12 )
    {
      v13 = BgpGxRectangleSize(*v39, v39[1], v12);
      v39 = 0LL;
      v5 = ((v13 + 15) & 0xFFFFFFF0) + 32;
      SubRectangle = BgpGxConvertRectangleEx((__int64)v1, v9, &v39, 0);
      if ( SubRectangle < 0 )
        goto LABEL_29;
      *(_QWORD *)&v52[0] = v1;
      v1 = v39;
      v40 = 1;
    }
    v14 = BgpGxRectangleSize(*v1, v1[1], v9);
    v15 = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[172] + HIDWORD(gLoadedDiffHivesLock.Spare18);
    v16 = xmmword_140E0F020 + DWORD2(xmmword_140E0F020);
    LODWORD(v39) = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[172];
    v5 += ((v14 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v14 + 15) & 0xFFFFFFF0) + 32);
    v10.QuadPart = (unsigned int)(LODWORD(gLoadedDiffHivesLock.Spare18)
                                + LODWORD(gLoadedDiffHivesLock.LastXStateSaveDebugInfo));
    v17 = DWORD1(xmmword_140E0F020) + HIDWORD(xmmword_140E0F020);
    if ( (unsigned int)xmmword_140E0F020 >= *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[172]
      && (unsigned int)xmmword_140E0F020 <= v15
      && DWORD1(xmmword_140E0F020) >= LODWORD(gLoadedDiffHivesLock.Spare18)
      && DWORD1(xmmword_140E0F020) <= v10.LowPart )
    {
      if ( v16 < *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[172]
        || v16 > v15
        || v17 < LODWORD(gLoadedDiffHivesLock.Spare18)
        || v17 > v10.LowPart )
      {
        goto LABEL_61;
      }
      v54 = 1;
    }
    v18 = xmmword_140E0F060 + DWORD2(xmmword_140E0F060);
    v19 = DWORD1(xmmword_140E0F060) + HIDWORD(xmmword_140E0F060);
    if ( (unsigned int)xmmword_140E0F060 < (unsigned int)v39
      || (unsigned int)xmmword_140E0F060 > v15
      || DWORD1(xmmword_140E0F060) < LODWORD(gLoadedDiffHivesLock.Spare18)
      || DWORD1(xmmword_140E0F060) > v10.LowPart )
    {
LABEL_12:
      v9 = BitsPerPixel;
      if ( v54 )
        goto LABEL_13;
      goto LABEL_62;
    }
    if ( v18 >= (unsigned int)v39 && v18 <= v15 && v19 >= LODWORD(gLoadedDiffHivesLock.Spare18) && v19 <= v10.LowPart )
    {
      v55 = 1;
      goto LABEL_12;
    }
LABEL_61:
    SubRectangle = -1073741823;
    goto LABEL_26;
  }
LABEL_32:
  AnFwpDisableProgressTimer();
  AnFwDisableBackgroundUpdateTimer();
  SubRectangle = BgpClearScreen(0xFF000000);
  if ( v0 )
    BgpGxRectangleDestroy(v0);
  if ( v48 )
    BgpGxRectangleDestroy(v48);
  if ( v1 )
    BgpGxRectangleDestroy(v1);
  if ( v51 )
    BgpGxRectangleDestroy(v51);
  if ( v2 )
    BgpGxRectangleDestroy(v2);
  if ( v3 )
    BgpGxRectangleDestroy(v3);
  return (unsigned int)SubRectangle;
}
