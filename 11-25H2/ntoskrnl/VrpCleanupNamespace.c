/*
 * XREFs of VrpCleanupNamespace @ 0x140947388
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14094BD98 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpJobContextDelete @ 0x140A9A800 (VrpJobContextDelete.c)
 * Callees:
 *     VrpUnloadDifferencingHive @ 0x140947228 (VrpUnloadDifferencingHive.c)
 *     VrpDestroyNamespaceNodeList @ 0x1409473FC (VrpDestroyNamespaceNodeList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall VrpCleanupNamespace(__int64 a1)
{
  _WORD *v2; // rbx
  UNICODE_STRING v3; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 84) = 1;
  VrpDestroyNamespaceNodeList();
  while ( 1 )
  {
    v2 = *(_WORD **)(a1 + 24);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)v2;
    *(_QWORD *)&v3.Length = 0LL;
    v3.Buffer = v2 + 5;
    v3.MaximumLength = v2[4];
    v3.Length = v3.MaximumLength;
    VrpUnloadDifferencingHive(&v3);
    ExFreePoolWithTag(v2, 0x67655256u);
  }
}
