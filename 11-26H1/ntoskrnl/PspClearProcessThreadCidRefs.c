/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x140959970
 * Callers:
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExLockHandleTableEntry @ 0x14044C040 (ExLockHandleTableEntry.c)
 *     ObDereferenceObjectExWithTag2 @ 0x14047F848 (ObDereferenceObjectExWithTag2.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 */

int __fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 *v5; // rax
  __int64 v6; // r9
  volatile signed __int64 *v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  volatile __int64 *v10; // rcx
  _QWORD *v11; // rax
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a1 + 486);
  if ( (a2 & 0x3FC) == 0
    || (v5 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, a2), (v7 = v5) == 0LL)
    || !ExLockHandleTableEntry(v6, v5) )
  {
    v7 = 0LL;
  }
  v8 = (unsigned __int16)((unsigned __int64)*v7 >> 1);
  *v7 &= 0xFFFFFFFFFFFE0001uLL;
  v9 = PspCidTable;
  _InterlockedIncrement64(v7);
  v10 = (volatile __int64 *)(v9 + 48);
  _InterlockedOr(v14, 0);
  v11 = (_QWORD *)*v10;
  if ( *v10 )
    LODWORD(v11) = ExfUnblockPushLock(v10, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v11 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v11 != v11 )
      LODWORD(v11) = KiCheckForKernelApcDelivery((__int64)v10, a2);
  }
  if ( v8 )
    LODWORD(v11) = ObDereferenceObjectExWithTag2(a3, v8, 0x746C6644u, 0);
  return (int)v11;
}
