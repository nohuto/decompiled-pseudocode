/*
 * XREFs of ??0?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1401C57DC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(_QWORD *a1, __int64 a2, __int64 a3)
{
  *a1 = *(_QWORD *)(a2 + 448);
  *(_QWORD *)(a2 + 448) = a1;
  a1[1] = a3;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 8));
  return a1;
}
