/*
 * XREFs of CrmpDxUtilsQueryEngineInfo @ 0x18001D988
 * Callers:
 *     CrmStateMonitorResourceUsageQuery @ 0x18001D7D8 (CrmStateMonitorResourceUsageQuery.c)
 *     CrmStateMonitorResourceUsagePoll @ 0x18001F4C8 (CrmStateMonitorResourceUsagePoll.c)
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180021120 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ??$GetPropertyWithInput@KK@IDXCoreAdapter1@@QEAAJW4DXCoreAdapterProperty@@PEBKPEAK@Z @ 0x1800688AC (--$GetPropertyWithInput@KK@IDXCoreAdapter1@@QEAAJW4DXCoreAdapterProperty@@PEBKPEAK@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmpDxUtilsQueryEngineInfo(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 *v3; // r13
  _QWORD *Heap; // rdi
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // r14d
  unsigned int i; // esi
  unsigned int k; // r15d
  unsigned int v10; // ebx
  int PropertyWith; // ebx
  __int64 v12; // rdx
  int v14; // ebx
  unsigned int j; // eax
  bool v16; // cf
  __int64 v17; // rax
  unsigned int m; // eax
  unsigned int n; // esi
  __int64 v20; // r12
  unsigned int v21; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v22; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v23; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-25h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-21h]
  unsigned int v26; // [rsp+5Ch] [rbp-1Dh]
  unsigned int *v27; // [rsp+60h] [rbp-19h]
  _QWORD *v28; // [rsp+68h] [rbp-11h]
  unsigned __int64 v29; // [rsp+70h] [rbp-9h] BYREF
  int v30; // [rsp+78h] [rbp-1h]
  __int128 v31; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(__int64 **)(a1 + 8);
  v23 = 0;
  v29 = 0LL;
  v30 = 0;
  v31 = 0LL;
  v24 = 0;
  Heap = 0LL;
  v21 = 0;
  v22 = 0LL;
  v5 = *v3;
  v28 = a3;
  v27 = a2;
  v6 = (*(__int64 (__fastcall **)(__int64 *))(v5 + 32))(v3);
  v25 = v6;
  v7 = 0;
  for ( i = 0; i < v6; ++i )
  {
    v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 **))(*v3 + 24))(
            v3,
            i,
            &GUID_a0783366_cfa3_43be_9d79_55b2da97c63c,
            &v22);
    if ( v14 < 0 )
      goto LABEL_15;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v22 + 64))(v22, 4LL) )
    {
      v10 = -1073741637;
      goto LABEL_11;
    }
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, unsigned int *))(*v22 + 48))(v22, 15LL, 4LL, &v23);
    if ( v14 < 0 )
    {
LABEL_15:
      v10 = v14 | 0xC0000000;
      goto LABEL_11;
    }
    v21 = 0;
    for ( j = 0; ; j = ++v21 )
    {
      v16 = j < v23;
      v17 = *v22;
      if ( !v16 )
        break;
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, unsigned int *, __int64, unsigned int *))(v17 + 104))(
              v22,
              16LL,
              4LL,
              &v21,
              4LL,
              &v24);
      if ( v14 < 0 )
        goto LABEL_15;
      v7 += v24;
    }
    (*(void (**)(void))(v17 + 16))();
    v6 = v25;
    v22 = 0LL;
  }
  if ( v7 )
  {
    Heap = HampAllocateHeap(8LL * v7);
    if ( !Heap )
    {
      v10 = -1073741801;
      goto LABEL_11;
    }
    v6 = v25;
  }
  v26 = 0;
  for ( k = 0; ; ++k )
  {
    if ( k >= v6 )
    {
      v10 = 0;
      *v27 = v7;
      *v28 = Heap;
      goto LABEL_11;
    }
    PropertyWith = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 **))(*v3 + 24))(
                     v3,
                     k,
                     &GUID_a0783366_cfa3_43be_9d79_55b2da97c63c,
                     &v22);
    if ( PropertyWith < 0 )
      break;
    PropertyWith = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, unsigned int *))(*v22 + 48))(
                     v22,
                     15LL,
                     4LL,
                     &v23);
    if ( PropertyWith < 0 )
      break;
    v21 = 0;
    for ( m = 0; m < v23; m = ++v21 )
    {
      PropertyWith = IDXCoreAdapter1::GetPropertyWithInput<unsigned long,unsigned long>(v22, v12, &v21, &v24);
      if ( PropertyWith < 0 )
        goto LABEL_9;
      for ( n = 0; n < v24; ++n )
      {
        v20 = v26++;
        Heap[v20] = -1LL;
        v29 = __PAIR64__(n, v21);
        v30 = 0;
        v31 = 0LL;
        PropertyWith = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, unsigned __int64 *, __int64, __int128 *))(*v22 + 72))(
                         v22,
                         4LL,
                         12LL,
                         &v29,
                         16LL,
                         &v31);
        if ( PropertyWith < 0 )
          goto LABEL_9;
        Heap[v20] = v31;
      }
    }
    (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
    v6 = v25;
    v22 = 0LL;
  }
LABEL_9:
  v10 = PropertyWith | 0xC0000000;
  if ( Heap )
    HampFreeHeap(Heap);
LABEL_11:
  if ( v22 )
    (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
  return v10;
}
