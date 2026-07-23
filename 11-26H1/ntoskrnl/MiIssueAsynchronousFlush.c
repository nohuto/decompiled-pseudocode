/*
 * XREFs of MiIssueAsynchronousFlush @ 0x1403CB874
 * Callers:
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     IoAsynchronousPageWrite @ 0x14026D9C4 (IoAsynchronousPageWrite.c)
 *     MiFlushComplete @ 0x1403CB1D0 (MiFlushComplete.c)
 *     MiGetAsynchronousFlushEntry @ 0x1403CB994 (MiGetAsynchronousFlushEntry.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiIssueAsynchronousFlush(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        LARGE_INTEGER a5,
        char a6,
        int a7,
        __int64 a8)
{
  struct _MDL *v11; // r14
  __int64 v12; // rdx
  NTSTATUS v13; // ebp
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // di

  *(_WORD *)(a2 + 48) = 0;
  *(_BYTE *)(a2 + 50) = 6;
  *(_DWORD *)(a2 + 52) = 0;
  *(_QWORD *)(a2 + 64) = a2 + 56;
  *(_QWORD *)(a2 + 56) = a2 + 56;
  v11 = *(struct _MDL **)(a2 + 72);
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = (char *)v11 + 8 * ((unsigned __int64)v11->ByteCount >> 12) + 48;
  if ( a4 )
    _InterlockedAdd((volatile signed __int32 *)(a4 + 16), 1u);
  v13 = IoAsynchronousPageWrite(
          a1,
          v11,
          &a5,
          (LARGE_INTEGER)MiFlushComplete,
          (void *)a2,
          a7,
          0,
          a6,
          a8,
          (struct _IO_STATUS_BLOCK *)a2,
          (IRP **)(a2 + 24));
  v14 = v13 & 0xC0000000;
  if ( (_DWORD)v14 != -1073741824 )
    return MiGetAsynchronousFlushEntry(a3);
  *(_DWORD *)a2 = v13;
  *(_QWORD *)(a2 + 8) = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = 1;
    LOBYTE(v14) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v14, v12);
  }
  MiFlushComplete(a2, a2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( a4 )
    *(_DWORD *)(a4 + 20) = v13;
  v11->ByteCount = 0;
  return 0LL;
}
