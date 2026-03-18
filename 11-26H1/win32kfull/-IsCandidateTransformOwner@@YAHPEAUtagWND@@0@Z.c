/*
 * XREFs of ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x14011F35C
 * Callers:
 *     GetInheritedMonitor @ 0x14011EDF0 (GetInheritedMonitor.c)
 * Callees:
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x14011F4D8 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     UnionRect @ 0x14011F574 (UnionRect.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 */

__int64 __fastcall IsCandidateTransformOwner(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // r15d
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v10; // rbp
  __int64 v11; // rdi
  int v12; // esi
  __int64 v13; // rdx
  _OWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)a2 + 5);
  v3 = 0;
  v4 = *((_QWORD *)a2 + 2);
  v5 = *((_QWORD *)a1 + 2);
  v14[0] = 0LL;
  v6 = *(_BYTE *)(v2 + 27) & 8;
  if ( (*(_BYTE *)(v2 + 26) & 8) == 0 || (v7 = 1, (*(_BYTE *)(v2 + 27) & 0x20) != 0) )
    v7 = 0;
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v8 + 31) & 0x10) == 0
    || (*(_BYTE *)(v8 + 16) & 8) == 0 && (*(_BYTE *)(v8 + 30) & 3) == 0
    || *(_DWORD *)(v8 + 104) >= *(_DWORD *)(v8 + 112)
    || *(_DWORD *)(v8 + 108) >= *(_DWORD *)(v8 + 116)
    || (*(_BYTE *)(v8 + 26) & 8) != 0 && (*(_BYTE *)(v8 + 27) & 0x20) == 0
    || *(_QWORD *)(v5 + 464) != *(_QWORD *)(v4 + 464) && *(_QWORD *)(v5 + 456) != *(_QWORD *)(v4 + 456)
    || (((unsigned __int16)(*(_DWORD *)(v8 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v2 + 288) >> 8)) & 0x1FF) != 0 )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(v2 + 27) & 8) == 0 && !v7 )
    return 1LL;
  v10 = v8 + 88;
  v11 = v2 + 88;
  v12 = IsAdjacentRect((const struct tagRECT *)v11, (const struct tagRECT *)(v8 + 88));
  if ( v6 && !v12 && !(unsigned int)IntersectRect(v14, v11, v10) )
    return 0LL;
  if ( !v7 || v12 )
    return 1LL;
  if ( !(unsigned int)UnionRect(v14, v11, v10) )
    return 0LL;
  v13 = *(_QWORD *)&v14[0] - *(_QWORD *)v11;
  if ( *(_QWORD *)&v14[0] == *(_QWORD *)v11 )
    v13 = *((_QWORD *)&v14[0] + 1) - *(_QWORD *)(v11 + 8);
  LOBYTE(v3) = v13 == 0;
  return v3;
}
