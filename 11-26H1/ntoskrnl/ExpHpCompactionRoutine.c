/*
 * XREFs of ExpHpCompactionRoutine @ 0x1404A41F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpHpEnumerateHeaps @ 0x1404A423C (ExpHpEnumerateHeaps.c)
 *     ExpPoolMgrCompactPools @ 0x140AC533C (ExpPoolMgrCompactPools.c)
 */

__int64 __fastcall ExpHpCompactionRoutine(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  ExpHpEnumerateHeaps(a1, ExpHpCompactHeapCallback);
  result = ExpPoolMgrCompactPools(&dword_140E6BF60, v1);
  if ( v1 == 1 )
    HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase) = 0;
  else
    LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock) = 0;
  return result;
}
