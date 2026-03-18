/*
 * XREFs of xxxSetBridgeWindowChild @ 0x1402ACB30
 * Callers:
 *     NtUserSetBridgeWindowChild @ 0x14029E030 (NtUserSetBridgeWindowChild.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14015D430 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402ACA34 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1402C9E84 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 */

__int64 __fastcall xxxSetBridgeWindowChild(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagWND *NextComponentWindow; // rsi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  SetOrClrWF(1, a1, 0xD908u, 1);
  SetOrClrWF(0, a2, 0xF80u, 1);
  SetOrClrWF(1, a2, 0xF40u, 1);
  xxxSetWindowStyle(a2, -20, *(_DWORD *)(*((_QWORD *)a2 + 5) + 24LL) | 0x80000);
  xxxSetParentWorker((struct tagWND **)a2, a1, 0LL, 1);
  if ( *((struct tagWND **)a2 + 13) == a1
    && *(_QWORD *)(*((_QWORD *)a2 + 2) + 472LL) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) )
  {
    if ( (unsigned int)CoreWindowProp::IsHost(a2) )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a2, 0LL);
      if ( NextComponentWindow )
      {
        v8 = PtiCurrent(v6, v5);
        Win32HM_LockIntoThread<0>((__int64)v8, (__int64)NextComponentWindow, BugCheckParameter3);
        xxxEstablishWebviewHostComponentRelationship(NextComponentWindow, a2);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
      }
    }
    return 1;
  }
  else
  {
    SetOrClrWF(0, a1, 0xD908u, 1);
  }
  return v4;
}
