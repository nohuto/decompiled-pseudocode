/*
 * XREFs of HalpStartProfileInterruptEx @ 0x140582D60
 * Callers:
 *     HalStartProfileInterrupt @ 0x140582290 (HalStartProfileInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpStartProfileInterruptEx(unsigned int a1, _DWORD *a2, unsigned int *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v5; // r12
  _DWORD *v10; // rbx
  int v11; // r9d
  int v12; // r8d
  __int64 v13; // rcx
  unsigned int v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+80h] [rbp+30h]

  v16 = 0;
  v15 = 0;
  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v10 = (_DWORD *)(HalpProfileTimeInfo + 16LL * (unsigned int)v5);
  if ( !a1 && *v10 )
  {
    v11 = 0;
    v15 = v10[1];
    v16 = v10[2];
LABEL_8:
    ++*v10;
    goto LABEL_9;
  }
  v11 = guard_dispatch_icall_no_overrides(0LL, a1);
  if ( v11 < 0 )
    return (unsigned int)v11;
  _InterlockedIncrement((_DWORD *)&HalpPmuArbiter.Header.WaitListHead.Flink + 1);
  if ( !a1 )
  {
    v10[1] = 0;
    v10[2] = 0;
    if ( a2 )
      v10[3] = *a2;
    goto LABEL_8;
  }
LABEL_9:
  v12 = v16;
  v13 = *(_QWORD *)(KiProcessorBlock[v5] + 88);
  if ( v16 )
  {
    switch ( v16 )
    {
      case 1:
        v13 += 24LL;
        break;
      case 100:
        v13 += 48LL;
        break;
      case 101:
        v13 += 72LL;
        break;
      default:
        v13 = 0LL;
        break;
    }
  }
  if ( a2 )
  {
    *(_DWORD *)(*(_QWORD *)(v13 + 16) + 48LL * v15 + 32) = *a2;
    v12 = v16;
  }
  if ( a3 )
    *a3 = v15;
  if ( a4 )
    *a4 = v12;
  if ( a5 )
    *a5 = &HalpSampleProfilingCounters;
  return (unsigned int)v11;
}
