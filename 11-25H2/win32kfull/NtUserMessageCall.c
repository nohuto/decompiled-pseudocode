/*
 * XREFs of NtUserMessageCall @ 0x14001B730
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB60 (--1CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB78 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     LeaveEditionCrit @ 0x14018C880 (LeaveEditionCrit.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ??0EnterLeaveCritSharedOrExclusive@@QEAA@_NW4HandleToObjILCheck@@@Z @ 0x140292764 (--0EnterLeaveCritSharedOrExclusive@@QEAA@_NW4HandleToObjILCheck@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  ULONG_PTR v7; // rdi
  __int64 v8; // r14
  unsigned __int8 v9; // bp
  __int64 v12; // rbx
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  ULONG_PTR *v24; // rax
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+48h] [rbp-50h]
  _BYTE v29[16]; // [rsp+50h] [rbp-48h] BYREF
  char v30; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+18h]

  v31 = a3;
  v7 = 0LL;
  v8 = a2;
  v9 = 0;
  v12 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    UserSetLastError(87);
    return 0LL;
  }
  else
  {
    v13 = a6;
    if ( a6 == 672 || a6 == 694 )
    {
      return 0LL;
    }
    else
    {
      if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 || (unsigned int)(a6 - 695) > 1 )
      {
        if ( a6 == 689 && a2 - 992 > 8 )
          goto LABEL_7;
      }
      else
      {
        v12 = -1LL;
      }
      v9 = 1;
LABEL_7:
      while ( 1 )
      {
        EnterLeaveCritSharedOrExclusive::EnterLeaveCritSharedOrExclusive(&v30, v9);
        CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v15, v14);
        v17 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
        if ( v12 == -1 )
          break;
        v18 = ValidateHwnd(a1);
        v12 = v18;
        if ( !v18 )
        {
          LeaveEditionCrit(&v30);
          return 0LL;
        }
        if ( *(_QWORD *)(v18 + 16) == v17 && (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 18LL) & 4) == 0 || v9 )
          break;
        v9 = 1;
        LeaveEditionCrit(&v30);
      }
      v28 = 0LL;
      BugCheckParameter3 = -1LL;
      if ( v12 != -1 )
      {
        BugCheckParameter3 = *(_QWORD *)(v17 + 456);
        *(_QWORD *)(v17 + 456) = &BugCheckParameter3;
        v28 = v12;
        HMLockObject(v12);
      }
      if ( v9 )
      {
        if ( (unsigned int)v8 >= 0x400 )
        {
          UserSessionState = W32GetUserSessionState();
          v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(UserSessionState
                                                                                      + 8LL * (((_BYTE)v13 + 6) & 0x1F)
                                                                                      + 70920))(
                  v12,
                  (unsigned int)v8,
                  v31,
                  a4,
                  a5);
        }
        else
        {
          _mm_lfence();
          v21 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, bool))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
                  v12,
                  (unsigned int)v8,
                  v31,
                  a4,
                  a5,
                  v13,
                  a7 != 0);
        }
      }
      else
      {
        CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)v29);
        if ( (unsigned int)v8 < 0x400 )
        {
          _mm_lfence();
          v23 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, bool))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
                  v12,
                  (unsigned int)v8,
                  v31,
                  a4,
                  a5,
                  v13,
                  a7 != 0);
        }
        else
        {
          v22 = W32GetUserSessionState();
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(v22
                                                                                      + 8LL * (((_BYTE)v13 + 6) & 0x1F)
                                                                                      + 70920))(
                  v12,
                  (unsigned int)v8,
                  v31,
                  a4,
                  a5);
        }
        v21 = v23;
        CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v29);
      }
      if ( BugCheckParameter3 != -1LL )
      {
        v24 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v20, v19);
        if ( v24 )
          v7 = *v24;
        Win32HM_UnlockFromThread<0>(v7, (ULONG_PTR)&BugCheckParameter3);
      }
      LeaveEditionCrit(&v30);
      return v21;
    }
  }
}
