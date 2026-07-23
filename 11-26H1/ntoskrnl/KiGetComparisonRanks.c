/*
 * XREFs of KiGetComparisonRanks @ 0x1404C3378
 * Callers:
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403070D0 (KiEvaluateGroupSchedulingPreemption.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetComparisonRanks(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v6; // edx
  __int64 result; // rax
  unsigned __int8 v8; // r8
  unsigned int v9; // r10d
  unsigned __int8 v10; // r9
  __int64 v11; // rax
  __int64 i; // r8
  char v13; // r11

  if ( a1 == a2 )
  {
    v6 = *(_DWORD *)(a1 + 140);
    result = v6;
    goto LABEL_3;
  }
  v8 = *(_BYTE *)(a2 + 130);
  v9 = 0;
  v10 = *(_BYTE *)(a1 + 130);
  if ( v10 > v8 )
  {
    v13 = 1;
    do
    {
      result = *(unsigned int *)(a1 + 140);
      a1 = *(_QWORD *)(a1 + 440);
      if ( (unsigned int)result <= v9 )
        result = v9;
      v9 = result;
    }
    while ( *(_BYTE *)(a1 + 130) > v8 );
  }
  else
  {
    if ( v10 >= v8 )
      goto LABEL_6;
    v13 = -1;
    do
    {
      result = *(unsigned int *)(a2 + 140);
      a2 = *(_QWORD *)(a2 + 440);
      if ( (unsigned int)result <= v9 )
        result = v9;
      v9 = result;
    }
    while ( v10 < *(_BYTE *)(a2 + 130) );
  }
  if ( a1 != a2 )
  {
LABEL_6:
    v11 = *(_QWORD *)(a1 + 440);
    for ( i = *(_QWORD *)(a2 + 440); v11 != i; i = *(_QWORD *)(i + 440) )
    {
      a1 = v11;
      a2 = i;
      v11 = *(_QWORD *)(v11 + 440);
    }
    v6 = *(_DWORD *)(a2 + 140);
    result = *(unsigned int *)(a1 + 140);
    goto LABEL_3;
  }
  if ( v13 > 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = result;
    result = 0LL;
  }
LABEL_3:
  *a3 = result;
  *a4 = v6;
  return result;
}
