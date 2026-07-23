/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevel @ 0x1403C2390
 * Callers:
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403C22D0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall ViAvlAcquireTableLockAtDpcLevel(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile LONG *v4; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = (volatile LONG *)(a1 + 128);
  if ( (*(_BYTE *)(a2 + 12) & 4) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v4);
    *(_QWORD *)(a1 + 136) = CurrentThread;
  }
  else
  {
    ExAcquireSpinLockSharedAtDpcLevel(v4);
  }
  result = *(unsigned int *)(a2 + 16);
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 12) |= 2u;
  *(_DWORD *)(a2 + 16) = result ^ ((unsigned __int8)result ^ (unsigned __int8)(result + 1)) & 0xF;
  return result;
}
