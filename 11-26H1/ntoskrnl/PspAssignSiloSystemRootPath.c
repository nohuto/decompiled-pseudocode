/*
 * XREFs of PspAssignSiloSystemRootPath @ 0x1407F4490
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140269180 (HalPutDmaAdapter.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PsCreateSiloContext @ 0x140A4BC80 (PsCreateSiloContext.c)
 *     PsInsertSiloContext @ 0x140A4BF80 (PsInsertSiloContext.c)
 */

__int64 __fastcall PspAssignSiloSystemRootPath(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // rdx
  _WORD *v5; // rcx
  __int64 result; // rax
  PADAPTER_OBJECT v7; // rdi
  PADAPTER_OBJECT v8; // rcx
  unsigned int inserted; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  DmaAdapter = 0LL;
  v3 = *a2;
  if ( (unsigned int)v3 < 8 )
    return 3221225485LL;
  if ( (unsigned __int64)(v3 - 2) > 0x208 )
    return 3221225485LL;
  v5 = (_WORD *)*((_QWORD *)a2 + 1);
  if ( (unsigned __int16)(*v5 - 65) > 0x19u
    || v5[1] != 58
    || v5[2] != 92
    || v5[((unsigned __int64)(unsigned int)v3 >> 1) - 1] == 92 )
  {
    return 3221225485LL;
  }
  result = PsCreateSiloContext(a1, (int)v3 + 16, 1, 0, (__int64)&DmaAdapter);
  if ( (int)result >= 0 )
  {
    v7 = DmaAdapter;
    v8 = DmaAdapter + 1;
    DmaAdapter->DmaOperations = (_DMA_OPERATIONS *)&DmaAdapter[1];
    v7->Version = *a2;
    v7->Size = *a2;
    memmove(v8, *((const void **)a2 + 1), *a2);
    inserted = PsInsertSiloContext(a1, (unsigned int)PsSystemRootSiloContextSlot, v7);
    HalPutDmaAdapter(v7);
    return inserted;
  }
  return result;
}
