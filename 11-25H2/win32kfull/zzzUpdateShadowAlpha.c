/*
 * XREFs of zzzUpdateShadowAlpha @ 0x1400E12FC
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1400E0EB0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     GetRedirectionFlags @ 0x140053D08 (GetRedirectionFlags.c)
 *     GreGetSpriteAttributes @ 0x1400DFB44 (GreGetSpriteAttributes.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1400E12C0 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall zzzUpdateShadowAlpha(struct tagWND *a1, __int64 a2)
{
  struct tagSHADOW *result; // rax
  struct tagSHADOW *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  HWND v9; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  struct tagTHREADINFO *v18; // rax
  unsigned int v19; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-28h] BYREF
  ULONG_PTR v21[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+28h] BYREF
  struct _BLENDFUNCTION v23; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+38h] BYREF

  result = FindShadow(a1, a2);
  v24 = 0;
  v4 = result;
  LODWORD(v22) = 0;
  if ( result )
  {
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v21, (__int64)a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    {
      if ( (GetRedirectionFlags((__int64)a1, v5) & 1) != 0 )
      {
        v23 = 0;
        v8 = IsWindowDesktopComposed(a1);
        v9 = *(HWND *)a1;
        v10 = v8;
        UserSessionState = W32GetUserSessionState(v12, v11);
        if ( (unsigned int)GreGetSpriteAttributes(
                             *(Gre::Base **)(*(_QWORD *)(UserSessionState + 56968) + 48LL),
                             v9,
                             v14,
                             &v19,
                             &v23,
                             &v24,
                             v10) )
        {
          if ( (v24 & 2) != 0 )
          {
            LOWORD(v22) = 0;
            BYTE3(v22) = 1;
            BYTE2(v22) = v23.SourceConstantAlpha;
            Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
              BugCheckParameter3,
              *((_QWORD *)v4 + 1));
            zzzUpdateLayeredWindow(*((WindowActions **)v4 + 1), 0LL, 0LL, 0LL, 0LL, 0LL, 0, (__int64)&v22, 2u, 0LL);
            v17 = PtiCurrent(v16, v15);
            Win32HM_UnlockFromThread<1>((ULONG_PTR)v17, BugCheckParameter3);
          }
        }
      }
    }
    else
    {
      UserSetLastError(87);
    }
    v18 = PtiCurrent(v7, v6);
    return (struct tagSHADOW *)Win32HM_UnlockFromThread<1>((ULONG_PTR)v18, v21);
  }
  return result;
}
