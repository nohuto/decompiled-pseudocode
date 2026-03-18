/*
 * XREFs of IopMcDereferenceBufferEntry @ 0x140411A80
 * Callers:
 *     IopMcReleaseMdl @ 0x1404114C8 (IopMcReleaseMdl.c)
 *     IoTryReleasePages @ 0x140411820 (IoTryReleasePages.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x1405D77E4 (IopMcWaitAndCleanupBufferEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
