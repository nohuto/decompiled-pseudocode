/*
 * XREFs of MiExtendPagingFiles @ 0x140B316B4
 * Callers:
 *     MiHandlePageFileSizeChanges @ 0x14052751C (MiHandlePageFileSizeChanges.c)
 * Callees:
 *     MiGetPageFileResizeCandidates @ 0x1404E083C (MiGetPageFileResizeCandidates.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     MiUpdatePagingFileMinimum @ 0x1406FDD48 (MiUpdatePagingFileMinimum.c)
 *     MiIncreaseCommitLimits @ 0x14070A538 (MiIncreaseCommitLimits.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiAttemptPageFileExtension @ 0x140B318D8 (MiAttemptPageFileExtension.c)
 */

void __fastcall MiExtendPagingFiles(__int64 a1)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // ecx
  BOOL v6; // esi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned int PageFileResizeCandidates; // eax
  unsigned __int64 v13; // rdx
  size_t v14; // r14
  unsigned int v15; // eax
  char *v16; // rcx
  unsigned __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned int v19; // eax
  _DWORD Base[2]; // [rsp+30h] [rbp-1A8h] BYREF
  char v21; // [rsp+38h] [rbp-1A0h] BYREF

  Base[1] = 0;
  memset_0(Base, 0, 0x17CuLL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(unsigned __int8 *)(a1 + 84);
  v5 = *(_DWORD *)(v2 + 22296);
  if ( v5 )
  {
    if ( (unsigned int)v4 < v5 )
    {
      _mm_lfence();
      v18 = *(_QWORD *)(v2 + 8 * v4 + 22304);
      if ( (unsigned int)(*(_DWORD *)(v18 + 4) - *(_DWORD *)v18) < v3 )
        return;
      v19 = MiAttemptPageFileExtension(a1, v18, *(_QWORD *)(a1 + 32));
      v17 = v19;
      if ( v19 && (*(_BYTE *)(a1 + 87) & 2) != 0 )
        MiUpdatePagingFileMinimum(v18, v19);
      v6 = (*(_BYTE *)(v18 + 172) & 0x50) == 0;
    }
    else
    {
      v6 = 1;
      if ( (*(_BYTE *)(a1 + 87) & 1) == 0 )
      {
        v7 = *(_QWORD *)(v2 + 23104);
        v8 = *(_QWORD *)(v2 + 23448);
        v9 = v7 + v3;
        if ( v9 < v7 )
          return;
        v10 = *(_QWORD *)(v2 + 17280);
        v11 = v10 + v9;
        if ( v11 < v10 )
          return;
        if ( v11 <= v8 )
        {
          *(_QWORD *)(a1 + 40) = 1LL;
          return;
        }
        v3 = v11 - v8;
      }
      PageFileResizeCandidates = MiGetPageFileResizeCandidates(*(_QWORD *)(a1 + 24), v3, 1u, (char *)Base);
      v13 = 0LL;
      v14 = PageFileResizeCandidates;
      v15 = 0;
      if ( (_DWORD)v14 )
      {
        v16 = &v21;
        while ( 1 )
        {
          v13 += *(_QWORD *)v16;
          if ( v13 >= v3 )
            break;
          ++v15;
          v16 += 24;
          if ( v15 >= (unsigned int)v14 )
            goto LABEL_22;
        }
      }
      else
      {
LABEL_22:
        if ( v15 == (_DWORD)v14 )
          return;
      }
      if ( (unsigned int)v14 > 1 )
        qsort(Base, v14, 0x18uLL, (int (__cdecl *)(const void *, const void *))MiPageFileCandidateSort);
      v17 = 0LL;
      do
      {
        if ( !(_DWORD)v14 )
          break;
        v14 = (unsigned int)(v14 - 1);
        v17 += (unsigned int)MiAttemptPageFileExtension(
                               a1,
                               *(_QWORD *)(v2 + 8LL * (unsigned int)Base[6 * v14] + 22304),
                               v3 - v17);
      }
      while ( v17 < v3 );
    }
    if ( v17 )
    {
      *(_QWORD *)(a1 + 40) = v17;
      if ( v6 )
        MiIncreaseCommitLimits(v2, v17, 0LL, 0LL, 0, 0LL);
    }
  }
}
