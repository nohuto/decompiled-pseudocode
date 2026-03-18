/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401117B8
 * Callers:
 *     xxxCloseClipboard @ 0x14002B910 (xxxCloseClipboard.c)
 *     xxxSetClipboardViewer @ 0x140110CB8 (xxxSetClipboardViewer.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14026CA20 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x140112E94 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1, __int64 a2)
{
  __int64 i; // rdi
  __int64 v4; // rcx
  ULONG_PTR *v5; // rax
  ULONG_PTR v6; // xmm0_8
  int v7; // eax
  int v8; // eax
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r8
  __int64 v12; // rdx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]

  *((_DWORD *)a1 + 16) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 11) && *((_QWORD *)a1 + 13) )
  {
    v9 = PtiCurrent((__int64)a1, a2);
    v10 = *((_QWORD *)a1 + 13);
    *((_QWORD *)a1 + 11) = v9;
    Win32HM_LockIntoThread<0>((__int64)v9, v10, &BugCheckParameter3);
    v11 = (_QWORD *)*((_QWORD *)a1 + 14);
    if ( v11 )
      v11 = (_QWORD *)*v11;
    xxxSendNotifyMessage(*((_QWORD *)a1 + 13), 776LL, v11, 0LL, 1);
    *((_QWORD *)a1 + 11) = 0LL;
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&BugCheckParameter3, v12);
  }
  for ( i = *((_QWORD *)a1 + 19); i; i = *(_QWORD *)(i + 240) )
  {
    v15 = 0LL;
    v16 = 0;
    v4 = *(_QWORD *)(*(_QWORD *)(i + 16) + 464LL);
    v5 = (ULONG_PTR *)(v4 + 864);
    if ( !v4 )
      v5 = (ULONG_PTR *)&v15;
    v6 = *v5;
    v7 = *((_DWORD *)v5 + 2);
    BugCheckParameter3 = v6;
    v14 = v7;
    v8 = CountNumClipFormatForIL(&BugCheckParameter3, a1);
    PostMessage(i, 797, v8, 0);
  }
}
