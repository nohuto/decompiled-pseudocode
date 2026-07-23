/*
 * XREFs of MiInsertHardLimitWorkingSet @ 0x1403C7B7C
 * Callers:
 *     MiEnforceWorkingSetLimit @ 0x1402F0258 (MiEnforceWorkingSetLimit.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     MiAllowWorkingSetExpansion @ 0x1404D1810 (MiAllowWorkingSetExpansion.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiInsertHardLimitWorkingSet(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rcx

  result = *(_QWORD **)(a1 + 16);
  v2 = result[5];
  if ( !*(_QWORD *)v2 )
  {
    *(_QWORD *)(v2 + 16) = a1;
    v3 = 8LL;
    v4 = (*(_QWORD *)(a1 + 128) - *(_QWORD *)(a1 + 136)) & -(__int64)(*(_QWORD *)(a1 + 136) < *(_QWORD *)(a1 + 128));
    v5 = (__int64 *)(v2 + 24);
    do
    {
      *v5++ = v4;
      --v3;
    }
    while ( v3 );
    *(_QWORD *)(v2 + 88) = v4;
    *(_DWORD *)(v2 + 96) = 0;
    v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174)) + 18352LL;
    result = *(_QWORD **)(v6 + 8);
    if ( *result != v6 )
      __fastfail(3u);
    *(_QWORD *)v2 = v6;
    *(_QWORD *)(v2 + 8) = result;
    *result = v2;
    *(_QWORD *)(v6 + 8) = v2;
  }
  return result;
}
