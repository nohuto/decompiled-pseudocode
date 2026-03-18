/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x140063468
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x140063450 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     GetMessageWindow @ 0x140062A3C (GetMessageWindow.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1400632B8 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(HWND a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  struct tagWND *v6; // rdi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  unsigned int v11; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  bool v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = IS_USERCRIT_OWNED_EXCLUSIVE();
  if ( !v16 )
    EnterCrit(1LL, 0LL);
  LOBYTE(v4) = 1;
  v5 = HMValidateHandleNoSecure(a1, v4);
  v6 = (struct tagWND *)v5;
  if ( v5 && (v7 = *(_QWORD *)(v5 + 40), (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    v9 = (_QWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v9 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
    v10 = (_QWORD *)*((_QWORD *)v6 + 2);
    if ( v9 == (_QWORD *)v10[58] || (unsigned int)IsProcessDwm(*v9) )
      goto LABEL_8;
    if ( v6 == (struct tagWND *)GetDesktopWindow((__int64)v6)
      || v6 == (struct tagWND *)GetMessageWindow(v13)
      || (v14 = *((_QWORD *)v6 + 13)) == 0 )
    {
      v14 = 0LL;
    }
    if ( v10[198] == v14 && (v15 = v10[199]) != 0 && v9 == *(_QWORD **)(*(_QWORD *)(v15 + 16) + 464LL) )
    {
LABEL_8:
      v11 = AttachInputQueueToWindow(v6, a2);
      ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
      return v11;
    }
    else
    {
      ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
      return 3221225506LL;
    }
  }
  else
  {
    ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
    return 3221225485LL;
  }
}
