/*
 * XREFs of AmdPrepareEnergyValue @ 0x1400027B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AmdPrepareEnergyValue(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // rdx

  v3 = 0LL;
  v6 = 0LL;
  if ( a2 >= 0 )
  {
    if ( a2 >= 2 )
    {
      if ( a2 < 3 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 1240) + 32LL);
        if ( v13 )
          v6 = v13 + 40LL * (a2 - 2);
      }
    }
    else
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
      if ( v7 )
        v6 = v7 + 40LL * a2;
    }
  }
  v8 = *((int *)&unk_14001501C + 12 * a2);
  if ( (int)v8 >= 0 )
  {
    if ( (int)v8 >= 2 )
    {
      if ( (int)v8 < 3 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 1240) + 32LL);
        if ( v14 )
          v3 = v14 + 40LL * ((int)v8 - 2);
      }
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
      if ( v9 )
        v3 = v9 + 40 * v8;
    }
  }
  v10 = *(_QWORD *)(v6 + 16);
  v11 = a3 - v10 + 0xFFFFFFFF;
  if ( a3 >= v10 )
    v11 = a3 - v10;
  result = *(_QWORD *)(v3 + 32) * v11;
  *(_QWORD *)(v6 + 32) += result;
  return result;
}
