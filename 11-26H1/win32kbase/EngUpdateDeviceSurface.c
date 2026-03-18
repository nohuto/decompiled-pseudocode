/*
 * XREFs of EngUpdateDeviceSurface @ 0x1401F1910
 * Callers:
 *     <none>
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x140011E40 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x140014910 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0L@@@YAXXZ @ 0x140015634 (--$GrepAcquireLockValidate@$0L@@@YAXXZ.c)
 *     ?reset@?$lambda_call@V_lambda_1_@?1??AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ @ 0x14001A86C (-reset@-$lambda_call@V_lambda_1_@-1--AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001D35C (--$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z @ 0x14001FDF0 (-bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x140021F20 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z @ 0x140022840 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140038140 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x14003AC1C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x14003FFF0 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400586B8 (--$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x140119AD8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140125C40 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ??0?$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140129788 (--0-$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x140178B40 (--0RGNMEMOBJ@@QEAA@XZ.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  struct _GRETHREAD *v7; // rdi
  __int64 v8; // r14
  int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // edx
  HSEMAPHORE v13; // r14
  int v14; // r8d
  DC *v15; // rdi
  CLIPOBJ *v17; // r12
  struct RGNOBJ *v18; // r15
  struct REGION *v19; // rax
  __int64 v20; // r10
  struct REGION *v21; // rax
  int v22; // r9d
  HDEV hdev; // rcx
  struct REGION *v24; // rdx
  _QWORD *v25; // rdi
  int v26; // r8d
  struct _POINTL v27; // [rsp+20h] [rbp-30h] BYREF
  __int64 v28[5]; // [rsp+28h] [rbp-28h] BYREF
  struct REGION *v29; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 1;
  CurrentThread = GreGetCurrentThread((__int64)pso, (__int64)ppco);
  v7 = CurrentThread;
  if ( !CurrentThread || (*((_DWORD *)CurrentThread + 84) & 1) == 0 || pso->iType != 1 )
    return 1;
  v8 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  SEMOBJSHARED<14>::SEMOBJSHARED<14>((HSEMAPHORE *)&v29, (_QWORD *)v8);
  v10 = *(_DWORD *)(v8 + 4396);
  v11 = *((_DWORD *)v7 + 87);
  if ( v11 != v10 )
  {
    v12 = *(_DWORD *)(v8 + 4392);
    if ( v10 > v12 )
    {
      if ( v11 <= v12 || v11 >= v10 )
        goto LABEL_12;
LABEL_11:
      v3 = 0;
      goto LABEL_12;
    }
    if ( v11 < v10 || v11 > v12 )
      goto LABEL_11;
  }
LABEL_12:
  GreReleaseSemaphoreCommon<14,void (*)(HSEMAPHORE__ *)>(v10, (struct _ERESOURCE *)v29, v9);
  if ( v3 || !ppco || !*ppco )
    return v3;
  v13 = (HSEMAPHORE)(*(_QWORD *)v8 + 1248LL);
  EngAcquireSemaphoreShared(v13);
  GrepAcquireLockValidate<11>();
  XDCOBJ::XDCOBJ((XDCOBJ *)v28);
  v15 = (DC *)*((_QWORD *)v7 + 37);
  if ( !v15 )
  {
    GreReleaseSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v13,
      v14);
    return 1;
  }
  v17 = *ppco;
  v18 = (struct RGNOBJ *)((unsigned __int64)&(*ppco)[2].rclBounds.top & -(__int64)(*ppco != 0LL));
  DC::AcquireDcVisRgnShared(v15, (__int64)v28);
  v30 = *((_QWORD *)v15 + 142);
  v19 = DC::prgnVisSnap(v15);
  v29 = v19;
  if ( v20 && v19 )
  {
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v29, (struct RGNOBJ *)&v30) )
      goto LABEL_26;
    if ( !*((_QWORD *)v15 + 147) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
      if ( v29 )
        *((_QWORD *)v15 + 147) = v29;
    }
    v21 = (struct REGION *)*((_QWORD *)v15 + 147);
    v29 = v21;
    if ( !v21 )
      goto LABEL_36;
    if ( v21 == *(struct REGION **)v18 )
    {
LABEL_26:
      v3 = 1;
    }
    else if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v29, (struct RGNOBJ *)&v30) )
    {
      *((_QWORD *)v15 + 147) = v29;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
      if ( v30 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v15 + 6) + 40LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v27.x = -*((_DWORD *)hdev + 644);
          v27.y = -*((_DWORD *)hdev + 645);
          RGNOBJ::bOffset((RGNOBJ *)&v29, &v27);
        }
        LOBYTE(v22) = 8;
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)&v30, v18, (struct RGNOBJ *)&v29, v22)
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v30) != 1 )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v30, (struct RGNOBJ *)&v29);
          v24 = v29;
          *((_QWORD *)v15 + 147) = v29;
          v25 = (_QWORD *)((char *)v15 + 1920);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v25, v24, (const struct ERECTL *)&v17->rclBounds, 1);
          if ( !ERECTL::bEmpty((ERECTL *)((char *)v25 + 4)) )
          {
            *ppco = (CLIPOBJ *)v25;
            v3 = 1;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
    }
  }
LABEL_36:
  _reset___lambda_call_V_lambda_1___1__AcquireDcVisRgnShared_DC__QEAA_XZ__details_wil__QEAAXXZ(v28);
  GreReleaseSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    (__int64)v13,
    v26);
  return v3;
}
