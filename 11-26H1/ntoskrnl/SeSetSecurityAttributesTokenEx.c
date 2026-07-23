/*
 * XREFs of SeSetSecurityAttributesTokenEx @ 0x14063F470
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403AFC1C (SepInternalSetSecurityAttributesToken.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1403B2198 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepSetSingletonEntry @ 0x14063F600 (SepSetSingletonEntry.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SeSetSecurityAttributesTokenEx(
        void *a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        char a4,
        int *a5,
        __int64 a6,
        _BYTE *a7)
{
  int v7; // ebx
  NTSTATUS v8; // eax
  PERESOURCE *v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int ProcUniqueLuidAndIndexFromToken; // eax
  __int64 v12; // r8
  int *v13; // rdx
  __int64 v14; // r9
  signed __int32 v16[8]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  v19 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  if ( !a4 || (RtlpBootStatHandleLock.UserTime & 3) != 3 )
  {
    v14 = (__int64)a5;
    *a7 = 0;
    return (unsigned int)SepInternalSetSecurityAttributesToken(a1, a2, 1, v14, a6);
  }
  if ( a2 )
    return (unsigned int)-1073741790;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
  v9 = (PERESOURCE *)Object;
  v7 = v8;
  if ( v8 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v9[6], 1u);
    _InterlockedOr(v16, 0);
    ProcUniqueLuidAndIndexFromToken = SepGetProcUniqueLuidAndIndexFromTokenEx(1, (__int64)v9, &v19, &v18);
    v12 = a6;
    v13 = a5;
    if ( ProcUniqueLuidAndIndexFromToken >= 0 )
    {
      v7 = SepSetSingletonEntry(v19, a5, a6);
      if ( v7 >= 0 )
      {
        *a7 = 1;
LABEL_13:
        v9[7] = (PERESOURCE)(_InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement) + ExpLuidIncrement);
      }
    }
    else
    {
      *a7 = 0;
      v7 = AuthzBasepSetSecurityAttributesToken(v9[97], v13, v12);
      if ( v7 >= 0 )
        goto LABEL_13;
    }
    _InterlockedOr(v16, 0);
    ExReleaseResourceLite(v9[6]);
    KeLeaveCriticalRegion();
  }
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  return (unsigned int)v7;
}
