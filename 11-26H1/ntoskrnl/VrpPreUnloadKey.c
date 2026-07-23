/*
 * XREFs of VrpPreUnloadKey @ 0x140B29C84
 * Callers:
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 * Callees:
 *     VrpFindExactNamespaceNode @ 0x14093979C (VrpFindExactNamespaceNode.c)
 *     VrpUnlockJobContextExclusive @ 0x14093A7B4 (VrpUnlockJobContextExclusive.c)
 *     VrpLockJobContextExclusive @ 0x14093AD04 (VrpLockJobContextExclusive.c)
 */

__int64 __fastcall VrpPreUnloadKey(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  __int64 ExactNamespaceNode; // rax
  unsigned int v8; // ebx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  VrpLockJobContextExclusive(a2, a2, a3, a4);
  ExactNamespaceNode = VrpFindExactNamespaceNode(a2, (int)v4 + 16, (int)&v10);
  v8 = 0;
  if ( ExactNamespaceNode )
  {
    if ( *(int *)(ExactNamespaceNode + 56) >= 0 )
    {
      v8 = -1073741790;
      VrpUnlockJobContextExclusive(a2);
    }
    else
    {
      *(_QWORD *)(a1 + 16) = ExactNamespaceNode;
    }
    return v8;
  }
  else
  {
    VrpUnlockJobContextExclusive(a2);
    return 0LL;
  }
}
