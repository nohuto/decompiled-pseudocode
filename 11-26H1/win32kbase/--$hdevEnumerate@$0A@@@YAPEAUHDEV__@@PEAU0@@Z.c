/*
 * XREFs of ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14002777C
 * Callers:
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     hdevEnumerateAll @ 0x140027720 (hdevEnumerateAll.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E4C (-TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028120 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x140116FFC (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall hdevEnumerate<0>(__int64 a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  __int64 v3; // rsi
  __int64 *v4; // rax
  __int64 v5; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v6; // rdx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  GreAcquireSemaphore<19,>(v2);
  v3 = 0LL;
  v9 = a1;
  v4 = (__int64 *)a1;
  if ( !a1 )
    v4 = (__int64 *)((char *)v2 + 3952);
  v5 = *v4;
  if ( v5 )
  {
    ++*(_DWORD *)(v5 + 8);
    v3 = v5;
    v6 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 3536);
    if ( v6 )
    {
      v8 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v2 + 7);
      if ( v8 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v8, v6, 1);
    }
  }
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 8) <= 1u )
    {
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *(_QWORD *)v2);
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v9, v2);
      return v3;
    }
    TrackObjectReferenceDecrement(
      (__int64)v2,
      1u,
      *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(a1 + 3536));
    --*(_DWORD *)(a1 + 8);
  }
  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *(_QWORD *)v2);
  return v3;
}
