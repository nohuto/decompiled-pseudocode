/*
 * XREFs of MiGetPageFileResizeCandidates @ 0x1404E083C
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1406FD3DC (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x1407121C0 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFiles @ 0x140B316B4 (MiExtendPagingFiles.c)
 * Callees:
 *     MiPageFileChangeCandidate @ 0x1404E09AC (MiPageFileChangeCandidate.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiGetPageFileResizeCandidates(__int64 a1, unsigned __int64 a2, unsigned int a3, char *a4)
{
  unsigned int v7; // esi
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // r15
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 i; // rdx
  __int64 v15; // rcx
  __int64 v16; // xmm1_8
  __int128 v17; // [rsp+28h] [rbp-99h] BYREF
  __int64 v18; // [rsp+38h] [rbp-89h]
  __int64 v19; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-71h]
  unsigned __int64 v21; // [rsp+58h] [rbp-69h]
  unsigned __int64 v22; // [rsp+60h] [rbp-61h]
  _QWORD v23[22]; // [rsp+68h] [rbp-59h]

  memset_0(&v19, 0, 0xA0uLL);
  v7 = *(_DWORD *)(a1 + 22296);
  v8 = 0LL;
  v18 = 0LL;
  v19 = a1;
  v21 = a2;
  v17 = 0LL;
  if ( a4 )
  {
    memset_0(a4, 0, 0x180uLL);
    if ( v7 > 0x10 )
      v7 = 16;
  }
  v9 = v22;
  v10 = 0LL;
  v11 = v20;
  while ( (unsigned int)v10 < v7 )
  {
    if ( (unsigned int)MiPageFileChangeCandidate(&v17, *(_QWORD *)(a1 + 8 * v10 + 22304), a3) )
    {
      if ( !a3 )
      {
        v12 = 0LL;
        for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8LL * (unsigned int)v17 + 22304) + 24LL) + 16LL);
              (unsigned int)v12 < v11;
              v12 = (unsigned int)(v12 + 1) )
        {
          if ( v23[v12] == i )
            break;
        }
        if ( (_DWORD)v12 == v11 )
        {
          v22 = v18 + v9;
          v23[v12] = i;
          v9 = v22;
          v11 = v20 + 1;
          a2 = v21;
          ++v20;
        }
        if ( v9 >= 0x400000 && v9 >> 4 >= a2 )
          return 0LL;
      }
      if ( a4 )
      {
        v15 = 3 * v8;
        v16 = v18;
        *(_OWORD *)&a4[8 * v15] = v17;
        *(_QWORD *)&a4[8 * v15 + 16] = v16;
      }
      v8 = (unsigned int)(v8 + 1);
    }
    v10 = (unsigned int)(v10 + 1);
  }
  return (unsigned int)v8;
}
