/*
 * XREFs of GreOnCURSINFODestroy @ 0x14007A94C
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14007A83C (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14005B3F8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14008D8A4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreSetPointer @ 0x140092DBC (GreSetPointer.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140093A10 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreOnCURSINFODestroy(__int64 a1)
{
  __int64 result; // rax
  Gre::Base *v3; // rcx
  __int64 v4; // rbp
  struct Gre::Base::SESSION_GLOBALS *v5; // rdi
  __int64 HDEV; // rax
  HSEMAPHORE v7; // rbx
  __int64 v8; // rdi
  HSEMAPHORE v9; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  result = W32GetSessionState();
  v4 = *(_QWORD *)(result + 96);
  if ( *(_QWORD *)(v4 + 24) == a1 )
  {
    v5 = Gre::Base::Globals(v3);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v11, v5);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      v10 = HDEV;
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) )
      {
        v7 = *(HSEMAPHORE *)(v10 + 56);
        GreAcquireSemaphoreInternal(v7);
        GrepAcquireLockValidate<4>();
        if ( *(_QWORD *)(v4 + 24) == a1 )
          GreSetPointer(0LL, 0);
        if ( v7 )
          GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v7);
      }
      else
      {
        v8 = *(_QWORD *)v5 + 1144LL;
        GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
          v8);
        v9 = *(HSEMAPHORE *)(v10 + 56);
        GreAcquireSemaphoreInternal(v9);
        GrepAcquireLockValidate<4>();
        if ( *(_QWORD *)(v4 + 24) == a1 )
          GreSetPointer(0LL, 0);
        if ( v9 )
          GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v9);
        if ( v8 )
          GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v8);
      }
    }
    return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v11);
  }
  return result;
}
