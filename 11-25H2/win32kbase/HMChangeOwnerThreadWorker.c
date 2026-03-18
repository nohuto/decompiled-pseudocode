/*
 * XREFs of HMChangeOwnerThreadWorker @ 0x1401A5428
 * Callers:
 *     MarkThreadsObjects @ 0x1400AE490 (MarkThreadsObjects.c)
 *     HMChangeOwnerThread @ 0x140140470 (HMChangeOwnerThread.c)
 * Callees:
 *     EtwTraceUserUpdateHandleOwner @ 0x14003AE50 (EtwTraceUserUpdateHandleOwner.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x14003AEB0 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     _HMPheFromObjectWorker @ 0x14003B3B0 (_HMPheFromObjectWorker.c)
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     _HMPkheFromObjectWorker @ 0x1400E3FE8 (_HMPkheFromObjectWorker.c)
 *     LockObjectAssignment @ 0x1400EBD60 (LockObjectAssignment.c)
 *     GetClassPtr @ 0x140140E90 (GetClassPtr.c)
 *     IsGetClassPtrSupported @ 0x140147C14 (IsGetClassPtrSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

LONG_PTR __fastcall HMChangeOwnerThreadWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  LONG_PTR result; // rax
  __int64 v7; // rsi
  LONG_PTR v8; // r14
  HANDLE ThreadId; // rax
  unsigned __int8 v10; // cl
  char EtwUserHandleType; // al
  char v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int (*v15)(void); // rax
  unsigned int (__fastcall *v16)(__int64); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *ClassPtr; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 CurrentProcessWin32Process; // rax
  void *v24; // rbx
  __int64 UserSessionState; // rax
  int (*v26)(void); // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  void (__fastcall *v30)(__int64, __int64); // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 (__fastcall *v36)(__int64, __int64); // rax

  v4 = HMPheFromObjectWorker((int *)a1, a2);
  result = HMPkheFromObjectWorker((int *)a1, v5);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = result;
  if ( v7 != a2 )
  {
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 8) + 464LL) + 68LL);
    *(_QWORD *)(result + 8) = a2;
    ThreadId = PsGetThreadId(*(PETHREAD *)a2);
    v10 = *(_BYTE *)(v4 + 24);
    *(_QWORD *)(v4 + 8) = ThreadId;
    EtwUserHandleType = GetEtwUserHandleType(v10);
    EtwTraceUserUpdateHandleOwner(**(_QWORD **)v8, EtwUserHandleType, v12);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(v8 + 8);
    result = *(_QWORD *)(v8 + 8);
    ++*(_DWORD *)(*(_QWORD *)(result + 464) + 68LL);
    v14 = (unsigned int)*(unsigned __int8 *)(v4 + 24) - 1;
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      ++*(_DWORD *)(a2 + 944);
      --*(_DWORD *)(v7 + 944);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
      {
        v14 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 48);
        v15 = *(int (**)(void))(v14 + 2960);
        if ( v15 )
        {
          if ( v15() >= 0 )
          {
            v14 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 48);
            v16 = *(unsigned int (__fastcall **)(__int64))(v14 + 2968);
            if ( v16 )
            {
              if ( v16(a1) )
              {
                ++*(_DWORD *)(a2 + 948);
                --*(_DWORD *)(v7 + 948);
              }
            }
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 380) & 0x10000000) != 0 )
      {
        --*(_DWORD *)(v7 + 952);
        if ( (*(_BYTE *)(HMPheFromObject((int *)a1, v13) + 25) & 1) != 0 )
          *(_DWORD *)(a1 + 380) &= ~0x10000000u;
        else
          ++*(_DWORD *)(a2 + 952);
      }
      if ( a1 == *(_QWORD *)(v7 + 824) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4162);
      result = *(_QWORD *)(v7 + 464);
      if ( *(_QWORD *)(a2 + 464) != result )
      {
        if ( (int)IsGetClassPtrSupported(v14, v13) < 0
          || (ClassPtr = (__int64 *)GetClassPtr(
                                      **(unsigned __int16 **)(*(_QWORD *)(a1 + 136) + 8LL),
                                      *(_QWORD *)(a2 + 464),
                                      (__int64)hModuleWin)) == 0LL )
        {
          v20 = *(_QWORD *)(a1 + 24);
          if ( v20 )
          {
            v21 = *(_QWORD *)(*(_QWORD *)(v20 + 40) + 56LL);
            v22 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 464LL);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
            v22 = CurrentProcessWin32Process;
            if ( CurrentProcessWin32Process )
            {
              v21 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
              v22 = v21 & CurrentProcessWin32Process;
            }
          }
          if ( (int)IsGetClassPtrSupported(v21, v17) < 0 )
          {
            ClassPtr = 0LL;
          }
          else
          {
            v24 = hModuleWin;
            UserSessionState = W32GetUserSessionState(v18, v17);
            ClassPtr = (__int64 *)GetClassPtr(
                                    *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 910LL),
                                    v22,
                                    (__int64)v24);
          }
        }
        v26 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48) + 2992LL);
        if ( v26 )
        {
          if ( v26() >= 0 )
          {
            v29 = *(_QWORD *)(v7 + 464);
            v30 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v28, v27) + 48)
                                                          + 3000LL);
            if ( v30 )
              v30(v29, a1);
          }
        }
        v31 = *ClassPtr;
        if ( *ClassPtr )
          v32 = *(_QWORD *)(v31 + 16);
        else
          v32 = 0LL;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL) = v32;
        *(_QWORD *)(a1 + 136) = v31;
        result = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v31, v32) + 48) + 3008LL);
        if ( result )
        {
          result = ((__int64 (*)(void))result)();
          if ( (int)result >= 0 )
          {
            v35 = *(_QWORD *)(a1 + 136);
            v36 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v34, v33) + 48)
                                                             + 3016LL);
            if ( !v36 || (result = v36(v35, a1), !(_DWORD)result) )
            {
              result = *(_QWORD *)(a1 + 136);
              ++*(_DWORD *)(result + 72);
            }
          }
        }
      }
    }
    else if ( *(_BYTE *)(v4 + 24) == 5 )
    {
      result = *(unsigned int *)(a1 + 64);
      if ( (result & 1) != 0 )
        return LockObjectAssignment((void **)(a1 + 80), *(void **)(v7 + 496));
    }
  }
  return result;
}
