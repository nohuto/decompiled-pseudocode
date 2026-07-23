/*
 * XREFs of KeGetTopologySiblingAffinityForProcessor @ 0x14025DE90
 * Callers:
 *     PpmParkFindSpecificTopologyMask @ 0x14025DB70 (PpmParkFindSpecificTopologyMask.c)
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404D3BB0 (KeQueryLogicalProcessorRelationship.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060D93C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14061280C (PpmParkDetectTopologyLevelInfo.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int16 __fastcall KeGetTopologySiblingAffinityForProcessor(__int64 a1, int a2, unsigned __int16 *a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // r8
  unsigned __int16 result; // ax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edx
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx

  if ( !a2 )
  {
    memset_0(a3 + 4, 0, 8LL * *a3);
    result = 1;
    *a3 = 1;
    v14 = *(unsigned __int8 *)(a1 + 208);
    v15 = *(_QWORD *)(a1 + 200);
    if ( *(_BYTE *)(a1 + 208) )
    {
      if ( a3[1] <= (unsigned __int16)v14 )
        return result;
      result = v14 + 1;
      *a3 = v14 + 1;
    }
    goto LABEL_25;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v5 = 40784LL;
    }
    else
    {
      v12 = a2 - 3;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 1 )
            __fastfail(5u);
          v5 = 47424LL;
        }
        else
        {
          v5 = 35920LL;
        }
      }
      else
      {
        v5 = 40192LL;
      }
    }
    v6 = v5 + a1;
    v7 = *(_WORD *)(v5 + a1);
    v8 = a3[1];
    a3[1] = v8;
    if ( v7 <= v8 )
      v8 = v7;
    *a3 = v8;
    result = 0;
    for ( *((_DWORD *)a3 + 1) = 0; result < v8; *(_QWORD *)&a3[4 * v10 + 4] = *(_QWORD *)(v6 + 8 * v10 + 8) )
      v10 = result++;
    for ( ; result < a3[1]; *(_QWORD *)&a3[4 * v11 + 4] = 0LL )
      v11 = result++;
    return result;
  }
  memset_0(a3 + 4, 0, 8LL * *a3);
  result = 1;
  *a3 = 1;
  v14 = *(unsigned __int8 *)(a1 + 208);
  v15 = *(_QWORD *)(a1 + 36512);
  if ( !*(_BYTE *)(a1 + 208) )
  {
LABEL_25:
    *(_QWORD *)&a3[4 * v14 + 4] |= v15;
    return result;
  }
  if ( a3[1] > (unsigned __int16)v14 )
  {
    result = v14 + 1;
    *a3 = v14 + 1;
    *(_QWORD *)&a3[4 * v14 + 4] |= v15;
  }
  return result;
}
