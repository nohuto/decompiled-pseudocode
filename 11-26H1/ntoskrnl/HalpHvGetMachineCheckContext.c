/*
 * XREFs of HalpHvGetMachineCheckContext @ 0x1405881D8
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14044AB14 (HalpMcaPopulateErrorData.c)
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x140587658 (HalpHvMceConsumedMemoryErrorRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvGetMachineCheckContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // [rsp+60h] [rbp+20h] BYREF
  int v5; // [rsp+68h] [rbp+28h]

  v4 = 0;
  v5 = 0;
  if ( !qword_140FBB458 )
    return 3221225473LL;
  result = guard_dispatch_icall_no_overrides(a1, &v4);
  *(_DWORD *)a2 = v4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = v5;
  return result;
}
