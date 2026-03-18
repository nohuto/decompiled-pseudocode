/*
 * XREFs of ??1?$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ @ 0x140086F48
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 */

void __fastcall Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>(
        _QWORD *BugCheckParameter3,
        __int64 a2)
{
  ULONG_PTR *CurrentThreadWin32Thread; // rax
  ULONG_PTR v4; // rdx
  _QWORD *v5; // rcx

  if ( *BugCheckParameter3 != -1LL )
  {
    CurrentThreadWin32Thread = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(BugCheckParameter3, a2);
    if ( CurrentThreadWin32Thread )
      v4 = *CurrentThreadWin32Thread;
    else
      v4 = 0LL;
    v5 = *(_QWORD **)(v4 + 448);
    if ( v5 != BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v4, (ULONG_PTR)BugCheckParameter3, 0LL);
    *(_QWORD *)(v4 + 448) = *v5;
    HMUnlockObject(v5[1]);
  }
}
