/*
 * XREFs of MiInsertPurgedPages @ 0x1402EBF44
 * Callers:
 *     MiPurgeFinish @ 0x1402EBEC0 (MiPurgeFinish.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402EC1B0 (MiDereferenceControlAreaPfnList.c)
 *     MiDeleteSectionCluster @ 0x14031A390 (MiDeleteSectionCluster.c)
 */

__int64 __fastcall MiInsertPurgedPages(__int64 a1)
{
  unsigned __int64 v1; // r15
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // r11
  ULONG_PTR v6; // r9
  __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rax
  unsigned int i; // ecx
  int v15; // eax
  unsigned __int64 j; // rdi
  __int64 v17; // rdi
  __int64 v19; // r8
  __int64 v20; // r10

  v1 = *(_QWORD *)(a1 + 120);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    v5 = 0xFFFFDE0000000000uLL;
    do
    {
      v6 = *(_QWORD *)(a1 + 8 * v3 + 648);
      v7 = 1LL;
      if ( (v6 & 0xF) == 0
        && (*(_DWORD *)a1 & 0x80u) != 0
        && v1 - v3 >= 0x10
        && *(_QWORD *)(a1 + 8 * v3 + 768) == v6 + 15 )
      {
        v19 = 48 * v6 - 0x220000000000LL;
        while ( (unsigned int)MiGetPfnSlabType(v19) == 9 )
        {
          if ( (*(_DWORD *)(v19 + 32) & 0x40000000) == 0 && *(int *)(v19 + 32) >= 0 )
          {
            v19 += 48LL;
            if ( v19 != v20 )
              continue;
          }
          if ( v19 == v20 )
            v7 = 16LL;
          break;
        }
      }
      v8 = v5 + 48 * v6;
      v9 = v7;
      do
      {
        if ( (*(_BYTE *)(v8 + 35) & 0x10) != 0 )
          *(_DWORD *)(v8 + 32) &= ~0x10000000u;
        if ( (*(_DWORD *)(v8 + 16) & 0x400LL) == 0 )
        {
          v10 = *(_QWORD *)(v8 + 16);
          if ( (v10 & 8) == 0 )
          {
            v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            if ( (v10 & 4) != 0 )
              v11 = *(_QWORD *)(v8 + 16);
            v10 = v11;
          }
          if ( v10 )
            *(_QWORD *)(a1 + 8 * v2++ + 1160) = v10;
        }
        v8 += 48LL;
        --v9;
      }
      while ( v9 );
      v12 = -48 * v7 + v8;
      if ( v7 == 1 )
      {
        MiInsertPageInFreeOrZeroedList(v6);
        v13 = (_QWORD *)(a1 + 136);
        for ( i = 0; i < *(_DWORD *)(a1 + 60); ++i )
        {
          if ( *v13 == v12 )
          {
            *v13 = 0LL;
            v15 = --*(_DWORD *)(a1 + 56);
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !v15 )
              *(_DWORD *)(a1 + 60) = 0;
            break;
          }
          ++v13;
        }
      }
      else
      {
        MiDeleteSectionCluster(a1, v6);
        v3 = v7 + v3 - 1;
      }
      ++v3;
      v5 = 0xFFFFDE0000000000uLL;
    }
    while ( v3 < v1 );
  }
  for ( j = 0LL; j < v2; ++j )
    MiReleasePageFileInfo(*(struct _KEVENT **)(a1 + 8), *(_QWORD *)(a1 + 8 * j + 1160), 1LL);
  v17 = *(_QWORD *)(a1 + 112);
  if ( v17 )
  {
    MiDereferenceControlAreaPfnList(**(_QWORD **)(a1 + 16), *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  return v17;
}
