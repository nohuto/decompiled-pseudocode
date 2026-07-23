/*
 * XREFs of MiMakeProtoTransition @ 0x1402BE8B0
 * Callers:
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiMakeProtoTransition(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r15
  _QWORD *v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rdi
  int v10; // r14d
  unsigned int v11; // edi
  unsigned __int64 v12; // r10
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 *v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rax

  v3 = a1[2] >> 5;
  v4 = a1[5] & 0xFFFFFFFFFFLL;
  v5 = a1;
  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    result = 0x8000000000000000uLL;
    if ( v7 >= a2 )
      break;
    v9 = v5[1] | 0x8000000000000000uLL;
    if ( v9 >= 0xFFFF800000000000uLL && byte_140E37BF0[((v9 >> 39) & 0x1FF) - 256] == 4 )
    {
      if ( v6 )
      {
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      v6 = v9;
      v10 = 1;
      v11 = 0;
    }
    else
    {
      v10 = 0;
      v11 = (*((_DWORD *)v5 + 2) >> 3) & 0x1FF;
      if ( !v7 || (v5[5] & 0xFFFFFFFFFFLL) == v4 )
      {
        if ( v6 )
          goto LABEL_8;
      }
      else if ( v6 )
      {
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      v4 = v5[5] & 0xFFFFFFFFFFLL;
      v6 = MiMapPageInHyperSpaceWorker(v4, 0LL, 0x80000000);
    }
LABEL_8:
    v12 = v6;
    BugCheckParameter4 = *(_QWORD *)(v6 + 8LL * v11);
    v14 = (unsigned __int64 *)(v6 + 8LL * v11);
    v15 = (BugCheckParameter4 >> 12) & 0xFFFFFFFFFFLL;
    if ( (_QWORD *)(48 * v15 - 0x220000000000LL) != v5 )
      KeBugCheckEx(0x4Eu, 6uLL, (__int64)(v5 + 0x44000000000LL) / 48, (ULONG_PTR)v14, BugCheckParameter4);
    v16 = (32 * (_WORD)v3) & 0x3E0 ^ ((v15 << 12) | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C1FuLL | 0x800);
    if ( qword_140E2D8C0 )
    {
      if ( (qword_140E2D8C0 & v16) != 0 )
        v16 |= 0x10uLL;
      else
        v16 |= qword_140E2D8C0;
    }
    *v14 = v16;
    result = v7 + 1;
    v6 = 0LL;
    if ( !v10 )
      v6 = v12;
    ++v7;
    if ( result == a2 )
      break;
    v5 = (_QWORD *)(48 * (*v5 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  }
  if ( v6 )
  {
    result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  return result;
}
