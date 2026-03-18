/*
 * XREFs of CmpInitSiloSupport @ 0x140854C64
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x1407FF9E4 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x140854BE4 (CmInitServerSiloState.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot, a2, a3, a4);
  if ( (int)result >= 0 )
    return CmInitServerSiloState();
  return result;
}
