/*
 * XREFs of MiPageFileChangeCandidate @ 0x1404E09AC
 * Callers:
 *     MiGetPageFileResizeCandidates @ 0x1404E083C (MiGetPageFileResizeCandidates.c)
 * Callees:
 *     MiPageFileVolumeFreeSpace @ 0x1404E0A3C (MiPageFileVolumeFreeSpace.c)
 */

__int64 __fastcall MiPageFileChangeCandidate(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rax
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // eax

  if ( (*(_BYTE *)(a2 + 172) & 0x50) != 0 )
    return 0LL;
  v5 = *(_DWORD *)a2;
  if ( a3 )
  {
    v6 = *(_DWORD *)(a2 + 4);
    if ( v5 >= v6 )
      return 0LL;
    v7 = v6 - v5;
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 8);
    if ( v5 <= v11 )
      return 0LL;
    v7 = *(_DWORD *)(a2 + 12);
    if ( v7 >= v5 || v7 <= 0x4000 )
      return 0LL;
    v12 = v5 - v11;
    if ( v7 <= v12 )
      goto LABEL_7;
    v7 = v12;
  }
  if ( !v7 )
    return 0LL;
LABEL_7:
  v9 = MiPageFileVolumeFreeSpace(a2);
  v10 = *(_WORD *)(a2 + 172) & 0xF;
  *(_QWORD *)(a1 + 16) += v9;
  *(_QWORD *)(a1 + 8) = v7;
  result = 1LL;
  *(_DWORD *)a1 = v10;
  return result;
}
