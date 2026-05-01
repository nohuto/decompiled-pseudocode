/*
 * XREFs of CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180021120
 * Callers:
 *     <none>
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmpDxUtilsQueryEngineInfo @ 0x18001D988 (CrmpDxUtilsQueryEngineInfo.c)
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorStateSet @ 0x180020310 (CrmLogStateMonitorStateSet.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorAttemptNpuContextRefresh @ 0x18006C9A4 (CrmStateMonitorAttemptNpuContextRefresh.c)
 *     CrmStateMonitorNpuUsageContextCleanup @ 0x18006CA40 (CrmStateMonitorNpuUsageContextCleanup.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmIsolatedPollingWorkerNpuUsageTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned __int64 v6; // r15
  __int64 v7; // r12
  int v8; // eax
  int v9; // r14d
  void *v10; // rcx
  unsigned int *v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  BOOL v16; // ecx
  unsigned int *i; // rbx
  __int64 v18; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int Src; // [rsp+28h] [rbp-69h] BYREF
  __int64 v26; // [rsp+30h] [rbp-61h] BYREF
  __int64 v27; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v28[10]; // [rsp+48h] [rbp-49h] BYREF
  char v29[40]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v30; // [rsp+98h] [rbp+7h]
  __int64 v31; // [rsp+A0h] [rbp+Fh]
  int v32; // [rsp+A8h] [rbp+17h]

  v2 = a2 + 32;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = 0;
  v27 = 0LL;
  Src = 0;
  v6 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  if ( v3 && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 8) + 40LL))(*(_QWORD *)(v3 + 8))
    || (v9 = CrmStateMonitorAttemptNpuContextRefresh(v2), v9 >= 0) )
  {
    v8 = CrmpDxUtilsQueryEngineInfo(*(_QWORD *)v2, &Src, &v26);
    v7 = v26;
    v9 = v8;
    if ( v8 < 0 )
    {
      v4 = Src;
    }
    else
    {
      if ( *(_DWORD *)(v2 + 8) )
      {
        v4 = Src;
        if ( Src )
        {
          v20 = *(_QWORD **)(v2 + 16);
          v21 = v26 - (_QWORD)v20;
          v22 = Src;
          do
          {
            v23 = *(_QWORD *)((char *)v20 + v21) - *v20;
            ++v20;
            v24 = 10 * v23;
            if ( v6 > 10 * v23 )
              v24 = v6;
            v6 = v24;
            --v22;
          }
          while ( v22 );
        }
      }
      else
      {
        v4 = Src;
        v6 = -(__int64)(Src != 0);
      }
      v9 = 0;
    }
  }
  v10 = *(void **)(v2 + 16);
  if ( v10 )
    HampFreeHeap(v10);
  *(_DWORD *)(v2 + 8) = v4;
  *(_QWORD *)(v2 + 16) = v7;
  if ( v9 >= 0 )
    v9 = 0;
  CempLockAcquireExclusive(a2);
  v11 = *(unsigned int **)(a2 + 24);
  if ( v11 )
  {
    v26 = 0LL;
    v12 = 0LL;
    if ( v9 >= 0 )
      v12 = v6;
    RtlQueryUnbiasedInterruptTime(&v26);
    if ( v26 == *((_QWORD *)v11 + 12) )
    {
      LODWORD(v14) = 100;
    }
    else
    {
      v13 = v26 - *((_QWORD *)v11 + 12);
      if ( v12 != -1LL )
        v13 = v12;
      v14 = 100 * v13 / (v26 - *((_QWORD *)v11 + 12));
    }
    Src = v14;
    CempLockAcquireExclusive(v11 + 2);
    memset_0(v28, 0, 0x68uLL);
    v15 = CrmStateMonitorStateSizeGet(*v11);
    memcpy_0(v29, *((const void **)v11 + 5), v15);
    memcpy_0(v28, &Src, v15);
    v16 = 1;
    if ( *v11 == 5 )
      v16 = v28[0] == 20 * (v28[0] / 0x14u);
    v31 = *((_QWORD *)v11 + 6);
    v30 = MEMORY[0x7FFE0008];
    if ( v16 )
      *((_QWORD *)v11 + 6) = MEMORY[0x7FFE0008];
    else
      v32 = 1;
    **((_DWORD **)v11 + 5) = Src;
    for ( i = (unsigned int *)*((_QWORD *)v11 + 3); i != v11 + 6; i = *(unsigned int **)i )
      (*((void (__fastcall **)(unsigned int *, _QWORD, unsigned int *))i - 1))(i - 2, *v11, &Src);
    v11[4] = 0;
    RtlReleaseSRWLockExclusive(v11 + 2);
    CrmLogStateMonitorStateSet((int *)v11, (__int64)v28);
    *((_QWORD *)v11 + 12) = v26;
    v18 = *(_QWORD *)(a2 + 16);
    v27 = -100000000LL;
    TpSetTimer(v18, &v27, 0LL, 2000LL);
  }
  else
  {
    TpSetTimer(*(_QWORD *)(a2 + 16), 0LL, 0LL, 0LL);
    CrmStateMonitorNpuUsageContextCleanup(a2 + 32);
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  *(_DWORD *)(a2 + 8) = 0;
  return RtlReleaseSRWLockExclusive(a2);
}
