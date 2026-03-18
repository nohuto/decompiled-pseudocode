/*
 * XREFs of EngUpdateDeviceSurface @ 0x1401787B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x14000DDA0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x14000E920 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EAFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EB3C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x140013C70 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z @ 0x140015B60 (-bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046A5C (--0-$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046DC8 (--$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x14008E990 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140096290 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x140097360 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1400BB3C0 (--0XDCOBJ@@QEAA@XZ.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z @ 0x1400BBC70 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D0F58 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F3AA8 (--$GreAcquireSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C65FC (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  struct _GRETHREAD *v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  struct _GRETHREAD *v12; // rax
  __int64 v14; // rsi
  DC *v15; // rdi
  CLIPOBJ *v17; // r12
  struct RGNOBJ *v18; // r15
  HSEMAPHORE v19; // rax
  __int64 v20; // r10
  HSEMAPHORE v21; // rax
  __int64 v22; // rdx
  const struct REGION_CORE *v23; // r9
  HDEV hdev; // rax
  const struct REGION_CORE *v25; // rdx
  struct REGION *v26; // rdx
  _QWORD *v27; // rdi
  struct _POINTL v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+28h] [rbp-38h]
  char v30; // [rsp+30h] [rbp-30h]
  _BYTE v31[40]; // [rsp+38h] [rbp-28h] BYREF
  HSEMAPHORE v32; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 1;
  CurrentThread = GreGetCurrentThread();
  v7 = CurrentThread;
  if ( !CurrentThread || (*((_DWORD *)CurrentThread + 86) & 1) == 0 || pso->iType != 1 )
    return 1;
  v8 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  SEMOBJSHARED<14>::SEMOBJSHARED<14>(&v32, (_QWORD *)v8);
  v9 = *((_DWORD *)v7 + 89);
  v10 = *(_DWORD *)(v8 + 4284);
  if ( v9 != v10 )
  {
    v11 = *(_DWORD *)(v8 + 4280);
    if ( v10 > v11 )
    {
      if ( v9 <= v11 || v9 >= v10 )
        goto LABEL_12;
LABEL_11:
      v3 = 0;
      goto LABEL_12;
    }
    if ( v9 < v10 || v9 > v11 )
      goto LABEL_11;
  }
LABEL_12:
  EtwTraceGreLockReleaseSemaphore((__int64)L"VisRgnUniqueness", (int)v32);
  v12 = GreGetCurrentThreadCrossSessionCheck();
  if ( v12 )
  {
    if ( (*((_BYTE *)v12 + 22))-- == 1 )
      *(_QWORD *)v12 &= ~0x4000uLL;
  }
  GreReleaseSemaphoreSharedInternal((struct _ERESOURCE *)v32);
  if ( v3 || !ppco || !*ppco )
    return v3;
  v14 = *(_QWORD *)v8 + 1248LL;
  GreAcquireSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))EngAcquireSemaphoreShared, v14);
  XDCOBJ::XDCOBJ((XDCOBJ *)v31);
  v15 = (DC *)*((_QWORD *)v7 + 37);
  if ( !v15 )
  {
    GreReleaseSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v14);
    return 1;
  }
  v17 = *ppco;
  v18 = (struct RGNOBJ *)((unsigned __int64)&(*ppco)[2].rclBounds.top & -(__int64)(*ppco != 0LL));
  DC::AcquireDcVisRgnShared(v15);
  v33 = *((_QWORD *)v15 + 142);
  v19 = (HSEMAPHORE)DC::prgnVisSnap(v15);
  v32 = v19;
  if ( v20 && v19 )
  {
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v32, (struct RGNOBJ *)&v33) )
      goto LABEL_29;
    if ( !*((_QWORD *)v15 + 147) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v32);
      if ( v32 )
        *((_QWORD *)v15 + 147) = v32;
    }
    v21 = (HSEMAPHORE)*((_QWORD *)v15 + 147);
    v32 = v21;
    if ( !v21 )
      goto LABEL_39;
    if ( v21 == *(HSEMAPHORE *)v18 )
    {
LABEL_29:
      v3 = 1;
    }
    else if ( RGNOBJ::bCopy((RGNOBJ *)&v32, (struct RGNOBJ *)&v33) )
    {
      *((_QWORD *)v15 + 147) = v32;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v33, v22);
      if ( v33 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v15 + 6) + 40LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v28.x = -*((_DWORD *)hdev + 644);
          v28.y = -*((_DWORD *)hdev + 645);
          RGNOBJ::bOffset((int **)&v32, &v28);
        }
        LOBYTE(v23) = 8;
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)&v33, v18, (struct RGNOBJ *)&v32, v23) )
        {
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v33, v25) != 1 )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v33, (struct RGNOBJ *)&v32);
            v26 = (struct REGION *)v32;
            *((_QWORD *)v15 + 147) = v32;
            v27 = (_QWORD *)((char *)v15 + 1920);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v27, v26, (const struct ERECTL *)&v17->rclBounds, 1);
            if ( !ERECTL::bEmpty((ERECTL *)((char *)v27 + 4)) )
            {
              *ppco = (CLIPOBJ *)v27;
              v3 = 1;
            }
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v33);
    }
  }
LABEL_39:
  if ( v30 )
    CPushLock::ReleaseLock((CPushLock *)(v29 + 1112));
  GreReleaseSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v14);
  return v3;
}
