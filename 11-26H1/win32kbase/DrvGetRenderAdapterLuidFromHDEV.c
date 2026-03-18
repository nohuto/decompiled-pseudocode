/*
 * XREFs of DrvGetRenderAdapterLuidFromHDEV @ 0x1401F7ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D21C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C6728 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x140102518 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall DrvGetRenderAdapterLuidFromHDEV(__int64 a1, _QWORD *a2)
{
  __int64 SessionState; // rax
  struct _ERESOURCE *v5; // rbx
  int v6; // r8d
  unsigned int v7; // edi
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  struct _GRETHREAD *v10; // rax
  int v11; // r8d
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a1;
  SessionState = W32GetSessionState(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v14, *(_QWORD **)(SessionState + 88));
  v5 = *(struct _ERESOURCE **)(a1 + 48);
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
    (void (__fastcall *)(__int64))EngAcquireSemaphoreShared,
    (__int64)v5);
  v7 = 0;
  if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v13) )
  {
    *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 2544) + 576LL);
    EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)v5, v6);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      v9 = (*((_BYTE *)v8 + 16))-- == 1;
      if ( v9 )
        *(_QWORD *)v8 &= ~0x100uLL;
    }
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)v5, v6);
    v10 = GreGetCurrentThreadCrossSessionCheck();
    if ( v10 )
    {
      v9 = (*((_BYTE *)v10 + 16))-- == 1;
      if ( v9 )
        *(_QWORD *)v10 &= ~0x100uLL;
    }
    v7 = -1073741811;
  }
  GreReleaseSemaphoreSharedInternal(v5);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v14,
    v11);
  return v7;
}
