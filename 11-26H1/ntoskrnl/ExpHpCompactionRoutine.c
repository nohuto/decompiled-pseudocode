/*
 * XREFs of ExpHpCompactionRoutine @ 0x1404AAB60
 * Callers:
 *     <none>
 * Callees:
 *     ExpHpEnumerateHeaps @ 0x1404AABAC (ExpHpEnumerateHeaps.c)
 *     ExpPoolMgrCompactPools @ 0x140AC36CC (ExpPoolMgrCompactPools.c)
 */

__int64 __fastcall ExpHpCompactionRoutine(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  ExpHpEnumerateHeaps(a1, ExpHpCompactHeapCallback);
  result = ExpPoolMgrCompactPools(&dword_140E6BC60, v1);
  if ( v1 == 1 )
    *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.Tag = 0;
  else
    ExSaPageGroupDescriptorArrayLock.SystemCallNumber = 0;
  return result;
}
