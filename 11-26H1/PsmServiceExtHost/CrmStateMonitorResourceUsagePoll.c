/*
 * XREFs of CrmStateMonitorResourceUsagePoll @ 0x18001F4C8
 * Callers:
 *     CrmStateMonitorResourceUsageTimerCallback @ 0x18001F420 (CrmStateMonitorResourceUsageTimerCallback.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmpDxUtilsQueryEngineInfo @ 0x18001D988 (CrmpDxUtilsQueryEngineInfo.c)
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorStateSet @ 0x180020310 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorAttemptNpuContextRefresh @ 0x18006C9A4 (CrmStateMonitorAttemptNpuContextRefresh.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmStateMonitorResourceUsagePoll(unsigned int *a1, NTSTATUS *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rbx
  unsigned int *v5; // r14
  NTSTATUS v6; // esi
  __int64 v7; // rcx
  unsigned int v8; // r15d
  unsigned __int64 v9; // r12
  int v10; // eax
  void *v11; // rcx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  BOOL v16; // ecx
  unsigned int *i; // rbx
  __int64 result; // rax
  _QWORD *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-89h] BYREF
  int Src; // [rsp+24h] [rbp-85h] BYREF
  __int64 v25; // [rsp+28h] [rbp-81h] BYREF
  _DWORD SystemInformation[2]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v27; // [rsp+38h] [rbp-71h]
  unsigned __int64 *v28; // [rsp+40h] [rbp-69h]
  __int64 v29; // [rsp+48h] [rbp-61h]
  unsigned __int64 v30; // [rsp+50h] [rbp-59h] BYREF
  __int64 v31; // [rsp+58h] [rbp-51h]
  _DWORD v32[10]; // [rsp+60h] [rbp-49h] BYREF
  char v33[40]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+7h]
  __int64 v35; // [rsp+B8h] [rbp+Fh]
  int v36; // [rsp+C0h] [rbp+17h]

  v3 = 0LL;
  v25 = 0LL;
  if ( a2 )
  {
    v6 = *a2;
    v3 = *a3;
  }
  else
  {
    v5 = a1 + 26;
    if ( *a1 == 29 )
    {
      v27 = 28LL;
      v28 = &v30;
      v29 = 16LL;
      SystemInformation[0] = 45;
      SystemInformation[1] = 1802856515;
      v31 = 0LL;
      v30 = 0xFFFFFFFF00000001uLL;
      v6 = NtQuerySystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20u, 0LL);
      if ( v6 < 0 )
        goto LABEL_20;
      if ( *(_QWORD *)v5 == -1LL )
        v3 = -1LL;
      else
        v3 = v31 - *(_QWORD *)v5;
      *(_QWORD *)v5 = v31;
      goto LABEL_19;
    }
    if ( *a1 == 42 )
    {
      v7 = *(_QWORD *)v5;
      v8 = 0;
      v9 = 0LL;
      v23 = 0;
      v30 = 0LL;
      if ( v7 && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 8) + 40LL))(*(_QWORD *)(v7 + 8))
        || (v6 = CrmStateMonitorAttemptNpuContextRefresh(v5), v6 >= 0) )
      {
        v10 = CrmpDxUtilsQueryEngineInfo(*(_QWORD *)v5, &v23, &v30);
        v9 = v30;
        v6 = v10;
        if ( v10 < 0 )
        {
          v8 = v23;
        }
        else
        {
          if ( v5[2] )
          {
            v8 = v23;
            if ( v23 )
            {
              v19 = (_QWORD *)v30;
              v20 = v23;
              do
              {
                v21 = *v19 - *(_QWORD *)((char *)v19 + *((_QWORD *)v5 + 2) - v30);
                ++v19;
                v22 = 10 * v21;
                if ( v3 > 10 * v21 )
                  v22 = v3;
                v3 = v22;
                --v20;
              }
              while ( v20 );
            }
          }
          else
          {
            v8 = v23;
            v3 = -(__int64)(v23 != 0);
          }
          v6 = 0;
        }
      }
      v11 = (void *)*((_QWORD *)v5 + 2);
      if ( v11 )
        HampFreeHeap(v11);
      v5[2] = v8;
      *((_QWORD *)v5 + 2) = v9;
      if ( v6 >= 0 )
LABEL_19:
        v6 = 0;
    }
    else
    {
      v6 = -1073741811;
    }
  }
LABEL_20:
  v12 = 0LL;
  if ( v6 >= 0 )
    v12 = v3;
  RtlQueryUnbiasedInterruptTime(&v25);
  if ( v25 == *((_QWORD *)a1 + 12) )
  {
    LODWORD(v14) = 100;
  }
  else
  {
    v13 = v25 - *((_QWORD *)a1 + 12);
    if ( v12 != -1LL )
      v13 = v12;
    v14 = 100 * v13 / (v25 - *((_QWORD *)a1 + 12));
  }
  Src = v14;
  RtlAcquireSRWLockExclusive(a1 + 2);
  a1[4] = GetCurrentThreadId();
  memset_0(v32, 0, 0x68uLL);
  v15 = CrmStateMonitorStateSizeGet(*a1);
  memcpy_0(v33, *((const void **)a1 + 5), v15);
  memcpy_0(v32, &Src, v15);
  v16 = 1;
  if ( *a1 == 5 )
    v16 = v32[0] == 20 * (v32[0] / 0x14u);
  v35 = *((_QWORD *)a1 + 6);
  v34 = MEMORY[0x7FFE0008];
  if ( v16 )
    *((_QWORD *)a1 + 6) = MEMORY[0x7FFE0008];
  else
    v36 = 1;
  **((_DWORD **)a1 + 5) = Src;
  for ( i = (unsigned int *)*((_QWORD *)a1 + 3); i != a1 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, int *))i - 1))(i - 2, *a1, &Src);
  a1[4] = 0;
  RtlReleaseSRWLockExclusive(a1 + 2);
  CrmLogStateMonitorStateSet(a1, v32);
  result = v25;
  *((_QWORD *)a1 + 12) = v25;
  return result;
}
