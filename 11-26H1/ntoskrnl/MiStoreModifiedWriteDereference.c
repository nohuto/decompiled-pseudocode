/*
 * XREFs of MiStoreModifiedWriteDereference @ 0x14020A990
 * Callers:
 *     MiStoreModifiedWriteComplete @ 0x14020BAAC (MiStoreModifiedWriteComplete.c)
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 */

__int64 __fastcall MiStoreModifiedWriteDereference(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 72);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 88), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)(a1 + 32) = *(unsigned int *)(a1 + 144);
    v4 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(v2 + 8) = *(_QWORD *)(v4 + 1072);
    *(_QWORD *)(v2 + 32) = MiStoreWriteModifiedCompleteApc;
    *(_WORD *)v2 = 18;
    *(_BYTE *)(v2 + 2) = 88;
    *(_WORD *)(v2 + 80) = 0;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_BYTE *)(v2 + 82) = 0;
    return KeInsertQueueApc(v2, a1, 0LL, 0LL);
  }
  return result;
}
