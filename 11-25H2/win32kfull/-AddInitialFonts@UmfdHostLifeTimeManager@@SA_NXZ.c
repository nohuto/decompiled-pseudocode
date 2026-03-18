/*
 * XREFs of ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401462E0
 * Callers:
 *     NtGdiAddInitialFonts @ 0x140146250 (NtGdiAddInitialFonts.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserOnGreTextReady @ 0x140146468 (UserOnGreTextReady.c)
 *     FinishStockFontInit @ 0x140146690 (FinishStockFontInit.c)
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x140146E08 (-bInitializeEUDCInternal@@YAHXZ.c)
 */

char __fastcall UmfdHostLifeTimeManager::AddInitialFonts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  NTSTATUS v4; // eax
  bool v5; // si
  __int64 HDEV; // rbx
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  struct _KEVENT *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // bl
  __int64 v14; // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  if ( KeReadStateEvent(*(PRKEVENT *)(v3 + 24232)) )
    return 1;
  v4 = KeWaitForSingleObject(*(PVOID *)(v3 + 24240), Executive, 1, 0, 0LL);
  if ( v4 < 0 || v4 == 192 )
  {
    KeSetEvent(*(PRKEVENT *)(v3 + 24232), 0, 0);
    return 0;
  }
  else
  {
    v5 = (unsigned int)bInitializeEUDCInternal() != 0;
    HDEV = UserGetHDEV();
    v8 = Gre::Base::Globals(v7);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v15, v8);
    LODWORD(HDEV) = *(_DWORD *)(HDEV + 2164);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v15);
    FinishStockFontInit(HDEV);
    if ( !*(_QWORD *)(v3 + 19712) )
    {
      v14 = *(_QWORD *)(v3 + 20416);
      if ( !v14 || !*(_DWORD *)(v14 + 28) )
        GrepCaptureLiveMemoryDump(400LL, 13LL, 0LL);
    }
    v9 = *(struct _KEVENT **)(v3 + 24224);
    *(_BYTE *)(v3 + 24290) = 1;
    KeSetEvent(v9, 0, 0);
    v12 = (unsigned int)UserOnGreTextReady(v11, v10) != 0 && v5;
    KeSetEvent(*(PRKEVENT *)(v3 + 24232), 0, 0);
    return v12;
  }
}
