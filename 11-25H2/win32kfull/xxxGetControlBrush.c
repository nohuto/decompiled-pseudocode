/*
 * XREFs of xxxGetControlBrush @ 0x1401E3760
 * Callers:
 *     NtUserGetControlBrush @ 0x1401E36A0 (NtUserGetControlBrush.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxGetControlColor @ 0x140055B60 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(__int64 a1, HWND a2, unsigned int a3)
{
  struct tagWND *v6; // rdi
  __int64 ControlColor; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (((*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) + 0x80) & 0xBF) != 0 )
    v6 = *(struct tagWND **)(a1 + 104);
  else
    v6 = *(struct tagWND **)(a1 + 120);
  if ( !v6 )
    v6 = (struct tagWND *)a1;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v6);
  ControlColor = xxxGetControlColor(v6, (struct tagDRAWITEMSTRUCT **)a1, a2, a3);
  v10 = PtiCurrent(v9, v8);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v10, BugCheckParameter3);
  return ControlColor;
}
