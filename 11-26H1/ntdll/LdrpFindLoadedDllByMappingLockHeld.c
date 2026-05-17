/*
 * XREFs of LdrpFindLoadedDllByMappingLockHeld @ 0x1800DA170
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMapping @ 0x18008657C (LdrpFindLoadedDllByMapping.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     ZwAreMappedFilesTheSame @ 0x180160130 (ZwAreMappedFilesTheSame.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingLockHeld(
        __int64 a1,
        const void *a2,
        unsigned int *a3,
        volatile signed __int32 **a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // rax
  _QWORD *j; // rbx
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  unsigned __int64 v13; // rcx
  volatile signed __int32 *v14; // rdi
  _QWORD **v15; // rcx
  _QWORD *v16; // rax
  _QWORD *i; // rcx
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v21; // rcx
  void *Buf2; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = LdrpMappingInfoIndex;
  Buf2 = 0LL;
  if ( (qword_1801CB420 & 1) != 0 )
  {
    if ( !LdrpMappingInfoIndex )
    {
      j = 0LL;
      goto LABEL_36;
    }
    v5 = (unsigned __int64)&LdrpMappingInfoIndex ^ LdrpMappingInfoIndex;
  }
  j = 0LL;
  if ( v5 )
  {
    v11 = *a3;
    while ( 1 )
    {
      if ( v11 < *(_DWORD *)(v5 - 96) )
        goto LABEL_11;
      if ( v11 <= *(_DWORD *)(v5 - 96) )
      {
        v12 = *(_DWORD *)(v5 - 160);
        if ( a3[1] < v12 )
          goto LABEL_11;
        if ( a3[1] <= v12 )
          break;
      }
      v13 = *(_QWORD *)(v5 + 8);
LABEL_12:
      if ( (qword_1801CB420 & 1) != 0 && v13 )
        v5 ^= v13;
      else
        v5 = v13;
      if ( !v5 )
        goto LABEL_19;
    }
    j = (_QWORD *)v5;
LABEL_11:
    v13 = *(_QWORD *)v5;
    goto LABEL_12;
  }
LABEL_19:
  if ( j )
  {
    while ( 1 )
    {
      v14 = (volatile signed __int32 *)(j - 28);
      if ( (int)RtlImageNtHeaderEx(3, *(j - 22), 0LL, &Buf2) >= 0
        && !memcmp(a2, Buf2, 0x30uLL)
        && (int)ZwAreMappedFilesTheSame(*((_QWORD *)v14 + 6), a1) >= 0 )
      {
        break;
      }
      v15 = (_QWORD **)j[1];
      v16 = j;
      if ( v15 )
      {
        j = (_QWORD *)j[1];
        for ( i = *v15; i; i = (_QWORD *)*i )
          j = i;
      }
      else
      {
        for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*j == v16 )
            break;
          v16 = j;
        }
      }
      if ( !j )
        goto LABEL_36;
      v18 = *((_DWORD *)j - 24);
      if ( *a3 >= v18 && *a3 <= v18 )
      {
        v19 = *((_DWORD *)j - 40);
        if ( a3[1] >= v19 && a3[1] <= v19 )
          continue;
      }
      j = 0LL;
      goto LABEL_36;
    }
    v21 = *((_QWORD *)v14 + 19);
    if ( *(_DWORD *)(v21 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v21 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement(v14 + 69);
    *a4 = v14;
  }
LABEL_36:
  if ( !j )
    return (unsigned int)-1073741515;
  return v4;
}
