/*
 * XREFs of PiDrvDbNodeActionCallback @ 0x140A80C80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     PiDrvDbLoadNode @ 0x140A80DA8 (PiDrvDbLoadNode.c)
 */

__int64 __fastcall PiDrvDbNodeActionCallback(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, __int64 a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  _QWORD *v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax

  v6 = 0;
  if ( (*(_DWORD *)(a6 + 64) & 4) == 0 )
    return (unsigned int)-1073741822;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( a4 == 1 )
      return (unsigned int)PiDrvDbLoadNode(a6, *a5);
    return v6;
  }
  if ( v7 != 1 )
    return (unsigned int)-1073741822;
  if ( a4 == 1 )
  {
    v9 = (_QWORD *)*a5;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a6 + 88), 1u);
    if ( *(_QWORD *)(a6 + 72) )
    {
      v11 = *(_QWORD *)(a6 + 480);
      if ( v11 )
      {
        if ( v11 < 0 )
          KeSetCoalescableTimer((PKTIMER)(a6 + 264), *(LARGE_INTEGER *)(a6 + 480), 0, 0x3A98u, (PKDPC)(a6 + 328));
      }
      else
      {
        KiSetTimerEx(a6 + 264, 0LL, 0, 0, a6 + 328);
      }
      *(_BYTE *)(a6 + 488) = 1;
    }
    *v9 = 0LL;
    ExReleaseResourceLite((PERESOURCE)(a6 + 88));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v6;
}
