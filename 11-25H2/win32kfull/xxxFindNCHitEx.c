/*
 * XREFs of xxxFindNCHitEx @ 0x1401848B4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?FindNCMNItemHitEx@@YAHPEAUtagWND@@HAEBUtagPOINT@@@Z @ 0x140184A10 (-FindNCMNItemHitEx@@YAHPEAUtagWND@@HAEBUtagPOINT@@@Z.c)
 *     xxxClientHitTestScrollBar @ 0x1402BE044 (xxxClientHitTestScrollBar.c)
 */

__int64 __fastcall xxxFindNCHitEx(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagPOINT v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  if ( a2 != 5 )
  {
    if ( a2 == 7 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 2) != 0 )
      {
        Win32HM_LockIntoThread<0>(*((_QWORD *)a1 + 2), (__int64)a1, BugCheckParameter3);
        v6 = (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))xxxClientHitTestScrollBar)(
                                 *(_QWORD *)a1,
                                 1LL,
                                 a3) | 0x10000;
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v10);
        return v6;
      }
    }
    else if ( a2 == 6 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 4) != 0 )
    {
      Win32HM_LockIntoThread<0>(*((_QWORD *)a1 + 2), (__int64)a1, BugCheckParameter3);
      v6 = (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))xxxClientHitTestScrollBar)(
                               *(_QWORD *)a1,
                               0LL,
                               a3);
      v9 = PtiCurrent(v8, v7);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v9, BugCheckParameter3);
      return v6;
    }
    return a2;
  }
  if ( !*((_QWORD *)a1 + 21) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 1) == 0 )
    return a2;
  return FindNCMNItemHitEx(a1, 5, &v12);
}
