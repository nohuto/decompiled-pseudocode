/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140977F10 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlUnicodeStringCopy @ 0x14043D5D0 (RtlUnicodeStringCopy.c)
 *     PsIsThreadInSilo @ 0x14043D79C (PsIsThreadInSilo.c)
 *     PsGetJobSilo @ 0x14043D7E0 (PsGetJobSilo.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PsRemoveSiloContext @ 0x1407EE760 (PsRemoveSiloContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     PsMakeSiloContextPermanent @ 0x140A304E0 (PsMakeSiloContextPermanent.c)
 *     VrpIncrementSiloCount @ 0x140A30890 (VrpIncrementSiloCount.c)
 *     VrpAllocateKeyContext @ 0x140A30984 (VrpAllocateKeyContext.c)
 *     CmInitSiloNamespace @ 0x140A309F8 (CmInitSiloNamespace.c)
 *     PsInsertSiloContext @ 0x140A31020 (PsInsertSiloContext.c)
 *     CmSetCallbackObjectContext @ 0x140A31530 (CmSetCallbackObjectContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x140A31970 (CmGetRootKeyObjectForSilo.c)
 *     VrpFreeKeyContext @ 0x140A7F588 (VrpFreeKeyContext.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlInitializeJobForVreg(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        PVOID a5,
        _QWORD *Object)
{
  PVOID v6; // r12
  _QWORD *v7; // rdi
  UNICODE_STRING *v8; // rsi
  void *RootKeyObjectForSilo; // r15
  int v10; // eax
  int JobSilo; // ebx
  void *v12; // rcx
  int v13; // eax
  __int64 KeyContext; // rax
  PVOID PoolWithTag; // rax
  PVOID v16; // rbx
  __int128 v17; // xmm0
  __int64 Pool2; // rax
  __int64 Tag; // [rsp+20h] [rbp-38h]
  int v22; // [rsp+A8h] [rbp+50h]

  a5 = 0LL;
  v6 = 0LL;
  Object = 0LL;
  v7 = 0LL;
  v22 = 0;
  v8 = 0LL;
  RootKeyObjectForSilo = 0LL;
  if ( a2 < 8 )
    goto LABEL_32;
  v10 = ObCreateObjectEx(0, *(_DWORD **)&WheapPfaLock.ThreadTimerDelay, 0LL, 1u, Tag, 96, 0, 0, &Object, 0LL);
  v7 = Object;
  JobSilo = v10;
  if ( v10 >= 0 )
  {
    memset_0(Object, 0, 0x60uLL);
    v7[2] = 0LL;
    v7[4] = 0LL;
    v7[8] = 16LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    v7[9] = 0LL;
    v7[5] = 8LL;
    if ( !is_mul_ok(0LL, 8uLL) )
    {
      JobSilo = -1073741675;
      goto LABEL_6;
    }
    if ( !is_mul_ok(0x20uLL, 8uLL) )
    {
      JobSilo = -1073741675;
LABEL_6:
      v12 = (void *)v7[9];
      if ( v12 )
        ExFreePoolWithTag(v12, 0x72615452u);
      *((_OWORD *)v7 + 2) = 0LL;
      *((_OWORD *)v7 + 3) = 0LL;
      *((_OWORD *)v7 + 4) = 0LL;
      goto LABEL_22;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x72615452u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
      memset_0(PoolWithTag, 0, 0x100uLL);
    if ( !v16 )
    {
      JobSilo = -1073741801;
      goto LABEL_6;
    }
    v7[9] = v16;
    v7[7] = 32LL;
    JobSilo = VrpIncrementSiloCount();
    if ( JobSilo >= 0 )
    {
      *((_DWORD *)v7 + 22) = 1;
      v13 = ObpReferenceObjectByHandleWithTag(*a1, 6LL, PsJobType, a3, 0x52566D43u, &a5, 0LL, 0LL);
      v6 = a5;
      JobSilo = v13;
      if ( v13 >= 0 )
      {
        JobSilo = PsGetJobSilo((__int64)a5);
        if ( JobSilo >= 0 )
        {
          if ( !PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
          {
            *(_OWORD *)v7 = MEMORY[0x5C0];
            KeyContext = VrpAllocateKeyContext(v7);
            v8 = (UNICODE_STRING *)KeyContext;
            if ( !KeyContext
              || (v17 = MEMORY[0x5C0],
                  *(_WORD *)(KeyContext + 32) = 1,
                  *(_OWORD *)KeyContext = v17,
                  Pool2 = ExAllocatePool2(0x100uLL),
                  (v8[1].Buffer = (wchar_t *)Pool2) == 0LL) )
            {
              JobSilo = -1073741670;
              goto LABEL_23;
            }
            v8[1].Length = 0;
            v8[1].MaximumLength = PspSiloMonitorLock.Spare35[0];
            RtlUnicodeStringCopy(v8 + 1, (PCUNICODE_STRING)PspSiloMonitorLock.Spare35);
            JobSilo = CmInitSiloNamespace(0LL);
            if ( JobSilo >= 0 )
            {
              JobSilo = PsInsertSiloContext(0LL, LODWORD(gLoadedDiffHivesLock.QuantumTarget), v7);
              if ( JobSilo >= 0 )
              {
                v22 = 1;
                RootKeyObjectForSilo = (void *)CmGetRootKeyObjectForSilo(0LL);
                JobSilo = CmSetCallbackObjectContext(
                            RootKeyObjectForSilo,
                            (PLARGE_INTEGER)&gLoadedDiffHivesLock.StackLimit,
                            v8,
                            0LL);
                if ( JobSilo >= 0 )
                {
                  v8 = 0LL;
                  PsMakeSiloContextPermanent(0LL);
                  JobSilo = 0;
                  goto LABEL_23;
                }
              }
            }
            goto LABEL_22;
          }
LABEL_32:
          JobSilo = -1073741811;
          goto LABEL_23;
        }
      }
    }
  }
LABEL_22:
  if ( JobSilo < 0 && v22 )
    PsRemoveSiloContext(0LL, LODWORD(gLoadedDiffHivesLock.QuantumTarget), 0LL);
LABEL_23:
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x67655256u);
  if ( RootKeyObjectForSilo )
    ObfDereferenceObject(RootKeyObjectForSilo);
  if ( v8 )
    VrpFreeKeyContext(v8);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x52566D43u);
  return (unsigned int)JobSilo;
}
