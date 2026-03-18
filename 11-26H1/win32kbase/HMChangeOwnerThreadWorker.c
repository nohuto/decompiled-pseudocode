/*
 * XREFs of HMChangeOwnerThreadWorker @ 0x140094AC0
 * Callers:
 *     HMChangeOwnerThread @ 0x1400949B0 (HMChangeOwnerThread.c)
 *     MarkThreadsObjects @ 0x1400949D0 (MarkThreadsObjects.c)
 * Callees:
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     _HMPheFromObjectWorker @ 0x140071E30 (_HMPheFromObjectWorker.c)
 *     IsGetClassPtrSupported @ 0x14009491C (IsGetClassPtrSupported.c)
 *     GetClassPtr @ 0x140094954 (GetClassPtr.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x140094E50 (EtwTraceUserUpdateHandleOwner.c)
 *     _HMPkheFromObjectWorker @ 0x140094FC8 (_HMPkheFromObjectWorker.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140095370 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     LockObjectAssignment @ 0x1400BC070 (LockObjectAssignment.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HMChangeOwnerThreadWorker(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // r14
  HANDLE ThreadId; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int EtwUserHandleType; // eax
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *ClassPtr; // rbx
  int (*v18)(void); // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  void (__fastcall *v21)(__int64, __int64); // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64); // rax
  int (*v28)(void); // rax
  unsigned int (__fastcall *v29)(__int64); // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 CurrentProcessWin32Process; // rax
  int v34; // edx
  int v35; // r8d
  void *v36; // rbx
  __int64 UserSessionState; // rax

  v5 = HMPheFromObjectWorker((_DWORD *)a1, a2, a3);
  result = HMPkheFromObjectWorker(a1);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = result;
  if ( v7 != a2 )
  {
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 8) + 456LL) + 68LL);
    *(_QWORD *)(result + 8) = a2;
    ThreadId = PsGetThreadId(*(PETHREAD *)a2);
    LOBYTE(v10) = *(_BYTE *)(v5 + 24);
    *(_QWORD *)(v5 + 8) = ThreadId;
    EtwUserHandleType = GetEtwUserHandleType(v10, v11, (unsigned int)ThreadId & 0xFFFFFFFC);
    EtwTraceUserUpdateHandleOwner(**(_QWORD **)v8, EtwUserHandleType);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(v8 + 8);
    result = *(_QWORD *)(v8 + 8);
    ++*(_DWORD *)(*(_QWORD *)(result + 456) + 68LL);
    v15 = (unsigned int)*(unsigned __int8 *)(v5 + 24) - 1;
    if ( *(_BYTE *)(v5 + 24) == 1 )
    {
      ++*(_DWORD *)(a2 + 932);
      --*(_DWORD *)(v7 + 932);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
      {
        v15 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v15) + 48);
        v28 = *(int (**)(void))(v15 + 2576);
        if ( v28 )
        {
          if ( v28() >= 0 )
          {
            v15 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v15) + 48);
            v29 = *(unsigned int (__fastcall **)(__int64))(v15 + 2584);
            if ( v29 )
            {
              if ( v29(a1) )
              {
                ++*(_DWORD *)(a2 + 936);
                --*(_DWORD *)(v7 + 936);
              }
            }
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 380) & 0x10000000) != 0 )
      {
        --*(_DWORD *)(v7 + 940);
        if ( (*(_BYTE *)(HMPheFromObject((_DWORD *)a1, v13, v14) + 25) & 1) != 0 )
          *(_DWORD *)(a1 + 380) &= ~0x10000000u;
        else
          ++*(_DWORD *)(a2 + 940);
      }
      if ( a1 == *(_QWORD *)(v7 + 816) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4183LL);
      result = *(_QWORD *)(v7 + 456);
      if ( *(_QWORD *)(a2 + 456) != result )
      {
        if ( (int)IsGetClassPtrSupported(v15) < 0
          || (ClassPtr = (__int64 *)GetClassPtr(
                                      **(unsigned __int16 **)(*(_QWORD *)(a1 + 136) + 8LL),
                                      *(_QWORD *)(a2 + 456),
                                      (__int64)hModuleWin)) == 0LL )
        {
          v30 = *(_QWORD *)(a1 + 24);
          if ( v30 )
          {
            v31 = *(_QWORD *)(*(_QWORD *)(v30 + 40) + 24LL);
            v32 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 456LL);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
            v32 = CurrentProcessWin32Process;
            if ( CurrentProcessWin32Process )
            {
              v31 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
              v32 = v31 & CurrentProcessWin32Process;
            }
          }
          if ( (int)IsGetClassPtrSupported(v31) < 0 )
          {
            ClassPtr = 0LL;
          }
          else
          {
            v36 = hModuleWin;
            UserSessionState = W32GetUserSessionState(v16, v34, v35);
            ClassPtr = (__int64 *)GetClassPtr(
                                    *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 910LL),
                                    v32,
                                    (__int64)v36);
          }
        }
        v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16) + 48) + 2608LL);
        if ( v18 )
        {
          if ( v18() >= 0 )
          {
            v20 = *(_QWORD *)(v7 + 456);
            v21 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 48) + 2616LL);
            if ( v21 )
              v21(v20, a1);
          }
        }
        v22 = *ClassPtr;
        v23 = *(_QWORD *)(a1 + 40);
        if ( *ClassPtr )
          v24 = *(_QWORD *)(v22 + 16);
        else
          v24 = 0LL;
        *(_QWORD *)(v23 + 128) = v24;
        *(_QWORD *)(a1 + 136) = v22;
        result = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23) + 48) + 2624LL);
        if ( result )
        {
          result = ((__int64 (*)(void))result)();
          if ( (int)result >= 0 )
          {
            v26 = *(_QWORD *)(a1 + 136);
            v27 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 48)
                                                             + 2632LL);
            if ( !v27 || (result = v27(v26, a1), !(_DWORD)result) )
            {
              result = *(_QWORD *)(a1 + 136);
              ++*(_DWORD *)(result + 72);
            }
          }
        }
      }
    }
    else if ( *(_BYTE *)(v5 + 24) == 5 )
    {
      result = *(unsigned int *)(a1 + 64);
      if ( (result & 1) != 0 )
        return LockObjectAssignment(a1 + 80, *(_QWORD *)(v7 + 488));
    }
  }
  return result;
}
