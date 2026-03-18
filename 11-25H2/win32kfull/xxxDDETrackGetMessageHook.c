/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x140255BA4
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x140245110 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     SfnSENTDDEMSG @ 0x1402BCE50 (SfnSENTDDEMSG.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateCatHandleNoSecure @ 0x140064B20 (HMValidateCatHandleNoSecure.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140187B78 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1401DCF78 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     FreeDdeXact @ 0x14026C370 (FreeDdeXact.c)
 *     ??1?$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ @ 0x1402B10D0 (--1-$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1402B1DA8 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1402B22C0 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1402B2CE4 (xxxFreeDdeConv.c)
 *     xxxClientCopyDDEOut1 @ 0x1402BD4C4 (xxxClientCopyDDEOut1.c)
 *     HMValidateHandleNoRipNoIL @ 0x1402F2B7C (HMValidateHandleNoRipNoIL.c)
 */

void __fastcall xxxDDETrackGetMessageHook(__int64 a1)
{
  __int64 v2; // rax
  struct tagWND *v3; // rsi
  __int64 v4; // rdx
  struct tagWND *v5; // rax
  __int64 v6; // rdx
  struct tagDDECONV *DdeConv; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  struct tagFREELIST *v13; // rcx
  __int64 v14; // rdx
  struct tagDDECONV *v15; // rax
  __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // r14d
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdx
  ULONG_PTR v28[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v29[2]; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( *(_DWORD *)(a1 + 8) == 993 )
  {
    v2 = ValidateHwnd(*(_QWORD *)a1);
    v3 = (struct tagWND *)v2;
    if ( !v2 )
      return;
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v2);
    v5 = (struct tagWND *)HMValidateCatHandleNoSecure(*(_QWORD *)(a1 + 16), v4);
    if ( v5 )
    {
      DdeConv = FindDdeConv(v3, v5);
      v9 = (__int64)DdeConv;
      if ( !DdeConv )
      {
LABEL_17:
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v8);
        return;
      }
      v10 = *((unsigned int *)DdeConv + 20);
      if ( (v10 & 2) != 0 && (v11 = *((_QWORD *)DdeConv + 4), (*(_DWORD *)(v11 + 80) & 2) != 0) )
      {
        v12 = PtiCurrent(v11, v10);
        Win32HM_LockIntoThread<0>((__int64)v12, v9, v29);
        v13 = *(struct tagFREELIST **)(v9 + 72);
        if ( v13 )
        {
          *(_QWORD *)(v9 + 72) = 0LL;
          xxxFreeListFree(v13);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(v9) + 25) & 1) == 0 )
          *(_QWORD *)(v9 + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(v9 + 32));
        v15 = (struct tagDDECONV *)Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v29, v14);
        if ( v15 )
          xxxFreeDdeConv(v15);
        Win32HMThreadLockBase<tagDDECONV,0,1>::~Win32HMThreadLockBase<tagDDECONV,0,1>((ULONG_PTR)v29);
      }
      else
      {
        v6 = (unsigned int)v10 | 8;
        *((_DWORD *)DdeConv + 20) = v6;
      }
    }
    if ( (GetAppCompatFlags2(39168LL, v6) & 0x2000) != 0 )
      xxxCleanupDdeConv(v3);
    goto LABEL_17;
  }
  v16 = (__int64 *)(a1 + 24);
  v17 = HMValidateHandleNoRipNoIL(*(_QWORD *)(a1 + 24));
  v20 = v17;
  if ( v17 )
  {
    v21 = *(_DWORD *)(v17 + 64);
    v22 = PtiCurrent(v19, v18);
    Win32HM_LockIntoThread<0>((__int64)v22, v20, v28);
    v23 = *(_QWORD *)(v20 + 56);
    v24 = xxxClientCopyDDEOut1(v23);
    if ( v24 )
    {
      v26 = *(_QWORD *)(v23 + 24);
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 993;
      v26 = 0LL;
    }
    *v16 = v24;
    if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v28, v25) )
    {
      if ( (v21 & 0x200) != 0 )
      {
        FreeDdeXact((struct _HEAD *)v20);
      }
      else if ( *(_QWORD *)(v20 + 40) )
      {
        *(_QWORD *)(v20 + 48) = v26;
      }
      else
      {
        *(_QWORD *)(v20 + 40) = v26;
      }
    }
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v28, v27);
  }
  else
  {
    *v16 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
