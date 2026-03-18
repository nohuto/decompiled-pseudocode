/*
 * XREFs of GreEnableWindowResizeOptimization @ 0x1401F8A0C
 * Callers:
 *     NtUserEnableWindowResizeOptimization @ 0x1401F89B0 (NtUserEnableWindowResizeOptimization.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14005B3F8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreEnableWindowResizeOptimization(Gre::Base *a1, int a2, int a3)
{
  int v5; // r14d
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // ecx
  _DWORD *v11; // rcx

  v5 = (int)a1;
  v6 = Gre::Base::Globals(a1);
  v7 = *(_QWORD *)v6 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v7);
  v8 = *(_QWORD *)v6 + 520LL;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v8);
  v11 = *(_DWORD **)(W32GetSessionState(v10, v9) + 96);
  if ( !v11[26] )
  {
    v11[27] = v5;
    v11[28] = a2;
    v11[29] = a3;
  }
  if ( v8 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v8);
  if ( v7 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v7);
  return 1LL;
}
