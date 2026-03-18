/*
 * XREFs of NtCreateWnfStateName @ 0x14094F1A0
 * Callers:
 *     DifNtCreateWnfStateNameWrapper @ 0x140675310 (DifNtCreateWnfStateNameWrapper.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     SeCaptureSecurityDescriptor @ 0x1409263C0 (SeCaptureSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ExpWnfResolveScopeInstance @ 0x14094B390 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14094E320 (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfGenerateStateName @ 0x14094F730 (ExpWnfGenerateStateName.c)
 *     ExpExposeWnfStateName @ 0x14094FB04 (ExpExposeWnfStateName.c)
 *     ExpWnfCreateNameInstance @ 0x14094FCA8 (ExpWnfCreateNameInstance.c)
 *     ExpWnfRegisterPermanentName @ 0x14095027C (ExpWnfRegisterPermanentName.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateWnfStateName(
        volatile void *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        void *Src,
        unsigned int a6,
        void *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  PVOID v12; // rsi
  PVOID v13; // rbx
  int NameInstance; // edi
  __int64 v15; // r9
  BOOL v16; // eax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rbx
  _KPROCESS *Process; // r15
  PVOID P; // [rsp+38h] [rbp-C0h] BYREF
  void *v24; // [rsp+40h] [rbp-B8h]
  int v25[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A0h] BYREF
  __int128 *v27; // [rsp+60h] [rbp-98h]
  _QWORD v28[2]; // [rsp+68h] [rbp-90h] BYREF
  _DWORD v29[2]; // [rsp+78h] [rbp-80h] BYREF
  __int128 *v30; // [rsp+80h] [rbp-78h]
  PVOID v31; // [rsp+88h] [rbp-70h]
  volatile void *v32; // [rsp+90h] [rbp-68h]
  __int128 *v33; // [rsp+98h] [rbp-60h]
  __int128 v34; // [rsp+A0h] [rbp-58h] BYREF

  v32 = a1;
  v24 = a7;
  v28[1] = a7;
  v34 = 0LL;
  v26 = 0LL;
  v28[0] = 0LL;
  v29[1] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v25 = 0LL;
  v12 = 0LL;
  P = 0LL;
  v27 = 0LL;
  if ( PreviousMode )
    ProbeForWrite(a1, 8uLL, 1u);
  if ( Src )
  {
    if ( PreviousMode )
      RtlCopyFromUser(&v34, Src, 0x10uLL);
    else
      RtlCopyVolatileMemory(&v34, Src, 0x10uLL);
    v27 = &v34;
    v33 = &v34;
  }
  v13 = v24;
  if ( v24 )
  {
    NameInstance = SeCaptureSecurityDescriptor((unsigned __int16 *)v24, PreviousMode, 1, 1, (unsigned __int16 **)&P);
    if ( NameInstance >= 0 )
    {
      v12 = P;
      ExpWnfSpecializeSecurityDescriptor(P);
      v16 = a2 < 2 || a2 - 2 <= 1;
      if ( !v16
        || !a2
        || (a3 >= 4 && a3 - 4 > 1 ? (v17 = 0) : (v17 = 1),
            !v17 || a4 && ((a3 & 0xFFFFFFFB) != 0 || a2 != 1) || a6 > 0x1000 || a3 == 3 && a2 == 3 || a3 == 5) )
      {
        NameInstance = -1073741811;
      }
      else if ( a2 == 3 || SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.SchedulingGroup, PreviousMode) )
      {
        LOBYTE(v15) = a4;
        NameInstance = ExpWnfGenerateStateName(&v26, a2, a3, v15);
        if ( NameInstance >= 0 )
        {
          LOBYTE(v18) = PreviousMode;
          v19 = v26;
          ExpExposeWnfStateName(v26, v32, v18);
          v29[0] = a6;
          v30 = v27;
          v31 = v12;
          if ( a2 == 3 )
          {
            if ( PreviousMode )
              Process = KeGetCurrentThread()->ApcState.Process;
            else
              Process = PsInitialSystemProcess;
            NameInstance = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v25, (__int64)Process, 0LL, a3, 0LL);
            if ( NameInstance >= 0 )
            {
              NameInstance = ExpWnfCreateNameInstance(v25[0], v19, (unsigned int)v29, (_DWORD)Process, (__int64)v28);
              if ( NameInstance >= 0 )
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v28[0] + 8LL));
            }
          }
          else
          {
            NameInstance = ExpWnfRegisterPermanentName(v19, v29);
          }
          v13 = v24;
        }
      }
      else
      {
        NameInstance = -1073741727;
      }
    }
    else
    {
      v12 = P;
    }
  }
  else
  {
    NameInstance = -1073741819;
  }
  if ( *(_QWORD *)v25 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v25 + 8LL));
  if ( v12 && v12 != v13 && (unsigned __int8)PreviousMode <= 1u )
    ExFreePoolWithTag(v12, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)NameInstance;
}
