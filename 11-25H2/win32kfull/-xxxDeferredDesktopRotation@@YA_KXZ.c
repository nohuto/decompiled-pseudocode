/*
 * XREFs of ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x14022E674
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140059094 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     NtUserDeferredDesktopRotation @ 0x140295460 (NtUserDeferredDesktopRotation.c)
 * Callees:
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14022E770 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 */

unsigned __int64 __fastcall xxxDeferredDesktopRotation(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  _QWORD v14[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-10h]
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v3 = (_QWORD *)*((_QWORD *)PtiCurrent(a1, a2) + 62);
  v4 = (__int64 *)v3[1];
  if ( v4 )
  {
    v5 = *v4;
    v6 = *(_DWORD *)(*v4 + 64);
    if ( (v6 & 2) != 0 )
    {
      *(_DWORD *)(v5 + 64) = v6 & 0xFFFFFFFD;
      v7 = v3[33];
      v3[33] = 0LL;
      v8 = PtiCurrent(v5, v2);
      v14[0] = *((_QWORD *)v8 + 48);
      *((_QWORD *)v8 + 48) = v14;
      v14[2] = _lambda_27f747716261ed0f75ba1156a6124405_::_lambda_invoker_cdecl_;
      v14[1] = v7;
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v15, v3);
      v17 = 0;
      UserSessionState = W32GetUserSessionState(v10, v9);
      xxxDesktopsRecalcAndBroadcastDisplayChange(
        v3,
        v7,
        *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 6996LL),
        1LL,
        &v17,
        0LL);
      if ( v16 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)v15, v12);
        v16 = -1LL;
      }
      PopAndFreeW32ThreadLock((__int64)v14, v12);
    }
  }
  return 0LL;
}
