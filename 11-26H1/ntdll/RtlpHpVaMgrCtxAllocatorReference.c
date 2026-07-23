/*
 * XREFs of RtlpHpVaMgrCtxAllocatorReference @ 0x180070444
 * Callers:
 *     RtlpHpVaMgrCtxStart @ 0x18007036C (RtlpHpVaMgrCtxStart.c)
 *     RtlpHpRegisterEnvironment @ 0x180070BB8 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x1800705AC (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(__int64 a1, __int64 a2)
{
  int v2; // edi
  _RTL_SRWLOCK *v3; // r15
  int v6; // ebx
  __int64 v7; // rax
  __int16 v8; // r8
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  char v12; // al
  bool v13; // zf
  char v14; // dl
  __int16 v16; // ax
  _QWORD *v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 2152);
  v3 = (_RTL_SRWLOCK *)(a1 + 2144);
  v17 = 0LL;
  v6 = `RtlpHpMemoryTypePageSize'::`2'::PageSize[*(int *)(a2 + 4)] - 1;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 2144));
  v7 = RtlpHpVaMgrCtxAllocatorFind(a1, a2, (v2 - (v6 & (unsigned int)(v6 + v2)) + v6) >> 20, &v17);
  v9 = (_QWORD *)v7;
  if ( v7 )
  {
    v16 = *(_WORD *)(v7 + 42);
    if ( v16 == -1 )
      v9 = 0LL;
    else
      *((_WORD *)v9 + 21) = v16 + 1;
  }
  else
  {
    v10 = v17;
    if ( v17 )
    {
      v9 = v17;
      *v17 = 0LL;
      v11 = (__int64)v10 - a1 - 2160;
      v10[4] = *(_QWORD *)(a2 + 16);
      *((_WORD *)v10 + 20) = v8;
      *((_WORD *)v10 + 21) = 1;
      v9[3] = a1;
      v12 = *(_BYTE *)(a2 + 8);
      v13 = *(_DWORD *)(a2 + 4) == 0;
      *((_BYTE *)v9 + 44) = v11 / 48;
      v14 = *(_BYTE *)(a2 + 4);
      *((_BYTE *)v9 + 45) = v12;
      *((_BYTE *)v9 + 46) = (16 * (*(_BYTE *)(a2 + 12) & 1)) | ((*((_BYTE *)v9 + 46) & 0xF0 | !v13) ^ (2 * (v14 & 7))) & 0xEF;
      ++*(_DWORD *)(a1 + 2156);
    }
  }
  RtlReleaseSRWLockExclusive(v3);
  if ( v9 )
    return *((unsigned __int8 *)v9 + 44);
  else
    return 0xFFFFFFFFLL;
}
