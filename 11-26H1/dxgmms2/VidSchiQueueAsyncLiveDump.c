/*
 * XREFs of VidSchiQueueAsyncLiveDump @ 0x1400551C0
 * Callers:
 *     VidSchiCompletePendingFlip @ 0x1400036D8 (VidSchiCompletePendingFlip.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

__int64 __fastcall VidSchiQueueAsyncLiveDump(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // r14
  char *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v11, (unsigned __int64 *)(a1 + 6880), 1, 1);
  AcquireSpinLock::Release((AcquireSpinLock *)v11);
  v4 = a1 + 6920;
  v5 = -1073741801;
  v6 = *(_QWORD *)(a1 + 6920);
  v7 = (char *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(a1 + 6944));
  if ( v7 )
  {
    *(_OWORD *)v7 = *(_OWORD *)a2;
    *((_OWORD *)v7 + 1) = *(_OWORD *)(a2 + 16);
    *((_QWORD *)v7 + 4) = *(_QWORD *)(a2 + 32);
    v8 = v7 + 8;
    v9 = *(_QWORD **)(a1 + 6928);
    if ( *v9 != v4 )
      __fastfail(3u);
    *v8 = v4;
    v8[1] = v9;
    *v9 = v8;
    *(_QWORD *)(a1 + 6928) = v8;
    ++*(_DWORD *)(a1 + 6936);
    if ( v6 == v4 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 6888), NormalWorkQueue);
    return 0;
  }
  return v5;
}
