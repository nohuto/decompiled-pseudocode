/*
 * XREFs of xxxSendMinRectMessages @ 0x14002ADF4
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserGetWindowMinimizeRect @ 0x14002A900 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1401A73E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     xxxMinimizeHungWindow @ 0x14026BDFC (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x14002139C (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v4; // rsi
  struct tagTHREADINFO *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  struct tagWND *i; // r8
  struct tagTHREADINFO *v9; // rax
  struct tagWND *v10; // rax
  struct tagWND *v11; // rdi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v15; // [rsp+70h] [rbp-38h]
  unsigned int v16; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+18h] BYREF

  v2 = 0;
  if ( a1 )
    v4 = *a1;
  else
    v4 = 0LL;
  v5 = PtiCurrent();
  if ( ((*((_DWORD *)v5 + 180) | *(_DWORD *)(**((_QWORD **)v5 + 63) + 16LL)) & 0x800) != 0 )
  {
    xxxCallHook(5, v4, a2, 10);
    v2 = 1;
  }
  v6 = *((_QWORD *)v5 + 63);
  if ( *(_QWORD *)(v6 + 224) )
  {
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v14, *((_QWORD *)v5 + 62));
    v16 = 0;
    for ( i = 0LL; ; i = v11 )
    {
      v10 = VWPLNextBase(*(struct tagVWPL **)(v6 + 224), v7, i, &v16);
      v11 = v10;
      if ( !v10 )
        break;
      v17 = 0LL;
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v10);
      if ( xxxSendTransformableMessageTimeout(v11, 0x8Bu, 0, 100, (__int64)&v17, 1, 0) )
        v2 = 1;
      v9 = PtiCurrent();
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter3);
    }
    if ( v15 != -1 )
      PopAndFreeW32ThreadLock(v14);
  }
  return v2;
}
