/*
 * XREFs of PpmPerfResizeHistory @ 0x140B42680
 * Callers:
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     PpmPerfResizeHistoryAll @ 0x140B425A0 (PpmPerfResizeHistoryAll.c)
 * Callees:
 *     PpmPerfResetHistory @ 0x1402127BC (PpmPerfResetHistory.c)
 *     PpmGetPerfPolicyClass @ 0x14048482C (PpmGetPerfPolicyClass.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  v6 = *((unsigned __int8 *)PpmCurrentProfile
       + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next)
       + PerfPolicyClass
       + 96);
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
