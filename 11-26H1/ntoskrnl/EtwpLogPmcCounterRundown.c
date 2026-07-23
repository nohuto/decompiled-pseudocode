/*
 * XREFs of EtwpLogPmcCounterRundown @ 0x140A9A250
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140A14B5C (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A99C44 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLogPmcCounterRundown(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  unsigned int *v4; // rdi
  unsigned int **Pool2; // rbx
  void *v6; // r15
  __int64 v7; // r14
  unsigned int v8; // ebp
  unsigned int v9; // r9d
  __int64 v10; // r12
  const WCHAR *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // esi
  unsigned int v15; // ebp
  _QWORD *v16; // r14
  _DWORD *v17; // r10
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  unsigned int v25; // [rsp+A0h] [rbp+18h] BYREF
  int v26; // [rsp+A8h] [rbp+20h]

  v2 = KeNumberProcessors_0;
  v25 = 0;
  v22 = KeNumberProcessors_0;
  v26 = 0;
  v4 = 0LL;
  Pool2 = (unsigned int **)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v23 = ExAllocatePool2(0x40uLL);
    v6 = (void *)v23;
    if ( v23 )
    {
      v7 = *(_QWORD *)(a1 + 1064);
      if ( *(_DWORD *)(v7 + 20) )
      {
        v8 = 0;
        v25 = *(_DWORD *)(v7 + 20);
        *Pool2 = &v25;
        Pool2[1] = (unsigned int *)4;
        v9 = v25;
        if ( v25 )
        {
          do
          {
            v26 = 0;
            v10 = v23 + 24LL * v8;
            *(_DWORD *)v10 = *(_DWORD *)(*(_QWORD *)v7 + 4LL * v8);
            if ( (int)guard_dispatch_icall_no_overrides(1LL, 24LL) < 0 )
              v11 = L"Unknown";
            else
              v11 = *(const WCHAR **)(v10 + 16);
            v12 = -1LL;
            do
              ++v12;
            while ( v11[v12] );
            v13 = 2LL * v8++;
            Pool2[v13 + 2] = (unsigned int *)v11;
            Pool2[v13 + 3] = (unsigned int *)(unsigned int)(2 * v12 + 2);
            v9 = v25;
          }
          while ( v8 < v25 );
          v2 = v22;
        }
        EtwpLogKernelEvent((__int64)Pool2, EtwpHostSiloState, a2, v9 + 1, 0xF30u, 0x501802u);
        if ( *(_QWORD *)(a1 + 24) == 1LL )
        {
          v14 = 16 * v25 + 24;
          v4 = (unsigned int *)ExAllocatePool2(0x40uLL);
          if ( v4 )
          {
            v15 = 0;
            if ( v2 )
            {
              v16 = (_QWORD *)(v7 + 24);
              do
              {
                if ( *v16 )
                {
                  *(_QWORD *)v4 = *v16;
                  if ( (int)guard_dispatch_icall_no_overrides(52LL, v14) >= 0 )
                  {
                    Pool2[1] = (unsigned int *)4;
                    *Pool2 = v4 + 2;
                    v17 = v4 + 4;
                    Pool2[2] = v4 + 4;
                    v18 = 0LL;
                    Pool2[3] = (unsigned int *)4;
                    while ( (unsigned int)v18 < *v17 )
                    {
                      v19 = 4LL * (unsigned int)v18;
                      if ( !BYTE1(v4[v19 + 9]) )
                        goto LABEL_17;
                      v20 = 2 * ((unsigned int)(2 * v18) + 2LL);
                      Pool2[v20] = &v4[4 * v18 + 8];
                      Pool2[v20 + 1] = (unsigned int *)4;
                      v21 = 2 * ((unsigned int)(2 * v18) + 3LL);
                      v18 = (unsigned int)(v18 + 1);
                      Pool2[v21] = &v4[v19 + 6];
                      Pool2[v21 + 1] = (unsigned int *)8;
                    }
                    EtwpLogKernelEvent((__int64)Pool2, EtwpHostSiloState, a2, 2 * *v17 + 2, 0xF31u, 0x501802u);
                  }
                }
                ++v15;
                ++v16;
              }
              while ( v15 < v2 );
LABEL_17:
              v6 = (void *)v23;
            }
          }
        }
      }
    }
    ExFreePoolWithTag(Pool2, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
}
