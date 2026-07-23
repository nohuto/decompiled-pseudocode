/*
 * XREFs of CmpConstructNameFromKcbNameBlocks @ 0x1408C7DFC
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1408C6620 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpConstructNameWithStatus @ 0x1408C7C30 (CmpConstructNameWithStatus.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     CmpKeyFullNameLength @ 0x1408C7B34 (CmpKeyFullNameLength.c)
 *     CmpCopyCompressedName @ 0x1408C82E0 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpConstructNameFromKcbNameBlocks(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  unsigned int v4; // eax
  unsigned __int16 v5; // bx
  __int64 Pool; // rax
  unsigned int v7; // edi
  __int64 v8; // r14
  unsigned __int16 v9; // bx
  __int64 v10; // rdx
  unsigned __int16 v11; // r10
  unsigned __int16 v12; // bx
  void *v13; // rcx

  v3 = a1;
  v4 = CmpKeyFullNameLength(a1);
  v5 = v4;
  if ( v4 > 0xFFFF )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Pool = CmpAllocatePool(0x100uLL);
    v7 = 0;
    v8 = Pool;
    if ( Pool )
    {
      *(_WORD *)Pool = v5;
      *(_WORD *)(Pool + 2) = v5;
      v9 = v5 >> 1;
      for ( *(_QWORD *)(Pool + 8) = Pool + 16; v3; v3 = *(_QWORD *)(v3 + 72) )
      {
        while ( (*(_DWORD *)(v3 + 184) & 0x40000) != 0 && *(_QWORD *)(v3 + 72) )
          v3 = *(_QWORD *)(v3 + 72);
        v10 = *(_QWORD *)(v3 + 80);
        v11 = *(_WORD *)(v10 + 24);
        if ( (*(_DWORD *)(v10 + 12) & 1) == 0 )
          v11 >>= 1;
        v12 = v9 - v11;
        v13 = (void *)(*(_QWORD *)(v8 + 8) + 2LL * v12);
        if ( (*(_DWORD *)(v10 + 12) & 1) != 0 )
          CmpCopyCompressedName(v13, 2 * (unsigned int)v11, v10 + 26, v11);
        else
          memmove(v13, (const void *)(v10 + 26), 2LL * v11);
        v9 = v12 - 1;
        *(_WORD *)(*(_QWORD *)(v8 + 8) + 2LL * v9) = 92;
      }
      *a2 = v8;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v7;
}
