/*
 * XREFs of ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x140052AF4
 * Callers:
 *     xxxBeginPaint @ 0x140052240 (xxxBeginPaint.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140050410 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400538A8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxSendChildNCPaint(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  ULONG_PTR *v4; // rcx
  __int64 v5; // rdx
  struct tagWND *i; // rbx
  __int64 v7; // rax
  struct tagTHREADINFO *v8; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = BugCheckParameter3;
  v5 = *((_QWORD *)v3 + 57);
  BugCheckParameter3[0] = v5;
  *((_QWORD *)v3 + 57) = BugCheckParameter3;
  BugCheckParameter3[1] = 0LL;
  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    v7 = *((_QWORD *)i + 5);
    if ( !*(_QWORD *)(v7 + 136) && (*(_BYTE *)(v7 + 17) & 8) != 0 )
    {
      Win32HM_ExchangeThreadLock<1>((__int64)i, (__int64)BugCheckParameter3);
      xxxSendNCPaint(i, (HRGN)1);
    }
  }
  v8 = PtiCurrent((__int64)v4, v5);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v8, BugCheckParameter3);
}
