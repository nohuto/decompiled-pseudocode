/*
 * XREFs of PspEnumerateCallback @ 0x140B028D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspEnumerateCallback(int a1, _DWORD *a2, _QWORD *a3)
{
  _RTL_RUN_ONCE *p_PropagateBoostsEntry; // rcx
  __int64 v5; // rdx
  int v7; // ecx

  if ( a1 )
  {
    v7 = a1 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 0LL;
      p_PropagateBoostsEntry = (_RTL_RUN_ONCE *)&NormalizationListLock.PropagateBoostsEntry;
    }
    else
    {
      p_PropagateBoostsEntry = &PspCreateProcessNotifyRoutine;
    }
  }
  else
  {
    p_PropagateBoostsEntry = &PspCreateThreadNotifyRoutine;
  }
  v5 = (unsigned int)*a2;
  if ( (unsigned int)v5 < 0x40 )
  {
    *a3 = &p_PropagateBoostsEntry[v5];
    *a2 = v5 + 1;
    return 1LL;
  }
  return 0LL;
}
