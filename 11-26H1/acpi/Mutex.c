/*
 * XREFs of Mutex @ 0x14006F9F0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     PerformMutexDriverCallbacks @ 0x14004A31C (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x14004D640 (InitMutex.c)
 */

__int64 __fastcall Mutex(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax

  v2 = (__int64 *)(a2 + 64);
  result = CreateNameSpaceObject(
             *(_QWORD **)(a1 + 320),
             *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL),
             *(_QWORD *)(a1 + 80),
             *(_QWORD *)(a1 + 88),
             (__int64 *)(a2 + 64),
             0);
  if ( !(_DWORD)result )
  {
    result = InitMutex(a1, *(_QWORD **)(a1 + 320), *v2, *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL), 0);
    if ( !(_DWORD)result )
    {
      if ( gDeviceLockMutexSupported )
        return PerformMutexDriverCallbacks(0, *(_QWORD *)(*v2 + 96), a1, 0LL, 0);
    }
  }
  return result;
}
