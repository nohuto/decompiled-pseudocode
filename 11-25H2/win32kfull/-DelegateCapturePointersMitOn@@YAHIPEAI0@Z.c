/*
 * XREFs of ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x140137918
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x140137530 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x140137D10 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     _DelegateCapturePointers @ 0x140137D48 (_DelegateCapturePointers.c)
 *     ValidateDelegatePointerList @ 0x140138708 (ValidateDelegatePointerList.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14027C8BC (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 */

__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  struct CEResourceLock *TouchProcessorLock; // rax
  void *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  int v21; // ecx
  __int64 v22; // rax
  void *v23; // rbx
  __int64 v24; // rcx
  _BYTE v26[16]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v27[56]; // [rsp+48h] [rbp-50h] BYREF

  v5 = a1;
  EnterCrit(0LL, 0LL);
  UserSessionState = W32GetUserSessionState(v7, v6);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(UserSessionState + 3256));
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v27, TouchProcessorLock, v10);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v26);
  v14 = *((unsigned int *)PtiCurrent(v12, v11) + 340);
  v15 = 0;
  if ( (v14 & 0x2000) == 0 )
  {
    v21 = 5;
    goto LABEL_8;
  }
  if ( !(_DWORD)v5
    || !a2
    || !a3
    || a2 == a3
    || (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14, v13),
        ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4),
        v19 = PsGetCurrentProcessWow64Process(v18, v17),
        ProbeForRead(a3, 4 * v5, v19 != 0 ? 1 : 4),
        v20 = (unsigned __int64)(unsigned int)v5 << 7,
        v20 > 0xFFFFFFFF) )
  {
    v21 = 87;
LABEL_8:
    UserSetLastError(v21);
    goto LABEL_14;
  }
  if ( (unsigned int)v20 >= 0x2710000
    || (v22 = Win32AllocPoolZInit((unsigned int)v20, 1885631317LL), (v23 = (void *)v22) == 0LL) )
  {
    v21 = 8;
    goto LABEL_8;
  }
  if ( (unsigned int)ValidateDelegatePointerList((unsigned int)v5, a2, a3, v22) )
    v15 = DelegateCapturePointers((unsigned int)v5, v23);
  else
    UserSetLastError(87);
  Win32FreePool(v23);
LABEL_14:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v26);
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v27);
  UserSessionSwitchLeaveCrit(v24);
  return v15;
}
