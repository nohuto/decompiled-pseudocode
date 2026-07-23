/*
 * XREFs of SmHpUnprotectListNeighbors @ 0x14024F5F4
 * Callers:
 *     SmHpChunkFree @ 0x140211300 (SmHpChunkFree.c)
 *     SmHpBufferUpdateFullness @ 0x14024F400 (SmHpBufferUpdateFullness.c)
 *     SmHpChunkAlloc @ 0x14024FF10 (SmHpChunkAlloc.c)
 * Callees:
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 *     SmHpBufferProtectEx @ 0x14024E610 (SmHpBufferProtectEx.c)
 *     ExProtectPoolEx @ 0x14024E7DC (ExProtectPoolEx.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140250D94 (SmPrepareForFatalHeapCorruption.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall SmHpUnprotectListNeighbors(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  void *v19; // rcx
  int v20; // eax
  void *v21; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 )
  {
    if ( *a3 != a2 )
    {
      v6 = *(unsigned int *)(*a3 + 16LL);
      _BitScanReverse((unsigned int *)&v7, v6);
      BugCheckParameter4 = 0LL;
      v8 = 2 * (v6 ^ (unsigned int)(1 << v7));
      v9 = *(_QWORD *)(a1 + 8 * v7);
      if ( *(_DWORD *)(v9 + 16 * (v6 ^ (unsigned int)(1 << v7)) + 12) )
      {
        v18 = rapidhash_internal(*(unsigned __int8 **)(v9 + 16 * (v6 ^ (unsigned int)(1 << v7))), 0x1000uLL, 0LL);
        v19 = *(void **)(v9 + 8 * v8);
        if ( !v18 )
          v18 = 1;
        if ( v18 != *(_DWORD *)(v9 + 8 * v8 + 12) )
        {
          SmPrepareForFatalHeapCorruption(v19, (__int64)&BugCheckParameter4);
          KeBugCheckEx(0x1C7u, 0LL, *(_QWORD *)(v9 + 8 * v8), *(unsigned int *)(v9 + 8 * v8 + 12), BugCheckParameter4);
        }
        ExProtectPoolEx((unsigned __int64)v19, *(_QWORD *)(v9 + 8 * v8), 4096LL, 4u);
        *(_DWORD *)(v9 + 8 * v8 + 12) = 0;
      }
    }
    result = a3[1];
    if ( result != a2 )
    {
      v11 = *(unsigned int *)(result + 16);
      _BitScanReverse((unsigned int *)&v12, v11);
      BugCheckParameter4 = 0LL;
      v13 = 2 * (v11 ^ (unsigned int)(1 << v12));
      v14 = *(_QWORD *)(a1 + 8 * v12);
      if ( *(_DWORD *)(v14 + 16 * (v11 ^ (unsigned int)(1 << v12)) + 12) )
      {
        v20 = rapidhash_internal(*(unsigned __int8 **)(v14 + 16 * (v11 ^ (unsigned int)(1 << v12))), 0x1000uLL, 0LL);
        v21 = *(void **)(v14 + 8 * v13);
        if ( !v20 )
          v20 = 1;
        if ( v20 != *(_DWORD *)(v14 + 8 * v13 + 12) )
        {
          SmPrepareForFatalHeapCorruption(v21, (__int64)&BugCheckParameter4);
          KeBugCheckEx(
            0x1C7u,
            0LL,
            *(_QWORD *)(v14 + 8 * v13),
            *(unsigned int *)(v14 + 8 * v13 + 12),
            BugCheckParameter4);
        }
        result = ExProtectPoolEx((unsigned __int64)v21, *(_QWORD *)(v14 + 8 * v13), 4096LL, 4u);
        *(_DWORD *)(v14 + 8 * v13 + 12) = 0;
      }
    }
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 8);
    LODWORD(BugCheckParameter4) = 0;
    v16 = *(unsigned int *)(v15 + 16);
    _BitScanReverse((unsigned int *)&v17, v16);
    return SmHpBufferProtectEx(v17, (_QWORD *)(*(_QWORD *)(a1 + 8 * v17) + 16 * (v16 ^ (unsigned int)(1 << v17))), 1, 0);
  }
  return result;
}
