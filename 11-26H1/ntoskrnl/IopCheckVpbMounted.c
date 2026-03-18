/*
 * XREFs of IopCheckVpbMounted @ 0x14044A8C8
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     IopIncrementVpbRefCount @ 0x14044AA10 (IopIncrementVpbRefCount.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
  KIRQL i; // al
  __int64 v7; // rbx
  KIRQL v8; // bp
  __int16 v9; // ax
  __int64 result; // rax
  int v11; // eax
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  for ( i = KeAcquireQueuedSpinLock(9uLL); ; i = KeAcquireQueuedSpinLock(9uLL) )
  {
    v7 = *(_QWORD *)(a2 + 56);
    v8 = i;
    v9 = *(_WORD *)(v7 + 4);
    if ( (v9 & 1) != 0 )
    {
      if ( (v9 & 2) != 0 )
      {
        *a4 = -1073741790;
        v7 = 0LL;
      }
      else
      {
        IopIncrementVpbRefCount(*(_QWORD *)(a2 + 56));
      }
      KeReleaseQueuedSpinLock(9uLL, v8);
      if ( !v7 )
        IopDecrementDeviceObjectRef(a2, 0LL, 0LL);
      return v7;
    }
    KeReleaseQueuedSpinLock(9uLL, v8);
    v12 = 0LL;
    v11 = IopMountVolume(a2, (__int64)&v12);
    *a4 = v11;
    if ( v11 < 0 || v11 == 192 || v11 == 257 )
      break;
    result = v12;
    if ( v12 )
      return result;
  }
  IopDecrementDeviceObjectRef(a2, 0LL, 0LL);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}
