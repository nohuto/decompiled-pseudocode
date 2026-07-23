/*
 * XREFs of IopMcDereferenceBufferEntry @ 0x1404111A0
 * Callers:
 *     IopMcReleaseMdl @ 0x140410BE8 (IopMcReleaseMdl.c)
 *     IoTryReleasePages @ 0x140410F40 (IoTryReleasePages.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x1405D9FD4 (IopMcWaitAndCleanupBufferEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopMcDereferenceBufferEntry(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v1; // ebx
  bool v2; // zf
  bool v3; // sf
  bool v4; // of
  int v5; // ebx

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 8), 0xFFFFFFFF);
  v4 = __OFSUB__(v1, 1);
  v2 = v1 == 1;
  v3 = v1 - 1 < 0;
  v5 = v1 - 1;
  if ( v3 ^ v4 | v2 )
  {
    if ( v5 < 0 )
      KeBugCheckEx(0x1F4u, 1uLL, BugCheckParameter2, v5, *(_QWORD *)BugCheckParameter2);
    ExFreePoolWithTag((PVOID)BugCheckParameter2, 0x6542634Du);
  }
  return (unsigned int)v5;
}
