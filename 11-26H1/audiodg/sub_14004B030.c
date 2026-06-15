/*
 * XREFs of sub_14004B030 @ 0x14004B030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14004B030(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 v3; // r8
  float v4; // xmm1_4

  v2 = 0;
  if ( !a2 )
    return 2147500035LL;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 2147500035LL;
  if ( *(_WORD *)v3 == 0xFFFE )
  {
    *(_OWORD *)a2 = *(_OWORD *)(v3 + 24);
    *(_DWORD *)(a2 + 16) = *(unsigned __int16 *)(v3 + 2);
    *(_DWORD *)(a2 + 20) = *(unsigned __int16 *)(v3 + 14) >> 3;
    *(_DWORD *)(a2 + 24) = *(unsigned __int16 *)(v3 + 18);
    *(float *)(a2 + 28) = (float)*(int *)(v3 + 4);
    v2 = *(_DWORD *)(v3 + 20);
  }
  else
  {
    *(_OWORD *)a2 = xmmword_1400C57E0;
    *(_DWORD *)a2 = **(unsigned __int16 **)(a1 + 16);
    *(_DWORD *)(a2 + 16) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 2LL);
    *(_DWORD *)(a2 + 20) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 14LL) >> 3;
    *(_DWORD *)(a2 + 24) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 14LL);
    *(float *)(a2 + 28) = (float)*(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  }
  *(_DWORD *)(a2 + 32) = v2;
  v4 = *(float *)(a1 + 24);
  if ( v4 != 0.0 )
    *(float *)(a2 + 28) = v4;
  return 0LL;
}
