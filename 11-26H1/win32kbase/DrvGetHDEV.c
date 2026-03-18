/*
 * XREFs of DrvGetHDEV @ 0x140027860
 * Callers:
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvGetDeviceFromName @ 0x140028550 (DrvGetDeviceFromName.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x140116FFC (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 *__fastcall DrvGetHDEV(const UNICODE_STRING *a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rcx
  __int64 DeviceFromName; // rbp
  __int64 v4; // r14
  struct _ERESOURCE *v5; // rbx
  __int64 *i; // rdi
  __int64 v7; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v8; // rdx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v10; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
    if ( DeviceFromName )
    {
      v4 = *(_QWORD *)(W32GetSessionState(v2) + 88);
      v5 = *(struct _ERESOURCE **)v4;
      GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v4);
      GrepAcquireLockValidate<19>();
      for ( i = *(__int64 **)(v4 + 3952); i; i = (__int64 *)*i )
      {
        v7 = i[321];
        if ( v7 && v7 == DeviceFromName && (i[5] & 0x400) == 0 )
        {
          ++*((_DWORD *)i + 2);
          v8 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)i[442];
          if ( v8 )
          {
            v10 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v4 + 56);
            if ( v10 )
              NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v10, v8, 1);
          }
          v1 = i;
          break;
        }
      }
      if ( v5 )
        GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v5);
    }
  }
  return v1;
}
