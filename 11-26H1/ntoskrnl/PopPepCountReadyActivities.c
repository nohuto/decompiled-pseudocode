/*
 * XREFs of PopPepCountReadyActivities @ 0x140460560
 * Callers:
 *     PopPepComponentSetWakeHint @ 0x1404EE82C (PopPepComponentSetWakeHint.c)
 *     PopPepComponentSetResidency @ 0x140614364 (PopPepComponentSetResidency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepCountReadyActivities(unsigned int *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // r10d
  _DWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r11
  unsigned int v11; // edi
  __int64 v12; // rcx

  if ( !a3 )
    return 0LL;
  result = a1[30];
  if ( a3 != 2 )
  {
    if ( a3 != 3 )
      return result;
    v5 = 0;
    v6 = a1[45];
    v7 = 0;
    if ( v6 < 2 )
    {
      if ( !v6 )
        return (unsigned int)(v7 + v5 + result);
      v12 = 0LL;
    }
    else
    {
      v8 = a1 + 126;
      v9 = ((v6 - 2) >> 1) + 1;
      v10 = (unsigned int)v9;
      v11 = 2 * v9;
      v12 = 2 * v9;
      do
      {
        v5 += *(v8 - 52);
        v7 += *v8;
        v8 += 104;
        --v10;
      }
      while ( v10 );
      if ( v11 >= v6 )
        return (unsigned int)(v7 + v5 + result);
    }
    LODWORD(result) = a1[52 * v12 + 74] + result;
    return (unsigned int)(v7 + v5 + result);
  }
  if ( a2 )
    return (unsigned int)(*(_DWORD *)(a2 + 104) + result);
  return result;
}
