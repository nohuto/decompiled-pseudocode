/*
 * XREFs of NtUserInjectGesture @ 0x14029A330
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     _PostMessageCheckIL @ 0x1400CA9FC (_PostMessageCheckIL.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _FreeGestureInfo @ 0x1402694A0 (_FreeGestureInfo.c)
 *     AllocGestureInfo @ 0x140269ACC (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x14026EF64 (ValidateGestureInfo.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ValidateGestureCaller @ 0x1402B9A4C (ValidateGestureCaller.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, void *a4, volatile void *Address)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ebx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  _BYTE v26[16]; // [rsp+30h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-B8h] BYREF
  int v28; // [rsp+58h] [rbp-A0h]
  const void *v29; // [rsp+60h] [rbp-98h]
  __int128 v30; // [rsp+70h] [rbp-88h] BYREF
  __int128 v31; // [rsp+80h] [rbp-78h]
  __int128 v32; // [rsp+90h] [rbp-68h]
  SIZE_T Length; // [rsp+A0h] [rbp-58h]
  __int128 v34; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v35; // [rsp+B8h] [rbp-40h]
  __int128 v36; // [rsp+C8h] [rbp-30h]
  SIZE_T v37; // [rsp+D8h] [rbp-20h]

  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v29 = 0LL;
  v9 = EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v12 = v10;
  if ( v10 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v9, v10);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v26);
    if ( a3 || !a4 || a2 )
    {
      v14 = 87;
    }
    else
    {
      v15 = *(_QWORD *)(v12 + 40);
      if ( *(char *)(v15 + 20) >= 0 && *(char *)(v15 + 19) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(v9, v12) )
        {
LABEL_10:
          v13 = 0;
LABEL_24:
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v26);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v24);
          goto LABEL_25;
        }
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0LL;
        Length = 0LL;
        RtlCopyFromUser(&v30, a4, 0x38uLL);
        v34 = v30;
        v35 = v31;
        v36 = v32;
        v37 = Length;
        v18 = Length;
        if ( (_DWORD)Length )
        {
          if ( Address )
            goto LABEL_16;
        }
        else if ( !Address )
        {
LABEL_16:
          if ( Address )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16);
            ProbeForRead(Address, v18, CurrentProcessWow64Process != 0 ? 1 : 4);
            v29 = (const void *)Address;
          }
          if ( (unsigned int)ValidateGestureInfo(&v34) )
          {
            v21 = AllocGestureInfo(v12, 0, (__int64)&v34, v29);
            v22 = v21;
            if ( v21 )
            {
              EtwTracePostInjectedGestureMessage(v12, v21);
              v23 = _HMObjectFromHandle(v22);
              v13 = PostMessageCheckIL(v12, 0x119u, *(unsigned int *)(v23 + 40), v22);
              if ( !v13 )
                FreeGestureInfo(v22);
              goto LABEL_24;
            }
          }
          goto LABEL_10;
        }
        v13 = 0;
        v28 = 0;
        UserSetLastError(87);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v26);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v19);
        goto LABEL_25;
      }
      v14 = 1400;
    }
    v13 = 0;
    UserSetLastError(v14);
    goto LABEL_24;
  }
  v13 = 0;
LABEL_25:
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
