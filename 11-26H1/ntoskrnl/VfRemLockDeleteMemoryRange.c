/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x140C4B3D8
 * Callers:
 *     VfFreeMemoryNotification @ 0x140C4B358 (VfFreeMemoryNotification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfPoolIsInternalFree @ 0x1404C9664 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140C36DA8 (ViRemLockDeleteFirstTreeNode.c)
 */

__int64 __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  result = (unsigned int)ViRemLockInitialized;
  v6 = 0LL;
  if ( ViRemLockInitialized )
  {
    result = qword_140FF1178;
    if ( qword_140FF1178 )
    {
      result = VfPoolIsInternalFree();
      if ( !(_DWORD)result )
      {
        VfAvlInitializeLockContext((__int64)&v6, 1);
        v5 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v6, a1, a2);
        result = VfAvlCleanupLockContext((__int64)&v6);
        if ( v5 )
        {
          do
            result = ViRemLockDeleteFirstTreeNode();
          while ( (_DWORD)result );
        }
      }
    }
  }
  return result;
}
