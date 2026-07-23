/*
 * XREFs of PpmEventTraceProcessorPerformanceDomainRundown @ 0x140B2404C
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     KeAndGroupAffinityEx @ 0x140462640 (KeAndGroupAffinityEx.c)
 *     KeQueryGroupAffinity @ 0x140494AA0 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventTraceProcessorPerformanceDomainRundown(__int64 a1)
{
  _DWORD *Pool2; // r14
  unsigned __int16 v3; // ax
  USHORT i; // di
  _OWORD *v5; // rbx
  bool v6; // zf
  unsigned int v7; // ebx
  unsigned int v8; // r9d
  unsigned __int16 v9; // r8
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r10
  _OWORD *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned __int16 j; // dx
  __int64 v21; // rcx
  ULONG v22; // eax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int16 v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[68]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v29[32]; // [rsp+488h] [rbp+380h] BYREF

  Pool2 = 0LL;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_DOMAIN_RUNDOWN) )
  {
    v3 = 0;
    v26 = 0;
    for ( i = 0; i < 0x20u; ++i )
    {
      v5 = &v29[v3];
      *v5 = 0LL;
      *((_WORD *)v5 + 4) = i;
      *(_QWORD *)v5 = KeQueryGroupAffinity(i);
      v6 = (unsigned int)KeAndGroupAffinityEx((_WORD *)(a1 + 24), (__int64)v5, (char *)v5) == 0;
      v3 = v26;
      if ( !v6 )
        v3 = ++v26;
    }
    UserData[0].Ptr = (ULONGLONG)&v26;
    v7 = 1;
    *(_QWORD *)&UserData[0].Size = 2LL;
    if ( v3 )
    {
      v15 = v29;
      v16 = v3;
      do
      {
        v17 = v7;
        UserData[v17].Ptr = (ULONGLONG)v15 + 8;
        *(_QWORD *)&UserData[v17].Size = 2LL;
        v18 = v7 + 1;
        v7 += 2;
        UserData[v18].Ptr = (ULONGLONG)v15++;
        *(_QWORD *)&UserData[v18].Size = 8LL;
        --v16;
      }
      while ( v16 );
    }
    v8 = *(_DWORD *)(a1 + 296);
    v9 = 0;
    v10 = v7;
    v11 = 0;
    v12 = v7 + 1;
    v27 = 0;
    UserData[v10].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v10].Size = 4LL;
    if ( v8 )
    {
      v14 = *(_QWORD *)(a1 + 312);
      do
      {
        if ( *(_DWORD *)(1224LL * v9 + v14 + 16) == 1 )
          v27 = ++v11;
        ++v9;
      }
      while ( v9 < v8 );
      if ( v11 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return;
        v19 = 0;
        for ( j = 0; (unsigned int)j < *(_DWORD *)(a1 + 296); ++j )
        {
          v23 = *(_QWORD *)(a1 + 312);
          v24 = 1224LL * j;
          if ( *(_DWORD *)(v24 + v23 + 16) == 1 )
          {
            v25 = v19++;
            Pool2[v25] = *(_DWORD *)(v24 + v23 + 20);
          }
        }
        v21 = v12;
        v22 = 4 * v27;
        ++v12;
        UserData[v21].Ptr = (ULONGLONG)Pool2;
        UserData[v21].Size = v22;
        *(&UserData[0].Reserved + 1 * v21) = 0;
      }
    }
    v13 = v12;
    UserData[v13].Ptr = a1 + 448;
    *(_QWORD *)&UserData[v13].Size = 4LL;
    EtwWrite(PpmEtwHandle, &PPM_ETW_PERF_DOMAIN_RUNDOWN, 0LL, v12 + 1, UserData);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x654D5050u);
  }
}
