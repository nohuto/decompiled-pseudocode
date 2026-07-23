/*
 * XREFs of PpmIdleUpdateSelectionStatistics @ 0x14060539C
 * Callers:
 *     PpmIdleSelectStates @ 0x1402F70FC (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdateSelectionStatistics(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 result; // rax

  if ( a1 )
  {
    if ( (a1 & 0x80000000) != 0 )
    {
      if ( (unsigned int)a1 > 0x8000000C )
      {
        result = (unsigned int)(a1 + 2147483634);
        if ( (unsigned int)result > 2 )
          return result;
        v2 = a1 - 0x7FFFFFFF;
      }
      else
      {
        v2 = a1 - 2147483646;
      }
    }
    else if ( (a1 & 0x100000000LL) != 0 )
    {
      v3 = *(_QWORD *)(a2 + 144);
      v2 = 2;
      if ( v3 )
        ++*(_QWORD *)(((unsigned __int64)(((unsigned int)a1 & 0x7FFFFFFF) - 1) << 6) + *(_QWORD *)(v3 + 32) + 24);
    }
    else
    {
      v2 = 1;
    }
  }
  else
  {
    v2 = 0;
  }
  result = *(_QWORD *)(a2 + 8LL * v2) + 1LL;
  *(_QWORD *)(a2 + 8LL * v2) = result;
  return result;
}
