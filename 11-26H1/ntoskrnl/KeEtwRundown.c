/*
 * XREFs of KeEtwRundown @ 0x1405E7258
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceThreadAffinity @ 0x140506B68 (EtwTraceThreadAffinity.c)
 *     EtwTraceWorkloadClassUpdate @ 0x14052F640 (EtwTraceWorkloadClassUpdate.c)
 *     KiTraceParkingRundown @ 0x1405FB69C (KiTraceParkingRundown.c)
 *     KiTraceSchedulingGroupRundown @ 0x1405FBCC0 (KiTraceSchedulingGroupRundown.c)
 *     KiTraceCpuPartitionRundown @ 0x1407BE260 (KiTraceCpuPartitionRundown.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 */

__int64 __fastcall KeEtwRundown(struct _ETW_SILODRIVERSTATE *a1, unsigned int a2, char a3, __int64 a4)
{
  _DWORD *v4; // rbx
  struct _ETW_SILODRIVERSTATE *v8; // r12
  __int64 result; // rax
  void *NextProcess; // rsi
  __int64 i; // rdx
  __int64 NextProcessThread; // rax
  __int64 v13; // rbp
  void *j; // rcx
  __int64 k; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  void *v18; // rbx
  _DWORD *v19; // rbx

  v4 = (_DWORD *)(a4 + 20);
  v8 = a1;
  if ( a4 && (*v4 & 0x180) != 0 )
  {
    result = a4 + 20;
    if ( KiHgsPlusEnabled && a3 )
    {
      if ( (WORD2(xmmword_140FC0C10) & 0x100) == 0 )
        goto LABEL_14;
      NextProcess = (void *)PsGetNextProcess(0LL);
      result = (__int64)v4;
      if ( NextProcess )
      {
        do
        {
          for ( i = 0LL; ; i = v13 )
          {
            NextProcessThread = PsGetNextProcessThread(NextProcess, i);
            v13 = NextProcessThread;
            if ( !NextProcessThread )
              break;
            EtwTraceWorkloadClassUpdate(NextProcessThread, *(_BYTE *)(NextProcessThread + 517), 1);
          }
          result = PsGetNextProcess(NextProcess);
          NextProcess = (void *)result;
        }
        while ( result );
        goto LABEL_14;
      }
    }
  }
  else
  {
    result = a4 + 20;
  }
  v4 = (_DWORD *)result;
  if ( !a4 )
    goto LABEL_29;
LABEL_14:
  if ( (*v4 & 0x2000) != 0 )
  {
    LOBYTE(a1) = a3;
    result = KiTraceParkingRundown(a1);
  }
  else if ( !a4 )
  {
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x1000) == 0 )
  {
    if ( a4 )
      goto LABEL_27;
LABEL_29:
    v19 = (_DWORD *)(a4 + 20);
LABEL_30:
    if ( !a4 )
      return result;
    goto LABEL_31;
  }
  if ( a3 )
  {
    for ( j = 0LL; ; j = v18 )
    {
      result = PsGetNextProcess(j);
      v18 = (void *)result;
      if ( !result )
        break;
      for ( k = 0LL; ; k = v17 )
      {
        v16 = PsGetNextProcessThread(v18, k);
        v17 = v16;
        if ( !v16 )
          break;
        EtwTraceThreadAffinity(
          v16,
          *(_WORD *)(v16 + 584),
          (*(_DWORD *)(v16 + 116) & 8) != 0,
          1,
          *(_KWAIT_STATUS_REGISTER **)(v16 + 576),
          1334);
      }
    }
  }
LABEL_27:
  v19 = (_DWORD *)(a4 + 20);
  if ( (*(_DWORD *)(a4 + 20) & 0x200) == 0 )
    goto LABEL_30;
  LOBYTE(a1) = a3;
  result = KiTraceCpuPartitionRundown(a1);
LABEL_31:
  if ( (*v19 & 0x4000) != 0 )
    return KiTraceSchedulingGroupRundown(v8, a2);
  return result;
}
