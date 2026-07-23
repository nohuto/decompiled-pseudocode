/*
 * XREFs of VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14093B160
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
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlCreateMultipleNamespaceNodes(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        size_t *a5,
        void *a6)
{
  ULONG_PTR *v6; // r12
  _QWORD *v7; // rbx
  void *v8; // r13
  size_t *v9; // r14
  unsigned __int64 v10; // rsi
  int v11; // r15d
  int JobSilo; // edi
  int PermanentSiloContext; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  char *v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // edi
  _QWORD *Pool2; // r12
  void *v25; // r8
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  _QWORD *v28; // rsi
  _QWORD *v29; // rsi
  __int64 v31; // [rsp+40h] [rbp-30h] BYREF
  __int128 v32; // [rsp+48h] [rbp-28h] BYREF
  __int128 v33; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v36; // [rsp+C8h] [rbp+58h]

  v6 = a1;
  v7 = 0LL;
  a6 = 0LL;
  v8 = 0LL;
  a5 = 0LL;
  v9 = 0LL;
  v10 = 12LL;
  v11 = 0;
  if ( a2 < 0xC )
    goto LABEL_2;
  ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &a6, 0LL, 0LL);
  v8 = a6;
  JobSilo = PsGetJobSilo((__int64)a6);
  if ( JobSilo < 0 )
    goto LABEL_23;
  if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
  {
LABEL_2:
    JobSilo = -1073741811;
  }
  else
  {
    a6 = 0LL;
    VRegEnabledInJob((unsigned __int64 *)&a6);
    PermanentSiloContext = PsGetPermanentSiloContext(0LL, gLoadedDiffHivesLock.QuantumTarget, (unsigned __int64 *)&a5);
    v9 = a5;
    JobSilo = PermanentSiloContext;
    if ( PermanentSiloContext < 0 )
      goto LABEL_23;
    VrpLockJobContextExclusive((__int64)a5, v14, v15, v16);
    JobSilo = 0;
    v17 = 0;
    v11 = 1;
    while ( 1 )
    {
      v36 = v17;
      if ( v17 >= *((_DWORD *)v6 + 2) )
      {
        v28 = v7;
        while ( v28 )
        {
          JobSilo = VrpAddNamespaceNodeToList((__int64)v9, v28[1]);
          if ( JobSilo < 0 )
            goto LABEL_23;
          v28 = (_QWORD *)*v28;
          JobSilo = 0;
        }
        v29 = v7;
        while ( v29 )
        {
          JobSilo = VrpCreateNamespaceNodePlaceholderKey(v29[1]);
          if ( JobSilo < 0 )
            break;
          v29 = (_QWORD *)*v29;
          JobSilo = 0;
        }
        goto LABEL_23;
      }
      v18 = v10 + 12;
      v31 = 0LL;
      v19 = (char *)v6 + v10;
      v33 = 0LL;
      v32 = 0LL;
      if ( v10 >= v10 + 12 )
        goto LABEL_28;
      if ( a2 < v18 )
        goto LABEL_28;
      v20 = *((unsigned __int16 *)v19 + 2);
      if ( (v20 & 1) != 0 )
        goto LABEL_28;
      if ( !(_WORD)v20 )
        goto LABEL_28;
      v21 = v20 + v18;
      if ( v18 > v20 + v18 )
        goto LABEL_28;
      v22 = *((unsigned __int16 *)v19 + 3);
      if ( (v22 & 1) != 0 )
        goto LABEL_28;
      if ( !(_WORD)v22 )
        goto LABEL_28;
      v10 = v21 + v22;
      if ( v21 > v21 + v22 )
        goto LABEL_28;
      if ( a2 < v10 )
        goto LABEL_28;
      v23 = *((_DWORD *)v19 + 2);
      *((_QWORD *)&v33 + 1) = v19 + 12;
      WORD1(v33) = v20;
      LOWORD(v33) = v20;
      WORD1(v32) = v22;
      LOWORD(v32) = v22;
      *((_QWORD *)&v32 + 1) = &v19[2 * ((unsigned __int64)(unsigned int)v20 >> 1) + 12];
      LODWORD(a5) = *(_DWORD *)v19;
      if ( (v23 & 7) != v23 )
      {
LABEL_28:
        JobSilo = -1073741811;
        goto LABEL_23;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        JobSilo = -1073741670;
        goto LABEL_23;
      }
      v25 = a6;
      Pool2[1] = 0LL;
      *Pool2 = v7;
      v7 = Pool2;
      JobSilo = VrpCreateNamespaceNode((__int64)v9, (const void **)&v33, v25, (const void **)&v32, v23, (int)a5, &v31);
      if ( JobSilo < 0 )
        break;
      Pool2[1] = v31;
      v6 = a1;
      v17 = v36 + 1;
      JobSilo = 0;
    }
    v26 = Pool2;
    do
    {
      v7 = (_QWORD *)*v7;
      if ( JobSilo < 0 )
      {
        v27 = v26[1];
        if ( v27 )
          VrpDestroyNamespaceNode(v9, v27);
      }
      ExFreePoolWithTag(v26, 0x67655256u);
LABEL_23:
      v26 = v7;
    }
    while ( v7 );
    if ( v11 )
      VrpUnlockJobContextExclusive((__int64)v9);
  }
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x52566D43u);
  return (unsigned int)JobSilo;
}
