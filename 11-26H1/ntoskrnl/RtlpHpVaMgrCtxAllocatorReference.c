/*
 * XREFs of RtlpHpVaMgrCtxAllocatorReference @ 0x14063BCCC
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x14063B9E0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxStart @ 0x14063BEC0 (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpInitializeLock @ 0x14034D510 (RtlpHpInitializeLock.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x140504444 (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // edi
  struct _KTHREAD *v5; // r15
  int v8; // esi
  char v9; // r12
  unsigned int v10; // edi
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int16 v13; // ax
  char v14; // al
  char v15; // r8
  _QWORD *v17; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1[538];
  v5 = (struct _KTHREAD *)(a1 + 536);
  v17 = 0LL;
  v8 = `RtlpHpMemoryTypePageSize'::`2'::PageSize[*(int *)(a2 + 4)];
  v9 = RtlpHpAcquireLockExclusive(a1 + 536, 1LL, a3, a4);
  v10 = (v8 + v4 - ((v8 - 1) & (unsigned int)(v8 - 1 + v4)) - 1) >> 20;
  v11 = RtlpHpVaMgrCtxAllocatorFind((__int64)a1, a2, v10, &v17);
  v12 = (_QWORD *)v11;
  if ( v11 )
  {
    v13 = *(_WORD *)(v11 + 42);
    if ( v13 == -1 )
      v12 = 0LL;
    else
      *((_WORD *)v12 + 21) = v13 + 1;
  }
  else if ( v17 )
  {
    v12 = v17;
    RtlpHpInitializeLock(v17, *(_DWORD *)(a2 + 4) != 0);
    v12[4] = *(_QWORD *)(a2 + 16);
    *((_WORD *)v12 + 20) = v10;
    *((_WORD *)v12 + 21) = 1;
    v12[3] = a1;
    *((_BYTE *)v12 + 45) = *(_BYTE *)(a2 + 8);
    v14 = *((_BYTE *)v12 + 46) & 0xFE;
    *((_BYTE *)v12 + 44) = ((char *)v12 - (char *)a1 - 2160) / 48;
    *((_BYTE *)v12 + 46) = (16 * (*(_BYTE *)(a2 + 12) & 1)) | ((v15 | v14) & 0xF1 ^ (2 * (*(_BYTE *)(a2 + 4) & 7))) & 0xEF;
    ++a1[539];
  }
  RtlpHpReleaseLockExclusive(v5, 1, v9);
  if ( v12 )
    return *((unsigned __int8 *)v12 + 44);
  else
    return 0xFFFFFFFFLL;
}
