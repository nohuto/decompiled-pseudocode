/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140B01274
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140939F20 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140404430 (PsGetPermanentSiloContext.c)
 *     PsIsThreadInSilo @ 0x14043004C (PsIsThreadInSilo.c)
 *     PsGetJobSilo @ 0x140430090 (PsGetJobSilo.c)
 *     ZwUnloadKey2 @ 0x14072BB40 (ZwUnloadKey2.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpDestroyNamespaceNode @ 0x140939B04 (VrpDestroyNamespaceNode.c)
 *     VrpUnlockJobContextExclusive @ 0x14093A7B4 (VrpUnlockJobContextExclusive.c)
 *     VrpLockJobContextExclusive @ 0x14093AD04 (VrpLockJobContextExclusive.c)
 *     VrpCleanupNamespace @ 0x14093BFD0 (VrpCleanupNamespace.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDynamicallyLoadedHives(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int JobSilo; // ebx
  int PermanentSiloContext; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 i; // rbx
  __int64 *v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // r14
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  Object = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  if ( a2 < 8 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), a5) )
        {
          JobSilo = -1073741811;
        }
        else
        {
          PermanentSiloContext = PsGetPermanentSiloContext(
                                   a5,
                                   gLoadedDiffHivesLock.QuantumTarget,
                                   (unsigned __int64 *)&a6);
          if ( PermanentSiloContext < 0 )
          {
            JobSilo = 0;
            if ( PermanentSiloContext != -1073741275 )
              JobSilo = PermanentSiloContext;
          }
          else
          {
            v11 = a6;
            VrpLockJobContextExclusive(a6, v8, v9, v10);
            if ( *(_DWORD *)(v11 + 84) )
            {
              JobSilo = -1073741738;
              VrpUnlockJobContextExclusive(v11);
            }
            else
            {
              v12 = *(_QWORD *)(v11 + 48);
              for ( i = 0LL; i < v12; v12 = *(_QWORD *)(v11 + 48) )
              {
                v14 = 0LL;
                if ( i < v12 )
                {
                  v15 = *(_QWORD *)(v11 + 40) * i;
                  if ( !is_mul_ok(*(_QWORD *)(v11 + 40), i)
                    || (v16 = *(_QWORD *)(v11 + 72), v14 = (__int64 *)(v16 + v15), v16 + v15 < v16) )
                  {
                    v14 = 0LL;
                  }
                }
                v17 = *v14;
                if ( *(int *)(*v14 + 56) < 0 )
                {
                  *(_QWORD *)&TargetKey.Length = 48LL;
                  TargetKey.RootDirectory = 0LL;
                  *(_QWORD *)&TargetKey.Attributes = 576LL;
                  TargetKey.ObjectName = (PUNICODE_STRING)(v17 + 24);
                  *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
                  ZwUnloadKey2(&TargetKey, 1u);
                  VrpDestroyNamespaceNode((size_t *)v11, v17);
                }
                else
                {
                  ++i;
                }
              }
              VrpCleanupNamespace(v11);
              VrpUnlockJobContextExclusive(v11);
              JobSilo = 0;
            }
          }
        }
      }
    }
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  }
  return (unsigned int)JobSilo;
}
