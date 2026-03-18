/*
 * XREFs of AMLIGetParentNoLock @ 0x14001E8F4
 * Callers:
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AcpiAddTriageNSTree @ 0x14005F980 (AcpiAddTriageNSTree.c)
 * Callees:
 *     CreateObjectHandle @ 0x14001F000 (CreateObjectHandle.c)
 */

__int64 __fastcall AMLIGetParentNoLock(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  result = 0LL;
  if ( v1 )
    return CreateObjectHandle(v1);
  return result;
}
