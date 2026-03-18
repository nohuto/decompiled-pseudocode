/*
 * XREFs of ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x140219D50
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UpdateWinIniInt @ 0x1401D5E24 (UpdateWinIniInt.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x140282EAC (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetIMEShowStatus(__int64 a1, __int64 a2, int *a3)
{
  int v4; // esi
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProfileUserName; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h]
  __int128 v22; // [rsp+38h] [rbp-18h]
  __int64 v23; // [rsp+48h] [rbp-8h]

  *a3 = 0;
  v4 = a2;
  v5 = a1;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 14304) == (_DWORD)a1 )
    return 1LL;
  if ( !v4 )
  {
LABEL_11:
    *(_DWORD *)(W32GetUserSessionState(v7, v6) + 14304) = v5;
    v13 = *(_DWORD **)(W32GetUserSessionState(v11, v10) + 19872);
    if ( (*v13 & 4) != 0 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18888) )
      {
        v17 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18888);
        if ( *(_QWORD *)(v17 + 120) )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v16) + 18888) + 120LL) + 16LL);
          if ( *(_QWORD *)(v18 + 824) )
          {
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 528), 0, 0) & 1) == 0 )
            {
              Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
                BugCheckParameter3,
                *(_QWORD *)(v18 + 824));
              xxxNotifyImeShowStatus(*(struct tagWND **)(v18 + 824));
              Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v19);
            }
          }
        }
      }
    }
    return 1LL;
  }
  v22 = 0LL;
  v23 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v21 = -1LL;
  ProfileUserName = CreateProfileUserName(BugCheckParameter3);
  if ( ProfileUserName )
    *a3 = UpdateWinIniInt(ProfileUserName, 0x23u, 0xECu);
  if ( *a3 )
  {
    if ( v21 != -1 )
      PopAndFreeAlwaysW32ThreadLock((__int64)BugCheckParameter3, v6);
    goto LABEL_11;
  }
  if ( v21 != -1 )
    PopAndFreeAlwaysW32ThreadLock((__int64)BugCheckParameter3, v6);
  return 0LL;
}
