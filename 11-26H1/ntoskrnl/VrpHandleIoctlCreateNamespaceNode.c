/*
 * XREFs of VrpHandleIoctlCreateNamespaceNode @ 0x14093A55C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140939F20 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140404430 (PsGetPermanentSiloContext.c)
 *     PsIsThreadInSilo @ 0x14043004C (PsIsThreadInSilo.c)
 *     PsGetJobSilo @ 0x140430090 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpDestroyNamespaceNode @ 0x140939B04 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x140939D04 (VrpAddNamespaceNodeToList.c)
 *     VRegEnabledInJob @ 0x14093A35C (VRegEnabledInJob.c)
 *     VrpUnlockJobContextExclusive @ 0x14093A7B4 (VrpUnlockJobContextExclusive.c)
 *     VrpCreateNamespaceNode @ 0x14093A7F0 (VrpCreateNamespaceNode.c)
 *     VrpLockJobContextExclusive @ 0x14093AD04 (VrpLockJobContextExclusive.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14093ADA8 (VrpCreateNamespaceNodePlaceholderKey.c)
 */

__int64 __fastcall VrpHandleIoctlCreateNamespaceNode(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  PVOID v8; // rdi
  size_t *v9; // r14
  int v10; // r12d
  __int64 v11; // rsi
  int v12; // eax
  int v13; // edx
  unsigned int v14; // edx
  int v15; // eax
  int JobSilo; // ebx
  int v17; // esi
  unsigned __int64 v18; // rax
  int v19; // r15d
  int v20; // eax
  size_t *v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+48h] [rbp-28h] BYREF
  __int128 v24; // [rsp+58h] [rbp-18h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF

  Object = 0LL;
  v22 = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  v12 = *(unsigned __int16 *)(a1 + 8);
  if ( (v12 & 1) != 0 || (v13 = *(unsigned __int16 *)(a1 + 10), (v13 & 1) != 0) )
  {
    JobSilo = -1073741811;
    goto LABEL_17;
  }
  if ( !(_WORD)v12 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v13 )
    return (unsigned int)-1073741811;
  v14 = v12 + 20 + v13;
  if ( v12 + 20 > v14 || a2 < v14 )
    return (unsigned int)-1073741811;
  v15 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  v8 = Object;
  JobSilo = v15;
  if ( v15 < 0 )
    goto LABEL_21;
  v17 = *(_DWORD *)(a1 + 12);
  *((_QWORD *)&v24 + 1) = a1 + 20;
  v18 = *(unsigned __int16 *)(a1 + 8);
  WORD1(v24) = v18;
  LOWORD(v24) = v18;
  *((_QWORD *)&v23 + 1) = a1 + 2 * ((v18 >> 1) + 10);
  LOWORD(v18) = *(_WORD *)(a1 + 10);
  v19 = *(_DWORD *)(a1 + 16);
  WORD1(v23) = v18;
  LOWORD(v23) = v18;
  if ( (v17 & 7) == v17 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo < 0 )
      goto LABEL_21;
    if ( !PsIsThreadInSilo((__int64)KeGetCurrentThread(), a5) )
    {
      Object = 0LL;
      VRegEnabledInJob((unsigned __int64 *)&Object);
      JobSilo = PsGetPermanentSiloContext(a5, gLoadedDiffHivesLock.QuantumTarget, (unsigned __int64 *)&v22);
      if ( JobSilo < 0 )
        goto LABEL_21;
      v9 = v22;
      VrpLockJobContextExclusive(v22);
      v10 = 1;
      v20 = VrpCreateNamespaceNode(v9, &v24, Object, &v23, v17, v19, &a6);
      v11 = a6;
      JobSilo = v20;
      if ( v20 >= 0 )
      {
        JobSilo = VrpAddNamespaceNodeToList((__int64)v9, a6);
        if ( JobSilo >= 0 )
        {
          JobSilo = VrpCreateNamespaceNodePlaceholderKey(v11);
          if ( JobSilo >= 0 )
          {
            JobSilo = 0;
LABEL_20:
            VrpUnlockJobContextExclusive(v9);
            goto LABEL_21;
          }
        }
      }
LABEL_17:
      if ( v11 )
        VrpDestroyNamespaceNode(v9, v11);
      if ( !v10 )
        goto LABEL_21;
      goto LABEL_20;
    }
  }
  JobSilo = -1073741811;
LABEL_21:
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x52566D43u);
  return (unsigned int)JobSilo;
}
