/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x14016D664
 * Callers:
 *     xxxMNMouseMove @ 0x140044310 (xxxMNMouseMove.c)
 *     xxxMNButtonDown @ 0x14016D560 (xxxMNButtonDown.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(__int64 a1)
{
  struct tagWND *v2; // rbx
  __int64 v3; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_QWORD *)(**(_QWORD **)a1 + 24LL) )
    return 0LL;
  v2 = *(struct tagWND **)(**(_QWORD **)a1 + 24LL);
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v2);
  if ( v2 != *(struct tagWND **)(**(_QWORD **)a1 + 56LL) )
    xxxSendMessage(v2, 0x1E4u);
  xxxSendMessage(v2, 0x1E5u);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v3);
  return 1LL;
}
