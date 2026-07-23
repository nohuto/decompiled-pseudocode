/*
 * XREFs of MiLockPoolCommitPageTable @ 0x14045E930
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x140367040 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockPoolCommitPageTable(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r14
  ULONG_PTR v5; // rbx
  signed int v6; // eax
  unsigned int v7; // edi
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rcx
  unsigned __int64 valid; // rax
  __int64 v12; // [rsp+28h] [rbp-50h]
  unsigned __int64 v13; // [rsp+30h] [rbp-48h]
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]
  unsigned __int64 v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  _QWORD *v17; // [rsp+80h] [rbp+8h] BYREF

  v17 = 0LL;
  v4 = *(_QWORD *)(a1 + 72);
  v5 = (__int64)(a2 << 25) >> 16;
  v6 = MiFastLockLeafPageTable(v4, v5, 0);
  v7 = v6;
  if ( v6 )
  {
    v13 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = *(&v13 + v6);
    v9 = (_QWORD *)*(&v12 + v6);
    v17 = v9;
    if ( v8 )
    {
      if ( v6 == 1 )
        goto LABEL_4;
      if ( v6 != 2 )
      {
        v7 = 0;
        MiUnlockPageTableInternal(v4, v8);
        v8 = 0LL;
        goto LABEL_9;
      }
      goto LABEL_7;
    }
  }
  valid = MiLockLowestValidPageTableEx(v4, a2, (unsigned __int64 *)&v17, 0);
  v9 = v17;
  v8 = valid;
  if ( v17 == (_QWORD *)a2 )
  {
    v7 = 1;
LABEL_4:
    if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
      KeBugCheckEx(0x1Au, 0x5301uLL, v5, 0LL, 0LL);
    goto LABEL_9;
  }
  if ( v17 == (_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    v7 = 2;
LABEL_7:
    if ( (*v9 & 1) != 0 )
    {
      if ( (*v9 & 0x80u) != 0LL )
        KeBugCheckEx(0x1Au, 0x5302uLL, v5, 0LL, 0LL);
      if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
        KeBugCheckEx(0x1Au, 0x5303uLL, v5, 0LL, 0LL);
    }
    else if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
    {
      goto LABEL_9;
    }
  }
  v7 = 0;
  if ( v8 )
  {
    MiUnlockPageTableInternal(v4, v8);
    v8 = 0LL;
  }
LABEL_9:
  *(_QWORD *)(a1 + 88) = v8;
  return v7;
}
