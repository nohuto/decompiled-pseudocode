/*
 * XREFs of SeSetSecurityAttributesTokenEx @ 0x14063B970
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403CB048 (SepInternalSetSecurityAttributesToken.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403CB2B8 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1404BADAC (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepSetSingletonEntry @ 0x14063BB00 (SepSetSingletonEntry.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
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
  PVOID v9; // rdi
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
  if ( !a4 || (RtlpBootStatHandleLock.SchedulerApcFill3[60] & 3) != 3 )
  {
    v14 = (__int64)a5;
    *a7 = 0;
    return (unsigned int)SepInternalSetSecurityAttributesToken(a1, a2, 1, v14, a6);
  }
  if ( a2 )
    return (unsigned int)-1073741790;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
  v9 = Object;
  v7 = v8;
  if ( v8 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v9 + 6), 1u);
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
        *((_QWORD *)v9 + 7) = _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement) + ExpLuidIncrement;
      }
    }
    else
    {
      *a7 = 0;
      v7 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)v9 + 97), v13, v12);
      if ( v7 >= 0 )
        goto LABEL_13;
    }
    _InterlockedOr(v16, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v9 + 6));
    KeLeaveCriticalRegion();
  }
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  return (unsigned int)v7;
}
