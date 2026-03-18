/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x14013E448
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x14013E430 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x14013E5A0 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     _GetAncestor @ 0x14013EA2C (_GetAncestor.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(__int64 a1, struct IInputQueue *a2)
{
  bool v4; // bl
  __int64 v5; // rax
  struct tagWND *v6; // rsi
  __int64 v7; // rcx
  int v8; // edx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rbp
  unsigned int v12; // edi
  __int64 v14; // rax

  v4 = IS_USERCRIT_OWNED_EXCLUSIVE(a1, (__int64)a2);
  if ( !v4 )
    EnterCrit(1LL, 0LL);
  v5 = HMValidateHandleNoSecure(a1, 1);
  v6 = (struct tagWND *)v5;
  if ( !v5 || (v7 = *(_QWORD *)(v5 + 40), v8 = *(_WORD *)(v7 + 42) & 0x2FFF, v8 == 669) || v8 == 671 )
  {
    if ( !v4 )
      UserSessionSwitchLeaveCritWithNonPaged();
    return 3221225485LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    v10 = (_QWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
    v11 = (_QWORD *)*((_QWORD *)v6 + 2);
    if ( v10 == (_QWORD *)v11[57]
      || (unsigned int)IsProcessDwm(*v10)
      || v11[198] == GetAncestor(v6, 1LL) && (v14 = v11[199]) != 0 && v10 == *(_QWORD **)(*(_QWORD *)(v14 + 16) + 456LL) )
    {
      v12 = AttachInputQueueToWindow(v6, a2);
      if ( !v4 )
        UserSessionSwitchLeaveCritWithNonPaged();
      return v12;
    }
    else
    {
      if ( !v4 )
        UserSessionSwitchLeaveCritWithNonPaged();
      return 3221225506LL;
    }
  }
}
