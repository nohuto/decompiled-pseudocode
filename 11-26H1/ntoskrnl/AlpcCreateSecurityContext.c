/*
 * XREFs of AlpcCreateSecurityContext @ 0x140AFA190
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcCreateSecurityContext(void *a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int SecurityContext; // ebx
  PVOID v8; // rdi
  char *v9; // r9
  ULONG_PTR v10; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  BugCheckParameter2 = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( a3 )
  {
    SecurityContext = -1073741811;
  }
  else
  {
    Object = 0LL;
    SecurityContext = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, 0, &Object, 0LL);
    if ( SecurityContext >= 0 )
    {
      v8 = Object;
      if ( !a4 || (v9 = *(char **)(a4 + 8)) == 0LL )
        v9 = (char *)Object + 260;
      SecurityContext = AlpcpCreateSecurityContext((__int64)Object, a2, 1, (__int64)v9, (__int64 **)&BugCheckParameter2);
      if ( SecurityContext >= 0 )
      {
        v10 = BugCheckParameter2;
        *(_QWORD *)(a4 + 16) = *(_QWORD *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(v10, 1);
      }
      ObfDereferenceObject(v8);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SecurityContext;
}
