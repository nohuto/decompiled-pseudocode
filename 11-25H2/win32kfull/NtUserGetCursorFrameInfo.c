/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x1401B0A60
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14007B0E8 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1402738F0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(__int64 a1, int a2, _DWORD *a3, int *a4)
{
  __int64 v4; // r14
  int v6; // esi
  __int64 v7; // rdx
  struct tagCURSOR *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct tagCURSOR *VirtualizedDpiCursor; // rdi
  _DWORD *v12; // r8
  _DWORD *v13; // rdx
  struct tagCURSOR *AnimatedCursorFrame; // rax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  v6 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v16, 1LL);
  LOBYTE(v7) = 3;
  v8 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(a1, v7);
  v10 = 0LL;
  if ( v8 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v8);
    v12 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    v13 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    *v13 = *v13;
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) != 0 )
    {
      AnimatedCursorFrame = GetAnimatedCursorFrame(VirtualizedDpiCursor, v4);
      if ( !AnimatedCursorFrame )
        goto LABEL_10;
      v6 = *((_DWORD *)VirtualizedDpiCursor + 23);
      v9 = *(unsigned int *)(*((_QWORD *)VirtualizedDpiCursor + 14) + 4 * v4);
      VirtualizedDpiCursor = AnimatedCursorFrame;
    }
    else
    {
      v9 = 0LL;
    }
    if ( VirtualizedDpiCursor )
    {
      v10 = *(_QWORD *)VirtualizedDpiCursor;
      *a3 = v9;
      *a4 = v6;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
