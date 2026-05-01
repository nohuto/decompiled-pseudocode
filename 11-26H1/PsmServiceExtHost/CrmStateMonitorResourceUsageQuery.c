/*
 * XREFs of CrmStateMonitorResourceUsageQuery @ 0x18001D7D8
 * Callers:
 *     CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18001D270 (CrmStateMonitorResourceUsageLocalPollCSCallback.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmpDxUtilsQueryEngineInfo @ 0x18001D988 (CrmpDxUtilsQueryEngineInfo.c)
 *     CrmStateMonitorAttemptNpuContextRefresh @ 0x18006C9A4 (CrmStateMonitorAttemptNpuContextRefresh.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmStateMonitorResourceUsageQuery(__int64 *a1, int a2, _QWORD *a3)
{
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rcx
  unsigned int v10; // esi
  unsigned __int64 v11; // r14
  int v12; // eax
  unsigned __int64 v13; // rdx
  void *v14; // rcx
  _QWORD *v15; // r9
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-40h] BYREF
  _DWORD SystemInformation[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h]
  unsigned __int64 *v22; // [rsp+38h] [rbp-28h]
  __int64 v23; // [rsp+40h] [rbp-20h]
  unsigned __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]

  if ( a2 == 29 )
  {
    v21 = 28LL;
    v23 = 16LL;
    SystemInformation[0] = 45;
    SystemInformation[1] = 1802856515;
    v22 = &v24;
    v25 = 0LL;
    v24 = 0xFFFFFFFF00000001uLL;
    v5 = NtQuerySystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20u, 0LL);
    if ( v5 >= 0 )
    {
      v6 = v25;
      v7 = -1LL;
      if ( *a1 != -1 )
        v7 = v25 - *a1;
      *a3 = v7;
      *a1 = v6;
      return 0;
    }
  }
  else
  {
    if ( a2 != 42 )
      return (unsigned int)-1073741811;
    v9 = *a1;
    v10 = 0;
    v11 = 0LL;
    v19 = 0;
    v24 = 0LL;
    if ( v9 && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 8) + 40LL))(*(_QWORD *)(v9 + 8))
      || (v5 = CrmStateMonitorAttemptNpuContextRefresh(a1), v5 >= 0) )
    {
      v12 = CrmpDxUtilsQueryEngineInfo(*a1, &v19, &v24);
      v11 = v24;
      v5 = v12;
      if ( v12 < 0 )
      {
        v10 = v19;
      }
      else
      {
        if ( *((_DWORD *)a1 + 2) )
        {
          v10 = v19;
          v13 = 0LL;
          if ( v19 )
          {
            v15 = (_QWORD *)v24;
            v16 = v19;
            do
            {
              v17 = *v15 - *(_QWORD *)((char *)v15 + a1[2] - v24);
              ++v15;
              v18 = 10 * v17;
              if ( v13 > 10 * v17 )
                v18 = v13;
              v13 = v18;
              --v16;
            }
            while ( v16 );
          }
        }
        else
        {
          v10 = v19;
          v13 = -(__int64)(v19 != 0);
        }
        *a3 = v13;
        v5 = 0;
      }
    }
    v14 = (void *)a1[2];
    if ( v14 )
      HampFreeHeap(v14);
    *((_DWORD *)a1 + 2) = v10;
    a1[2] = v11;
    if ( v5 >= 0 )
      return 0;
  }
  return (unsigned int)v5;
}
