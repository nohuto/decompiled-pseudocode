/*
 * XREFs of MiGetAggregateWorkingSetSize @ 0x14070DE78
 * Callers:
 *     MmLogSystemShareablePfnInfo @ 0x140877454 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAggregateWorkingSetSize(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax
  int *v3; // rcx

  v1 = *(_QWORD *)(a1 + 152);
  v2 = *(_DWORD *)(a1 + 184);
  v3 = &dword_140E37880;
  if ( (v2 & 0xF) != 1 )
    v3 = 0LL;
  if ( v3 )
    return *((_QWORD *)v3 + 1);
  return v1;
}
