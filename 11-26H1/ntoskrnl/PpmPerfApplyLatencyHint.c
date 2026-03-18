/*
 * XREFs of PpmPerfApplyLatencyHint @ 0x1405253B8
 * Callers:
 *     PpmPerfApplyLatencyHints @ 0x1404B5F60 (PpmPerfApplyLatencyHints.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x14048ACEC (PpmGetPerfPolicyClass.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall PpmPerfApplyLatencyHint(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  int v3; // edi
  unsigned __int8 PerfPolicyClass; // al
  __int64 v5; // r11
  __int64 v6; // r9
  unsigned int v7; // r10d
  unsigned __int64 result; // rax
  unsigned int v9; // r9d
  __int64 v10; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = PpmCurrentProfile[89 * dword_140F106CC + 19];
  PerfPolicyClass = PpmGetPerfPolicyClass((_BYTE *)a1);
  v7 = *(unsigned __int8 *)(PerfPolicyClass + v6 + 177);
  result = (((unsigned __int64)*(unsigned int *)(v5 + 456) >> 1)
          + 100LL * *(unsigned int *)(v6 + 4LL * PerfPolicyClass + 180))
         / *(unsigned int *)(v5 + 456);
  if ( v7 > (unsigned int)result )
    result = v7;
  if ( v3 == 1 || v3 == 3 )
  {
    v9 = *(_DWORD *)(v5 + 460);
  }
  else if ( (unsigned int)(v3 - 5) <= 1 || PpmPerfBoostAtGuaranteed )
  {
    v9 = *(_DWORD *)(v1 + 24);
  }
  else
  {
    v9 = 100;
  }
  v10 = v9;
  if ( (unsigned int)result < v9 )
    v10 = (unsigned int)result;
  if ( (unsigned int)v10 > *(_DWORD *)(v1 + 56) )
  {
    result = guard_dispatch_icall_no_overrides(v2, v10);
    *(_DWORD *)(v1 + 56) = result;
  }
  return result;
}
