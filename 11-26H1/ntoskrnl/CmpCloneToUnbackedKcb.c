/*
 * XREFs of CmpCloneToUnbackedKcb @ 0x14085F524
 * Callers:
 *     CmpPrepareDiscardReplacePost @ 0x140865150 (CmpPrepareDiscardReplacePost.c)
 * Callees:
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408C2C40 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1408CBB28 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140A66720 (CmpFreeKeyControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x140A74560 (CmpAllocateKeyControlBlock.c)
 */

__int64 __fastcall CmpCloneToUnbackedKcb(__int64 a1, __int64 *a2)
{
  __int64 KeyControlBlock; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // al
  bool v12; // al

  KeyControlBlock = CmpAllocateKeyControlBlock();
  v5 = KeyControlBlock;
  if ( KeyControlBlock )
  {
    v7 = (_QWORD *)(KeyControlBlock + 120);
    v7[1] = v7;
    *v7 = v7;
    *(_OWORD *)(v5 + 136) = 0LL;
    *(_OWORD *)(v5 + 152) = 0LL;
    *(_QWORD *)v5 = 1LL;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(v5 + 40) = -1;
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 216) = v5 + 208;
    *(_QWORD *)(v5 + 208) = v5 + 208;
    *(_QWORD *)(v5 + 232) = v5 + 224;
    *(_QWORD *)(v5 + 224) = v5 + 224;
    *(_QWORD *)(v5 + 240) = 0LL;
    *(_DWORD *)(v5 + 248) = 0;
    *(_QWORD *)(v5 + 256) = 0LL;
    *(_DWORD *)(v5 + 264) = 0;
    *(_QWORD *)(v5 + 272) = 0LL;
    *(_DWORD *)(v5 + 280) = 0;
    *(_DWORD *)(v5 + 284) = -1;
    *(_QWORD *)(v5 + 288) = 0LL;
    v8 = *(_QWORD **)(a1 + 80);
    if ( *v8 == -1LL )
    {
      v9 = *(_QWORD *)(v5 + 80);
      v6 = -1073741670;
      if ( v9 )
      {
        CmpDereferenceNameControlBlockWithLock(v9);
        *(_QWORD *)(v5 + 80) = 0LL;
      }
      *(_DWORD *)(v5 + 8) |= 0x80000u;
      CmpFreeKeyControlBlock((PVOID)v5);
    }
    else
    {
      *(_QWORD *)(v5 + 80) = v8;
      ++*v8;
      v10 = *(_QWORD *)(a1 + 72);
      if ( v10 )
      {
        v11 = *(_BYTE *)(v10 + 65);
        v12 = v11 == 1 || v11 == 3;
        *(_BYTE *)(v5 + 65) = v12;
        CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(a1 + 72));
        *(_QWORD *)(v5 + 72) = *(_QWORD *)(a1 + 72);
      }
      *(_WORD *)(v5 + 12) = *(_WORD *)(a1 + 12);
      if ( *(_BYTE *)(*(_QWORD *)(v5 + 32) + 2952LL) == 1 )
        *(_WORD *)(v5 + 8) |= 0x20u;
      *a2 = v5;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
