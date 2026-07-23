/*
 * XREFs of MiDbgAllocatePatches @ 0x140701EB8
 * Callers:
 *     MiDbgCopyMemoryInternal @ 0x1407025C0 (MiDbgCopyMemoryInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDbgAllocatePatches(__int16 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  int v7; // r9d
  unsigned int v8; // r8d
  int v9; // edx
  __int64 i; // r11
  __int64 v11; // rdx
  ULONG *v12; // rcx
  int v13; // ebx
  ULONG *v14; // rcx
  __int64 v15; // rcx

  v4 = *(_QWORD *)(a3 + 136);
  if ( a2 > 8 )
    return 3221225485LL;
  v7 = (a1 & 0xFFC) + (*(_DWORD *)(a3 + 132) << 12);
  v8 = ((unsigned __int16)(a1 & 0xFFF) >> 2) - (((a1 & 0xFFF) + a2 - 1) >> 2) + 1;
  if ( dword_140E30914 > (unsigned int)dword_140E30910 )
    v9 = dword_140E30910 - dword_140E30914 + 256;
  else
    v9 = dword_140E30910 - dword_140E30914;
  if ( v8 + v9 >= 0x100 || v9 + v8 + dword_140E34920 > 0x200 )
    return 3221225473LL;
  for ( i = 0LL; v8; --v8 )
  {
    LODWORD(v11) = dword_140E30910;
    while ( (_DWORD)v11 != dword_140E30914 )
    {
      if ( !(_DWORD)v11 )
        LODWORD(v11) = 256;
      v11 = (unsigned int)(v11 - 1);
      v12 = &MiState + 6 * v11 + 2692;
      if ( v4 == *(_QWORD *)v12 )
      {
        v13 = *(&MiState + 6 * v11 + 2694);
        if ( ((v7 ^ v13) & 0xFFFFFFFC) == 0 )
        {
          if ( (v13 & 1) == 0 )
          {
            v14 = (ULONG *)((unsigned __int64)v12 | 1);
            goto LABEL_20;
          }
          break;
        }
      }
    }
    v15 = (unsigned int)dword_140E30910 + 2 * ((unsigned int)dword_140E30910 + 673LL);
    ++dword_140E30910;
    v14 = &MiState + 2 * v15;
    if ( dword_140E30910 == 256 )
      dword_140E30910 = 0;
    *(_QWORD *)v14 = v4;
    v14[2] = v7;
LABEL_20:
    *(_QWORD *)(a4 + 8 * i) = v14;
    v7 += 4;
    i = (unsigned int)(i + 1);
  }
  _InterlockedOr64((volatile signed __int64 *)(v4 + 96), 1uLL);
  return 0LL;
}
