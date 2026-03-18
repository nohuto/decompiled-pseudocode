/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x140058F0C
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140058924 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     UnlinkWindow @ 0x14004BBDC (UnlinkWindow.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     UnredirectDCEs @ 0x1400587E0 (UnredirectDCEs.c)
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140058924 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     GetStyleWindow @ 0x14005A130 (GetStyleWindow.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxSetModernAppWindow @ 0x140254280 (xxxSetModernAppWindow.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rbp
  __int64 *v6; // rbx
  __int64 StyleWindow; // rax
  BOOL v8; // esi
  struct tagQ **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = *((_QWORD *)a1 + 2);
  v5 = v3;
  if ( (*(_DWORD *)(v4 + 1360) & 0x40000) != 0 && *(struct tagWND **)(v4 + 1584) == a1 && *(_QWORD *)(v4 + 1592) )
    xxxSetModernAppWindow(a1);
  while ( 1 )
  {
    v6 = (__int64 *)*((_QWORD *)a1 + 14);
    if ( !v6 )
      break;
    Win32HM_LockIntoThread<0>((__int64)v5, *((_QWORD *)a1 + 14), BugCheckParameter3);
    if ( (*(_BYTE *)(v6[5] + 31) & 0x10) != 0 )
      SetVisible(v6, 0LL);
    StyleWindow = GetStyleWindow(v6, 2848LL);
    v8 = StyleWindow && (__int64 *)StyleWindow != v6;
    UnlinkWindow(v6, (__int64 *)a1);
    if ( v8 )
      UnredirectDCEs((__int64)v6);
    SetOrClrWF(1, (struct tagWND *)v6, 0x480u, 1);
    SetOrClrWF(1, (struct tagWND *)v6, 0x380u, 1);
    v9 = (struct tagQ **)v6[2];
    if ( v9 == (struct tagQ **)v5 )
      xxxFreeWindow(v5, (struct tagWND *)v6);
    else
      PostEventMessageEx((struct tagTHREADINFO *)v9, v9[59], 8u, 0LL, 0, *v6, 0LL, 0LL);
    if ( BugCheckParameter3[0] != -1LL )
    {
      v12 = PtiCurrent(v11, v10);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v12, BugCheckParameter3);
    }
  }
}
