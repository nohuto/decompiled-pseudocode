/*
 * XREFs of IoGetFileMemoryPartitionInformation @ 0x14048A5CC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetFileMemoryPartitionInformation(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 208);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 72);
  return result;
}
