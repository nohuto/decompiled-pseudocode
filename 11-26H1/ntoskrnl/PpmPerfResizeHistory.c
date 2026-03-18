/*
 * XREFs of PpmPerfResizeHistory @ 0x140B40670
 * Callers:
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     PpmPerfResizeHistoryAll @ 0x140B40594 (PpmPerfResizeHistoryAll.c)
 * Callees:
 *     PpmPerfResetHistory @ 0x1402126DC (PpmPerfResetHistory.c)
 *     PpmGetPerfPolicyClass @ 0x14048ACEC (PpmGetPerfPolicyClass.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmPerfResizeHistory(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int8 PerfPolicyClass; // al
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  int v6; // edi
  _DWORD *Pool2; // rax

  v2 = 0;
  PerfPolicyClass = PpmGetPerfPolicyClass((_BYTE *)a1);
  v5 = *(_DWORD **)(v4 + 32);
  v6 = *((unsigned __int8 *)&PpmCurrentProfile[89 * dword_140F106CC + 12] + PerfPolicyClass);
  if ( v5 )
  {
    if ( *v5 == v6 )
      return v2;
    ExFreePoolWithTag(v5, 0x704D5050u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( (unsigned __int8)v6 > 1u )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      *Pool2 = v6;
      *(_QWORD *)(a1 + 32) = Pool2;
      PpmPerfResetHistory(a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
