/*
 * XREFs of ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x140134DD4
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x140134230 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _DelegateCapturePointers @ 0x140135024 (_DelegateCapturePointers.c)
 *     ValidateDelegatePointerList @ 0x140136924 (ValidateDelegatePointerList.c)
 */

__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  PERESOURCE *TouchProcessorLock; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  void *v19; // rsi
  unsigned int v20; // ebx
  __int64 v21; // rcx
  int v23; // ecx
  _BYTE v24[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v25; // [rsp+38h] [rbp-50h]
  _QWORD v26[4]; // [rsp+40h] [rbp-48h] BYREF
  char v27; // [rsp+60h] [rbp-28h]
  PERESOURCE *v28; // [rsp+68h] [rbp-20h]

  v5 = a1;
  EnterCrit(0LL, 0LL);
  UserSessionState = W32GetUserSessionState(v7, v6);
  TouchProcessorLock = (PERESOURCE *)CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(UserSessionState + 3256));
  v26[0] = 0LL;
  v27 = 0;
  v28 = TouchProcessorLock;
  ExEnterCriticalRegionAndAcquireResourceExclusive(*TouchProcessorLock);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v26);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v24);
  v12 = *((unsigned int *)PtiCurrent(v10) + 340);
  if ( (v12 & 0x2000) != 0 )
  {
    if ( (_DWORD)v5 && a2 && a3 && a2 != a3 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12, v11);
      ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
      v16 = PsGetCurrentProcessWow64Process(v15, v14);
      ProbeForRead(a3, 4 * v5, v16 != 0 ? 1 : 4);
      v17 = (unsigned __int64)(unsigned int)v5 << 7;
      if ( v17 > 0xFFFFFFFF )
      {
        v23 = 87;
      }
      else
      {
        if ( (unsigned int)v17 < 0x2710000 )
        {
          v18 = Win32AllocPoolZInit((unsigned int)v17, 1885631317LL);
          v19 = (void *)v18;
          if ( v18 )
          {
            if ( (unsigned int)ValidateDelegatePointerList((unsigned int)v5, a2, a3, v18) )
            {
              v20 = DelegateCapturePointers((unsigned int)v5, v19);
            }
            else
            {
              v20 = 0;
              UserSetLastError(87);
            }
            Win32FreePool(v19);
            goto LABEL_12;
          }
        }
        v23 = 8;
      }
    }
    else
    {
      v23 = 87;
    }
  }
  else
  {
    v23 = 5;
  }
  v20 = 0;
  UserSetLastError(v23);
LABEL_12:
  if ( v24[0] )
    --*(_DWORD *)(v25 + 28);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v26);
  ExReleaseResourceAndLeaveCriticalRegion(*v28);
  UserSessionSwitchLeaveCrit(v21);
  return v20;
}
