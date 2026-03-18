/*
 * XREFs of GreHidePointer @ 0x140094C3C
 * Callers:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1401212F8 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14008D8A4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     GreMovePointer @ 0x14008E890 (GreMovePointer.c)
 *     GreSetPointer @ 0x140092DBC (GreSetPointer.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140093A10 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x14020DBE4 (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 *     GreUpdatePointerState @ 0x140260ED4 (GreUpdatePointerState.c)
 */

__int64 __fastcall GreHidePointer(Gre::Base *a1)
{
  unsigned int v1; // esi
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  unsigned int v3; // edi
  HSEMAPHORE v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int updated; // ebp
  __int64 v8; // r8
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  HDEV HDEV; // [rsp+48h] [rbp+10h] BYREF
  char v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v1 = (unsigned int)a1;
  v2 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v17, v2);
  v3 = 0;
  HDEV = (HDEV)UserGetHDEV();
  if ( HDEV )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v16, (struct PDEVOBJ *)&HDEV);
    v4 = (HSEMAPHORE)*((_QWORD *)HDEV + 7);
    GreAcquireSemaphoreInternal(v4);
    GrepAcquireLockValidate<4>();
    updated = GreUpdatePointerState(v1);
    if ( updated )
    {
      if ( v1 )
      {
        GreHidePointerInternal(HDEV);
      }
      else
      {
        v10 = *(_QWORD *)(W32GetSessionState(v6, v5, v8) + 96);
        if ( *(_DWORD *)(v10 + 76) )
        {
          if ( *(_BYTE *)(v10 + 44) )
          {
            v11 = *(_QWORD *)(v10 + 24);
            v12 = *(unsigned int *)(v10 + 32);
            v13 = *(_DWORD *)(v10 + 36);
            v14 = *(_DWORD *)(v10 + 40);
          }
          else
          {
            v11 = 0LL;
            v12 = 0LL;
            v13 = 0;
            v14 = 0;
          }
          GreSetPointer(v11, v12, v13, v14);
          *(_DWORD *)(v10 + 76) = 0;
        }
        if ( *(_DWORD *)(v10 + 80) )
        {
          GreMovePointer((__int64)HDEV, *(unsigned int *)(v10 + 56), *(_DWORD *)(v10 + 60), *(_DWORD *)(v10 + 64));
          *(_DWORD *)(v10 + 80) = 0;
        }
      }
    }
    if ( v4 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v4);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v16);
    v3 = updated;
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v17);
  return v3;
}
