/*
 * XREFs of AMLIGetFirstChildNoLock @ 0x14003DC58
 * Callers:
 *     AMLIGetFirstChild @ 0x14003DC0C (AMLIGetFirstChild.c)
 *     AcpiAddTriageNSTree @ 0x14005F980 (AcpiAddTriageNSTree.c)
 * Callees:
 *     CreateObjectHandle @ 0x14001F000 (CreateObjectHandle.c)
 */

__int64 __fastcall AMLIGetFirstChildNoLock(_QWORD *a1)
{
  __int64 *v1; // rax

  v1 = (__int64 *)(*a1 + 24LL);
  if ( (__int64 *)*v1 == v1 )
    return 0LL;
  else
    return CreateObjectHandle(*v1);
}
