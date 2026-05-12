/*
 * XREFs of sub_1400860EC @ 0x1400860EC
 * Callers:
 *     sub_140135DCC @ 0x140135DCC (sub_140135DCC.c)
 *     sub_140138090 @ 0x140138090 (sub_140138090.c)
 *     sub_140138324 @ 0x140138324 (sub_140138324.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400860EC(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  void *v4; // rdi
  unsigned int v5; // esi
  void *v6; // rcx
  unsigned __int8 v7; // dl

  v2 = 0;
  if ( *a1 == 1431193940 || *a1 == 1094997074 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v3 = *(unsigned int *)(a2 + 120);
      v4 = *(void **)(a2 + 64);
      v5 = *(_DWORD *)(a2 + 60);
      v6 = *(void **)(v3 + a2 + 16);
      v7 = *(_BYTE *)(v3 + a2 + 9);
    }
    else
    {
      v4 = *(void **)(a2 + 24);
      v5 = *(_DWORD *)(a2 + 16);
      v6 = *(void **)(a2 + 32);
      v7 = *(_BYTE *)(a2 + 11);
    }
    if ( v6 )
      memset_0(v6, 0, v7);
    if ( v4 )
      memset_0(v4, 0, v5);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
