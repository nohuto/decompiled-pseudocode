/*
 * XREFs of SubtractResidencyPerfCountersCB @ 0x14011C6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SubtractResidencyPerfCountersCB(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned __int64 v5; // r10

  v4 = *(_DWORD *)(a1 + 96);
  v5 = (unsigned __int64)*(unsigned int *)(a3 + 12) << 12;
  if ( _bittest(&v4, *(unsigned __int8 *)(a3 + 16)) )
    *(_QWORD *)(a4 + 240) -= v5;
  else
    *(_QWORD *)(a4 + 232) -= v5;
  return 0LL;
}
