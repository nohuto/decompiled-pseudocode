/*
 * XREFs of NtUserGetPointerDevices @ 0x1401965D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400828F0 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140082A30 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _GetPointerDeviceInfoProperties @ 0x140197550 (_GetPointerDeviceInfoProperties.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2)
{
  int v4; // edi
  unsigned int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  struct W32_PUSH_LOCK *Lock; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  struct DEVICEINFO *i; // r14
  __int64 v14; // rcx
  unsigned int *v16; // rax
  unsigned int v17; // eax
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DEVICEINFO *j; // r14
  _BYTE v22[16]; // [rsp+50h] [rbp-68h] BYREF
  CBaseInput *v23; // [rsp+60h] [rbp-58h]
  _BYTE v24[72]; // [rsp+70h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v22, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v24);
  if ( a1 )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(UserSessionState + 16840));
    W32AcquirePushLockSharedEx(Lock, 0);
    v12 = W32GetUserSessionState(v11, v10);
    for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v12 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( (*((_DWORD *)i + 46) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)i + 57)) )
        ++v5;
    }
    if ( a2 )
    {
      v16 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v16 = (unsigned int *)MmUserProbeAddress;
      v17 = *v16;
      if ( v17 < v5 )
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (unsigned int *)MmUserProbeAddress;
        *a1 = v5;
        UserSetLastError(122);
      }
      else if ( v17 && v5 )
      {
        ProbeForWrite(a2, 1080LL * v5, 8u);
        v18 = v5 - 1;
        v23 = *(CBaseInput **)(W32GetUserSessionState(v20, v19) + 16840);
        for ( j = CBaseInput::TmpGetDeviceList(v23); j && v18 >= 0; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          if ( (*((_DWORD *)j + 46) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)j + 57)) )
            GetPointerDeviceInfoProperties(&a2[1080 * v18--], *((_QWORD *)j + 57));
        }
        v4 = 1;
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (unsigned int *)MmUserProbeAddress;
        *a1 = v5;
      }
      else
      {
        UserSetLastError(15299);
      }
    }
    else
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (unsigned int *)MmUserProbeAddress;
      *a1 = v5;
      v4 = 1;
    }
    W32ReleasePushLockSharedEx(Lock, 0LL);
  }
  else
  {
    UserSetLastError(87);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v24);
  UserSessionSwitchLeaveCrit(v14);
  return v4;
}
