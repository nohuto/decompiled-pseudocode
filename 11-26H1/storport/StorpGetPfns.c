/*
 * XREFs of StorpGetPfns @ 0x140001840
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetPfns(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // ecx

  v6 = *(_QWORD *)(a1 - 16);
  if ( !a4 || !a5 || !a6 || !a3 || !a2 )
    return 3238002694LL;
  v7 = 96LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v7 = 48LL;
  v8 = *(_QWORD *)(v7 + a2);
  if ( a3 != *(_DWORD **)(v8 + 136) && a3 != *(_DWORD **)(v8 + 104) )
    return 3238002694LL;
  v9 = a3[11];
  *a6 = v9;
  if ( (v9 & *(_DWORD *)(v6 + 56)) != 0 )
    return 3238002689LL;
  *a4 = a3 + 12;
  *a5 = ((unsigned int)a3[10] + 4095LL + (unsigned __int64)((a3[11] + a3[8]) & 0xFFF)) >> 12;
  return 0LL;
}
