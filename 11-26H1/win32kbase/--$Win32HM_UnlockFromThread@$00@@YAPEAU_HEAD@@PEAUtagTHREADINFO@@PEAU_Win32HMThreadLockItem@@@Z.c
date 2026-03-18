/*
 * XREFs of ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1401BF728
 * Callers:
 *     DestroyThreadsObjects @ 0x1400D0690 (DestroyThreadsObjects.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401904BC (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 * Callees:
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 */

__int64 __fastcall Win32HM_UnlockFromThread<1>(ULONG_PTR BugCheckParameter2, _QWORD *BugCheckParameter3)
{
  _QWORD *v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD **)(BugCheckParameter2 + 448);
  if ( v2 != BugCheckParameter3 )
    KeBugCheckEx(0x164u, 0x3BuLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 448) = *v2;
  result = v2[1];
  if ( result )
    return HMUnlockObject(v2[1], (int)BugCheckParameter3, (int)v2);
  return result;
}
