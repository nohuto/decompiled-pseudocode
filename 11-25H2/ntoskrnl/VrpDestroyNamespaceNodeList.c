/*
 * XREFs of VrpDestroyNamespaceNodeList @ 0x1409473FC
 * Callers:
 *     VrpCleanupNamespace @ 0x140947388 (VrpCleanupNamespace.c)
 * Callees:
 *     VrpDestroyNamespaceNode @ 0x14094749C (VrpDestroyNamespaceNode.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDestroyNamespaceNodeList(__int64 a1)
{
  __int64 i; // rax
  void *v3; // rcx

  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(a1 + 48) )
  {
    is_mul_ok(*(_QWORD *)(a1 + 40), 0LL);
    VrpDestroyNamespaceNode(a1);
  }
  v3 = *(void **)(a1 + 72);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72615452u);
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
}
