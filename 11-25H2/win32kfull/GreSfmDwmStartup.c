/*
 * XREFs of GreSfmDwmStartup @ 0x14021C78C
 * Callers:
 *     GreDwmStartup @ 0x1401D500C (GreDwmStartup.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreSfmDwmStartup(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rdi
  __int64 v2; // rbx
  __int64 result; // rax
  _QWORD **v4; // rcx
  _QWORD *v5; // r8
  _QWORD *v6; // rax

  v1 = Gre::Base::Globals(a1);
  v2 = *(_QWORD *)v1 + 520LL;
  result = GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
             (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
             v2);
  v4 = (_QWORD **)(*((_QWORD *)v1 + 529) + 40LL);
  v5 = *v4;
  if ( *v4 != v4 )
  {
    do
    {
      v6 = v5;
      v5 = (_QWORD *)*v5;
      if ( !*((_DWORD *)v6 + 54) )
        *((_DWORD *)v6 + 53) |= 0x10u;
      result = *((_QWORD *)v1 + 529) + 40LL;
    }
    while ( v5 != (_QWORD *)result );
  }
  if ( v2 )
    return GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
             (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
             v2);
  return result;
}
