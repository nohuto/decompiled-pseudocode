/*
 * XREFs of sub_1400272C0 @ 0x1400272C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_1400272C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a1 + 44);
  if ( v3 == 1094930482 || v3 == 1094930505 )
  {
    *(_DWORD *)(a3 + 16) = v3;
    *(_QWORD *)(a3 + 24) = *(_QWORD *)(a2 + 24);
  }
  if ( *(_DWORD *)(a3 + 12) == 2 )
    memset(*(void **)a3, 0, *(_DWORD *)(a3 + 8) * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 12LL));
  return sub_1400B6010(*(_QWORD *)(a1 + 32));
}
