/*
 * XREFs of ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002BB6C
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x14000912C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     NtUserEndDeferWindowPosEx @ 0x14002A1D0 (NtUserEndDeferWindowPosEx.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1401790C4 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ @ 0x1402CC428 (--1-$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32HM_UnlockFromThread<0>(ULONG_PTR BugCheckParameter2, _QWORD *BugCheckParameter3)
{
  _QWORD *v2; // r8

  v2 = *(_QWORD **)(BugCheckParameter2 + 448);
  if ( v2 != BugCheckParameter3 )
    KeBugCheckEx(0x164u, 0x3BuLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 448) = *v2;
  return HMUnlockObject(v2[1]);
}
