/*
 * XREFs of VrpHandleIoctlLoadDifferencingHive @ 0x14093AE58
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140939F20 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140404430 (PsGetPermanentSiloContext.c)
 *     PsIsThreadInSilo @ 0x14043004C (PsIsThreadInSilo.c)
 *     PsGetJobSilo @ 0x140430090 (PsGetJobSilo.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpUnlockJobContextExclusive @ 0x14093A7B4 (VrpUnlockJobContextExclusive.c)
 *     VrpLockJobContextExclusive @ 0x14093AD04 (VrpLockJobContextExclusive.c)
 *     VrpUnloadDifferencingHive @ 0x14093B458 (VrpUnloadDifferencingHive.c)
 *     VrpLoadDifferencingHive @ 0x14093B56C (VrpLoadDifferencingHive.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlLoadDifferencingHive(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // r10d
  ULONG_PTR v13; // rcx
  int JobSilo; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  __int64 v18; // rsi
  __int64 Pool2; // rdi
  void *Src[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v22; // [rsp+50h] [rbp-20h] BYREF
  __int128 v23; // [rsp+60h] [rbp-10h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+38h] BYREF

  Object = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, a3) || !SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
    return (unsigned int)-1073741727;
  if ( a2 < 0x30 )
    return (unsigned int)-1073741811;
  v9 = *(unsigned __int16 *)(a1 + 20);
  if ( (v9 & 1) != 0 )
    return (unsigned int)-1073741811;
  v10 = *(unsigned __int16 *)(a1 + 22);
  if ( (v10 & 1) != 0 )
    return (unsigned int)-1073741811;
  v11 = *(unsigned __int16 *)(a1 + 24);
  if ( (v11 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v9 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v10 )
    return (unsigned int)-1073741811;
  v12 = v9 + 40 + v10;
  if ( (int)v9 + 40 > v12 || v12 > v12 + v11 || a2 < v12 + v11 || (*(_DWORD *)(a1 + 12) & 1) != 0 && !(_WORD)v11 )
    return (unsigned int)-1073741811;
  WORD1(Src[0]) = *(_WORD *)(a1 + 20);
  LOWORD(Src[0]) = v9;
  Src[1] = (void *)(a1 + 40);
  WORD1(v23) = v10;
  v13 = *(_QWORD *)a1;
  *((_QWORD *)&v23 + 1) = a1 + 40 + 2 * (v9 >> 1);
  LOWORD(v23) = v10;
  WORD1(v22) = v11;
  *((_QWORD *)&v22 + 1) = *((_QWORD *)&v23 + 1) + 2 * (v10 >> 1);
  LOWORD(v22) = v11;
  JobSilo = ObpReferenceObjectByHandleWithTag(v13, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
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
        JobSilo = PsGetPermanentSiloContext(a5, gLoadedDiffHivesLock.QuantumTarget, (unsigned __int64 *)&a6);
        if ( JobSilo < 0 )
          goto LABEL_21;
        v18 = a6;
        VrpLockJobContextExclusive(a6, v15, v16, v17);
        if ( *(_DWORD *)(v18 + 84) )
        {
          JobSilo = -1073741738;
        }
        else
        {
          JobSilo = VrpLoadDifferencingHive(
                      (unsigned int)Src,
                      (unsigned int)&v23,
                      (unsigned int)&v22,
                      *(_DWORD *)(a1 + 16),
                      *(_DWORD *)(a1 + 12) & 1,
                      (*(_DWORD *)(a1 + 12) >> 1) & 1,
                      (*(_DWORD *)(a1 + 12) >> 2) & 1,
                      *(_QWORD *)(a1 + 32));
          if ( JobSilo >= 0 )
          {
            Pool2 = ExAllocatePool2(0x100uLL);
            if ( Pool2 )
            {
              *(_WORD *)(Pool2 + 8) = Src[0];
              memmove((void *)(Pool2 + 10), Src[1], LOWORD(Src[0]));
              *(_QWORD *)Pool2 = *(_QWORD *)(v18 + 24);
              *(_QWORD *)(v18 + 24) = Pool2;
              VrpUnlockJobContextExclusive(v18);
              JobSilo = 0;
              goto LABEL_21;
            }
            JobSilo = -1073741670;
            VrpUnloadDifferencingHive(Src);
          }
        }
        VrpUnlockJobContextExclusive(v18);
      }
    }
  }
LABEL_21:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
