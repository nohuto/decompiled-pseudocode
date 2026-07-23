/*
 * XREFs of IopCheckVpbMounted @ 0x1404429F8
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     IopIncrementVpbRefCount @ 0x140442B40 (IopIncrementVpbRefCount.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
  KIRQL i; // al
  __int64 v7; // rbx
  KIRQL v8; // bp
  __int16 v9; // ax
  __int64 v10; // r9
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

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
        IopDecrementDeviceObjectRef(a2, 0LL, 0LL, v10);
      return v7;
    }
    KeReleaseQueuedSpinLock(9uLL, v8);
    v14 = 0LL;
    v12 = IopMountVolume(a2, (__int64)&v14);
    *a4 = v12;
    if ( v12 < 0 || v12 == 192 || v12 == 257 )
      break;
    result = v14;
    if ( v14 )
      return result;
  }
  IopDecrementDeviceObjectRef(a2, 0LL, 0LL, v13);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}
