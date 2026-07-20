/*
 * XREFs of ApiSetpGetSearchKeyHash @ 0x14001A540
 * Callers:
 *     ApiSetpResolveHost @ 0x14001955C (ApiSetpResolveHost.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14001A6D8 (ApiSetpSearchForSectionIndex_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpGetSearchKeyHash(__int64 a1, char a2, char a3, char a4, unsigned __int8 a5)
{
  unsigned __int8 *v5; // r10
  bool v6; // cf
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // edi
  bool v11; // cl
  unsigned __int8 v12; // cl

  v5 = (unsigned __int8 *)(*(_QWORD *)a1 + *(unsigned __int16 *)(a1 + 16));
  v6 = a2 != 0;
  v8 = 0;
  v9 = 0;
  v10 = *(unsigned __int16 *)((v6 ? 2 : 0) + a1 + 18);
  if ( a4 )
  {
    v9 = 4;
    v5 += (-(__int64)(*(_BYTE *)(a1 + 10) != 0) & 4) + 4;
  }
  for ( ; v9 < v10; ++v9 )
  {
    v11 = 0;
    if ( !a3 )
      goto LABEL_12;
    if ( *(_WORD *)(a1 + 26) && v9 >= *(unsigned __int16 *)(a1 + 26) )
      v11 = v9 <= *(unsigned __int16 *)(a1 + 28);
    if ( (!*(_WORD *)(a1 + 30) || v9 < *(unsigned __int16 *)(a1 + 30) || v9 > *(unsigned __int16 *)(a1 + 32)) && !v11 )
    {
LABEL_12:
      v12 = *v5;
      if ( *v5 >= 0x41u && v12 <= 0x5Au )
        v12 += 32;
      v8 = v8 * a5 + v12;
    }
    v5 += (*(_BYTE *)(a1 + 10) != 0) + 1;
  }
  return v8;
}
