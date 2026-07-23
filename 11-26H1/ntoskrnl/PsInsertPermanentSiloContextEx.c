/*
 * XREFs of PsInsertPermanentSiloContextEx @ 0x140A4BD94
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x1408AD404 (ObCreateSiloRootDirectory.c)
 *     PsInsertPermanentSiloContext @ 0x140A4B940 (PsInsertPermanentSiloContext.c)
 *     CmpAttachContextToSilo @ 0x140A4BD68 (CmpAttachContextToSilo.c)
 * Callees:
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspIsSiloContext @ 0x140A4BFFC (PspIsSiloContext.c)
 *     PspStorageInsertObject @ 0x140A4C044 (PspStorageInsertObject.c)
 *     PspLockJobShared @ 0x140A87E58 (PspLockJobShared.c)
 *     PspUnlockJobShared @ 0x140AAB240 (PspUnlockJobShared.c)
 *     PspJobHasChildren @ 0x140B0BAE0 (PspJobHasChildren.c)
 */

__int64 __fastcall PsInsertPermanentSiloContextEx(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v8; // rsi
  __int64 v9; // r8
  _QWORD *v10; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int inserted; // esi
  _BYTE v14[80]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v14, 0, 0x48uLL);
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v8 = qword_140FC9E30;
  if ( a1 )
    v8 = *(_QWORD *)(a1 + 1536);
  if ( (unsigned __int8)PspIsSiloContext(a3) )
  {
    v10 = (*(_BYTE *)(a3 - 48 + 26) & 0x40) != 0
        ? (_QWORD *)(*(_QWORD *)(a3 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a3 - 48 + 26) & 0x7F]) + 32LL)
        : 0LL;
    if ( *v10 != a1 )
      return 3221225485LL;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !a1 )
      return 3221225520LL;
    CurrentThread = KeGetCurrentThread();
    ExInitializeFastOwnerEntry((__int64)v14);
    PspLockJobShared(a1, CurrentThread, v14);
    if ( (unsigned __int8)PspJobHasChildren(a1) )
    {
      inserted = -1073740529;
      goto LABEL_12;
    }
  }
  else
  {
    CurrentThread = 0LL;
  }
  LOBYTE(v9) = 1;
  inserted = PspStorageInsertObject(v8, a2, v9, a3);
LABEL_12:
  if ( CurrentThread )
    PspUnlockJobShared(a1, CurrentThread, v14);
  return inserted;
}
