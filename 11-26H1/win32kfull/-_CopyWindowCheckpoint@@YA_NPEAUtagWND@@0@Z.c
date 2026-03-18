/*
 * XREFs of ?_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z @ 0x1401661C0
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140165EB4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall _CopyWindowCheckpoint(struct tagWND *a1, struct tagWND *a2)
{
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v6; // rcx
  struct tagRECT v7; // xmm0
  __int64 v8; // rax
  struct CHECKPOINT *v9; // rax
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT v13; // [rsp+30h] [rbp-20h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41374), 1u);
  if ( !Prop )
    return 0;
  v6 = *(_QWORD *)Prop;
  v7 = *(struct tagRECT *)(Prop + 20);
  v8 = *(_QWORD *)(Prop + 8);
  v11 = v6;
  v13 = v7;
  v12 = v8;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    TransformRectBetweenCoordinateSpaces(&v13, &v13, a2, a1);
    TransformPointBetweenCoordinateSpaces(&v11, &v11, a2, a1);
    TransformPointBetweenCoordinateSpaces(&v12, &v12, a2, a1);
  }
  v9 = CHECKPOINT::Restore(a2, &v13);
  if ( !v9 )
    return 0;
  *(_QWORD *)v9 = v11;
  *((_QWORD *)v9 + 1) = v12;
  return 1;
}
