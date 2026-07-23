/*
 * XREFs of CcForEachNumaNode @ 0x1403E7398
 * Callers:
 *     CcInitializePrivateVolumeCacheMap @ 0x1403E6740 (CcInitializePrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E7080 (CcDeletePrivateVolumeCacheMap.c)
 *     CcGetActiveWorkerCountInPartition @ 0x1403E7368 (CcGetActiveWorkerCountInPartition.c)
 *     CcDeletePartition @ 0x1405B4A24 (CcDeletePartition.c)
 *     CcInitializePartition @ 0x1405B506C (CcInitializePartition.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcForEachNumaNode(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD **v4; // rdi
  _QWORD *i; // rbx

  result = a2 + 16;
  v4 = (_QWORD **)(a3 + 48);
  if ( !a3 )
    v4 = (_QWORD **)(a2 + 16);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    result = guard_dispatch_icall_no_overrides(a2, a3);
    if ( !(_BYTE)result )
      break;
  }
  return result;
}
