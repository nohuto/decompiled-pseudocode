/*
 * XREFs of SepInitializeSingletonAttributesStructures @ 0x140CE4768
 * Callers:
 *     SepInitializationPhase1 @ 0x140815D14 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x1404B2200 (RtlpCreateHashTable.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 SepInitializeSingletonAttributesStructures()
{
  PEX_SPIN_LOCK v0; // rax
  unsigned int v1; // ebx
  struct _KTHREAD *v2; // rax
  _QWORD *Pool2; // rdi
  void *v4; // rax
  void *v5; // rsi
  _QWORD *v6; // rax
  PEX_SPIN_LOCK v7; // rcx
  void *v8; // rcx
  struct _KTHREAD *v9; // rcx

  v0 = SepSingletonGlobal;
  v1 = 0;
  *SepSingletonGlobal = 0;
  *((_DWORD *)v0 + 1) = 0;
  *((_QWORD *)v0 + 1) = 0LL;
  *((_DWORD *)v0 + 4) = 0;
  v2 = SeLuidToIndexMapping;
  *(_QWORD *)&SeLuidToIndexMapping->Header.Lock = 0LL;
  v2->Header.WaitListHead.Flink = 0LL;
  if ( (RtlpBootStatHandleLock.UserTime & 3) == 3 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8uLL, 0x74446553u);
    if ( Pool2 )
    {
      v4 = (void *)ExAllocatePool2(64LL, 0x600uLL, 0x74446553u);
      v5 = v4;
      if ( v4 )
      {
        memset_0(v4, 0, 0x600uLL);
        v6 = (_QWORD *)ExAllocatePool2(64LL, 8uLL, 0x74446553u);
        v7 = SepSingletonGlobal;
        *((_QWORD *)SepSingletonGlobal + 1) = v6;
        if ( v6 )
        {
          *v6 = v5;
          ++*((_DWORD *)v7 + 1);
          if ( RtlpCreateHashTable((__int64 *)&SeLuidToIndexMapping->Header.WaitListHead, 0x80u, 0, 0) )
          {
            v9 = SeLuidToIndexMapping;
            LODWORD(SeLuidToIndexMapping->Header.WaitListHead.Blink) = 64;
            v9->SListFaultAddress = Pool2;
            *Pool2 = 0LL;
            return v1;
          }
        }
        v1 = -1073741801;
        ExFreePoolWithTag(v5, 0x74446553u);
      }
      else
      {
        v1 = -1073741801;
      }
      ExFreePoolWithTag(Pool2, 0x74446553u);
    }
    else
    {
      v1 = -1073741801;
    }
    v8 = (void *)*((_QWORD *)SepSingletonGlobal + 1);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x74446553u);
  }
  return v1;
}
