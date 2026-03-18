/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14004047C
 * Callers:
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1400406C0 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     MNInitUAHMenuItem @ 0x1400434AC (MNInitUAHMenuItem.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x140048F9C (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

char __fastcall xxxSendMenuDrawItemMessage(
        __int64 a1,
        int a2,
        struct tagMENU ***a3,
        struct tagMENU ***a4,
        int a5,
        int a6,
        struct tagWND *a7)
{
  struct tagWND *v7; // rdi
  struct tagMENU *v12; // rcx
  BOOL v13; // r14d
  int v14; // r15d
  struct tagMENU **v15; // rax
  unsigned __int64 v16; // rcx
  struct tagMENU *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // rax
  struct tagMENU *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagMENU *v24; // rcx
  struct tagMENU *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct tagTHREADINFO *v28; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-B1h] BYREF
  ULONG_PTR v31[2]; // [rsp+50h] [rbp-A1h] BYREF
  _BYTE v32[16]; // [rsp+60h] [rbp-91h] BYREF
  int v33; // [rsp+70h] [rbp-81h]
  __int64 v34; // [rsp+A0h] [rbp-51h]
  __int64 v35; // [rsp+A8h] [rbp-49h]
  int v36; // [rsp+B0h] [rbp-41h]
  char v37[56]; // [rsp+B8h] [rbp-39h] BYREF

  v7 = a7;
  memset_0(v32, 0, 0x90uLL);
  v12 = (struct tagMENU *)a3[2];
  v13 = 1;
  if ( !v12 )
    v12 = **a3;
  v14 = MNIsUAHMenu(v12);
  LOBYTE(v15) = MNInitDrawItemStruct(a1, a2, (_DWORD)a3, (_DWORD)a4, a5, a6, (__int64)v32);
  v16 = (unsigned __int64)*a3;
  v17 = **a3;
  if ( *((_QWORD *)v17 + 10) )
  {
    v16 = (unsigned __int64)*a4;
    if ( (*(_DWORD *)*a4 & 0x100) != 0 || *(_QWORD *)(v16 + 96) == -1LL )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *((_QWORD *)**a3 + 10));
      xxxSendMessage(*((struct tagWND **)**a3 + 10), 0x2Bu);
      v20 = PtiCurrent(v19, v18);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v20, BugCheckParameter3);
      v21 = (struct tagMENU *)a3[2];
      if ( !v21 )
        v21 = **a3;
      LOBYTE(v15) = -(char)MNIspItemValid(v21, a4);
      v16 = (unsigned int)-((_BYTE)v15 != 0);
      v13 = (_BYTE)v15 != 0;
    }
  }
  if ( v14 )
  {
    if ( a7 || (v15 = *a3, v16 = (unsigned __int64)**a3, (v7 = *(struct tagWND **)(v16 + 80)) != 0LL) )
    {
      v23 = *(unsigned int *)(W32GetUserSessionState(v16, v17) + 66804);
      if ( (v23 & 0x20) != 0 || *(int *)(W32GetUserSessionState(v23, v22) + 66804) >= 0 )
        v33 &= ~0x100u;
      v24 = (struct tagMENU *)a3[2];
      if ( v24 || (v24 = **a3) != 0LL )
        v34 = *(_QWORD *)v24;
      else
        v34 = 0LL;
      v35 = a1;
      v36 = *(_DWORD *)(*((_QWORD *)v24 + 5) + 40LL);
      if ( v13 )
      {
        v25 = (struct tagMENU *)a3[2];
        if ( !v25 )
          v25 = **a3;
        MNInitUAHMenuItem(v25, a4, v37);
      }
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v31, v7);
      xxxSendMessage(v7, 0x92u);
      v28 = PtiCurrent(v27, v26);
      LOBYTE(v15) = Win32HM_UnlockFromThread<0>((ULONG_PTR)v28, v31);
    }
  }
  return (char)v15;
}
