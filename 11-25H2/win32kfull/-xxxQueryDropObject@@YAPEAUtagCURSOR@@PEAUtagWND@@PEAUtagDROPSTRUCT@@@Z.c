/*
 * XREFs of ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402E0EFC
 * Callers:
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402E0EFC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1402E1078 (xxxDragObject.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _ChildWindowFromPointEx @ 0x140021FDC (_ChildWindowFromPointEx.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x140022254 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     _ScreenToClient @ 0x1401E0CA4 (_ScreenToClient.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402E0EFC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _ClientToScreen @ 0x1402F2CA4 (_ClientToScreen.c)
 */

struct tagCURSOR *__fastcall xxxQueryDropObject(struct tagWND *a1, struct tagDROPSTRUCT *a2)
{
  __int64 v2; // r8
  struct tagPOINT *v3; // r14
  struct tagPOINT v4; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // esi
  struct tagWND *v10; // rbx
  __int64 v11; // rdx
  struct tagCURSOR *result; // rax
  __int64 v13; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-10h] BYREF
  struct tagPOINT v15; // [rsp+90h] [rbp+30h] BYREF
  __int64 DropObject; // [rsp+98h] [rbp+38h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = (struct tagPOINT *)((char *)a2 + 32);
  v4 = (struct tagPOINT)*((_QWORD *)a2 + 4);
  DropObject = 0LL;
  v15 = v4;
  if ( !PtInRect((_DWORD *)(v2 + 88), *(_QWORD *)&v4)
    || (*(_BYTE *)(v7 + 31) & 8) != 0
    || tagWND::PtOutsideClipRgnOrMaxClip(a1, &v15) )
  {
    return 0LL;
  }
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_BYTE *)(v8 + 31) & 0x20;
  if ( (*(_BYTE *)(v8 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v8 + 104), *(_QWORD *)&v4) )
  {
    ScreenToClient((__int64)a1, &v15);
    v10 = ChildWindowFromPointEx((tagWND **)a1, v15, (unsigned __int8)v9 + 3);
    ClientToScreen(a1, &v15);
    if ( v10 )
    {
      if ( v10 != a1 )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v10);
        DropObject = (__int64)xxxQueryDropObject(v10, a2);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v11);
        result = (struct tagCURSOR *)DropObject;
        if ( DropObject )
          return result;
      }
    }
    v4 = v15;
  }
  ScreenToClient((__int64)a1, v3);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a1;
  result = (struct tagCURSOR *)xxxSendTransformableMessageTimeout(
                                 (struct tagTHREADINFO **)a1,
                                 555LL,
                                 v9,
                                 a2,
                                 2u,
                                 0xBB8u,
                                 (unsigned __int64 *)&DropObject,
                                 1,
                                 0);
  if ( result )
    result = (struct tagCURSOR *)DropObject;
  else
    DropObject = 0LL;
  if ( !result )
    goto LABEL_17;
  if ( result != (struct tagCURSOR *)1 )
  {
    LOBYTE(v13) = 3;
    result = (struct tagCURSOR *)HMValidateHandleWithDescriptor((__int64)result, v13);
  }
  if ( !result )
LABEL_17:
    *v3 = v4;
  return result;
}
