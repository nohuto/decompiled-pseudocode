/*
 * XREFs of IopIoRingCleanupRegBufferArray @ 0x14079A9B0
 * Callers:
 *     IopDeleteIoRing @ 0x14079A940 (IopDeleteIoRing.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x14079ACD4 (IopIoRingDispatchRegisterBuffers.c)
 * Callees:
 *     IopMcWaitAndCleanupBufferEntry @ 0x1405D9FD4 (IopMcWaitAndCleanupBufferEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopIoRingCleanupRegBufferArray(unsigned int a1, ULONG_PTR *a2)
{
  ULONG_PTR *v3; // rbx
  __int64 v4; // rdi

  if ( a1 )
  {
    v3 = a2;
    v4 = a1;
    do
    {
      if ( *v3 )
        IopMcWaitAndCleanupBufferEntry(*v3);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(a2, 0x42527249u);
}
