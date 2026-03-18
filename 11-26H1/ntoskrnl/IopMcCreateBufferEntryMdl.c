/*
 * XREFs of IopMcCreateBufferEntryMdl @ 0x14079B5CC
 * Callers:
 *     IopMcGetBuffer @ 0x140B0106C (IopMcGetBuffer.c)
 * Callees:
 *     IopMcAddMdlPagesToTable @ 0x14030D198 (IopMcAddMdlPagesToTable.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x14030D88C (IopMcRemoveMdlPagesFromTable.c)
 *     IopUnlockAndFreeMdl @ 0x14040FCD4 (IopUnlockAndFreeMdl.c)
 *     IopAllocateAndLockMdl @ 0x1407940EC (IopAllocateAndLockMdl.c)
 */

void __fastcall IopMcCreateBufferEntryMdl(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  char v5; // r8
  ULONG v7; // edx
  void *v8; // rcx
  struct _MDL *v9; // rdi
  signed __int32 v10[14]; // [rsp+0h] [rbp-38h] BYREF
  PMDL Mdl; // [rsp+40h] [rbp+8h] BYREF

  v4 = dword_140F84D40;
  v5 = *(_BYTE *)(BugCheckParameter2 + 44);
  v7 = *(_DWORD *)(BugCheckParameter2 + 40);
  v8 = *(void **)(BugCheckParameter2 + 32);
  Mdl = 0LL;
  if ( (int)IopAllocateAndLockMdl(v8, v7, v5, a4, &Mdl, 0LL) >= 0 )
  {
    v9 = Mdl;
    IopMcAddMdlPagesToTable(BugCheckParameter2, (__int64)Mdl);
    _InterlockedOr(v10, 0);
    if ( v4 == dword_140F84D40 )
    {
      *(_QWORD *)(BugCheckParameter2 + 56) = v9;
    }
    else
    {
      IopMcRemoveMdlPagesFromTable(BugCheckParameter2, (ULONG_PTR)v9);
      IopUnlockAndFreeMdl(v9);
    }
  }
}
