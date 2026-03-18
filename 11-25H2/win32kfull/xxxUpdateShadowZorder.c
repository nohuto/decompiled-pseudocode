/*
 * XREFs of xxxUpdateShadowZorder @ 0x1402180E4
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1400E12C0 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     SetWindowGroupBand @ 0x140152834 (SetWindowGroupBand.c)
 */

struct tagSHADOW *__fastcall xxxUpdateShadowZorder(struct tagWND *a1, __int64 a2)
{
  struct tagSHADOW *result; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  result = FindShadow(a1, a2);
  if ( !result )
    return result;
  v4 = (struct tagWND *)*((_QWORD *)result + 1);
  v5 = *((_QWORD *)v4 + 5);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) != 0 )
  {
    if ( (*(_BYTE *)(v5 + 24) & 8) == 0 )
    {
      v6 = 1;
LABEL_7:
      SetOrClrWF(v6, v4, 0x808u, 1);
    }
  }
  else if ( (*(_BYTE *)(v5 + 24) & 8) != 0 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  if ( *(_DWORD *)(*((_QWORD *)v4 + 5) + 236LL) != v7 )
    SetWindowGroupBand(v4, v7, 0);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v4);
  xxxSetWindowPos(v4, (__int64)a1, 0LL, 0LL, 0, 0, 19);
  v10 = PtiCurrent(v9, v8);
  return (struct tagSHADOW *)Win32HM_UnlockFromThread<1>((ULONG_PTR)v10, BugCheckParameter3);
}
