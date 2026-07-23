/*
 * XREFs of VrpHandleIoctlLoadDifferencingHive @ 0x14094ACCC
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x14094A260 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x1403EA530 (PsGetPermanentSiloContext.c)
 *     PsIsThreadInSilo @ 0x14041A27C (PsIsThreadInSilo.c)
 *     PsGetJobSilo @ 0x14041A310 (PsGetJobSilo.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     VrpUnloadDifferencingHive @ 0x140947228 (VrpUnloadDifferencingHive.c)
 *     VrpUnlockJobContextExclusive @ 0x14094AB0C (VrpUnlockJobContextExclusive.c)
 *     VrpLockJobContextExclusive @ 0x14094AC6C (VrpLockJobContextExclusive.c)
 *     VrpLoadDifferencingHive @ 0x14094AFAC (VrpLoadDifferencingHive.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall VrpHandleIoctlLoadDifferencingHive(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        PVOID Object,
        __int64 a6)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // ecx
  unsigned int v13; // r10d
  ULONG_PTR v14; // rcx
  int JobSilo; // ebx
  __int64 v16; // rdi
  __int64 Pool2; // rbx
  void *Src[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int128 v21; // [rsp+60h] [rbp-10h] BYREF

  Object = 0LL;
  a6 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
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
  v12 = v9 + 40;
  v13 = v12 + v10;
  if ( v12 > v12 + (unsigned int)v10
    || v13 > v13 + v11
    || a2 < v13 + v11
    || (*(_DWORD *)(a1 + 12) & 1) != 0 && !(_WORD)v11 )
  {
    return (unsigned int)-1073741811;
  }
  WORD1(Src[0]) = *(_WORD *)(a1 + 20);
  LOWORD(Src[0]) = v9;
  Src[1] = (void *)(a1 + 40);
  WORD1(v21) = v10;
  v14 = *(_QWORD *)a1;
  *((_QWORD *)&v21 + 1) = a1 + 40 + 2 * (v9 >> 1);
  LOWORD(v21) = v10;
  WORD1(v20) = v11;
  *((_QWORD *)&v20 + 1) = *((_QWORD *)&v21 + 1) + 2 * (v10 >> 1);
  LOWORD(v20) = v11;
  JobSilo = ObpReferenceObjectByHandleWithTag(v14, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
      {
        JobSilo = -1073741811;
      }
      else
      {
        JobSilo = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, (unsigned __int64 *)&a6);
        if ( JobSilo < 0 )
          goto LABEL_22;
        v16 = a6;
        VrpLockJobContextExclusive(a6);
        if ( *(_DWORD *)(v16 + 84) )
        {
          JobSilo = -1073741738;
        }
        else
        {
          JobSilo = VrpLoadDifferencingHive(
                      (unsigned int)Src,
                      (unsigned int)&v21,
                      (unsigned int)&v20,
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
              *(_QWORD *)Pool2 = *(_QWORD *)(v16 + 24);
              *(_QWORD *)(v16 + 24) = Pool2;
              VrpUnlockJobContextExclusive(v16);
              JobSilo = 0;
              goto LABEL_22;
            }
            JobSilo = -1073741670;
            VrpUnloadDifferencingHive((UNICODE_STRING *)Src);
          }
        }
        VrpUnlockJobContextExclusive(v16);
      }
    }
  }
LABEL_22:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
