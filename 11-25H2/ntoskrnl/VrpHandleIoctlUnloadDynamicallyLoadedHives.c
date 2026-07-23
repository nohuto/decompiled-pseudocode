/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14094BD98
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x14094A260 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x1403EA530 (PsGetPermanentSiloContext.c)
 *     PsIsThreadInSilo @ 0x14041A27C (PsIsThreadInSilo.c)
 *     PsGetJobSilo @ 0x14041A310 (PsGetJobSilo.c)
 *     ZwUnloadKey2 @ 0x14069ECA0 (ZwUnloadKey2.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpCleanupNamespace @ 0x140947388 (VrpCleanupNamespace.c)
 *     VrpDestroyNamespaceNode @ 0x14094749C (VrpDestroyNamespaceNode.c)
 *     VrpUnlockJobContextExclusive @ 0x14094AB0C (VrpUnlockJobContextExclusive.c)
 *     VrpLockJobContextExclusive @ 0x14094AC6C (VrpLockJobContextExclusive.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDynamicallyLoadedHives(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        PVOID Object,
        __int64 a6)
{
  int JobSilo; // ebx
  int PermanentSiloContext; // eax
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 i; // rbx
  __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rsi
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-30h] BYREF

  Object = 0LL;
  a6 = 0LL;
  if ( a2 < 8 )
    goto LABEL_2;
  JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
      {
LABEL_2:
        JobSilo = -1073741811;
        goto LABEL_3;
      }
      PermanentSiloContext = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, (unsigned __int64 *)&a6);
      if ( PermanentSiloContext < 0 )
      {
        JobSilo = 0;
        if ( PermanentSiloContext != -1073741275 )
          JobSilo = PermanentSiloContext;
      }
      else
      {
        v9 = a6;
        VrpLockJobContextExclusive(a6);
        if ( *(_DWORD *)(v9 + 84) )
        {
          JobSilo = -1073741738;
          VrpUnlockJobContextExclusive(v9);
        }
        else
        {
          v10 = *(_QWORD *)(v9 + 48);
          for ( i = 0LL; i < v10; v10 = *(_QWORD *)(v9 + 48) )
          {
            v12 = 0LL;
            if ( i < v10 )
            {
              v13 = *(_QWORD *)(v9 + 40) * i;
              if ( !is_mul_ok(*(_QWORD *)(v9 + 40), i)
                || (v14 = *(_QWORD *)(v9 + 72), v12 = (__int64 *)(v14 + v13), v14 + v13 < v14) )
              {
                v12 = 0LL;
              }
            }
            v15 = *v12;
            if ( *(int *)(*v12 + 56) < 0 )
            {
              memset(&TargetKey.Attributes + 1, 0, 20);
              TargetKey.RootDirectory = 0LL;
              *(_QWORD *)&TargetKey.Length = 48LL;
              TargetKey.ObjectName = (PUNICODE_STRING)(v15 + 24);
              TargetKey.Attributes = 576;
              ZwUnloadKey2(&TargetKey, 1u);
              VrpDestroyNamespaceNode((size_t *)v9, v15);
            }
            else
            {
              ++i;
            }
          }
          VrpCleanupNamespace(v9);
          VrpUnlockJobContextExclusive(v9);
          JobSilo = 0;
        }
      }
    }
  }
LABEL_3:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
