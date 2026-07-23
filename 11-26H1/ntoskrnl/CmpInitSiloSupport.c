/*
 * XREFs of CmpInitSiloSupport @ 0x14085AF74
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x140805414 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x14085AEF4 (CmInitServerSiloState.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot, a2, a3, a4);
  if ( (int)result >= 0 )
    return CmInitServerSiloState();
  return result;
}
