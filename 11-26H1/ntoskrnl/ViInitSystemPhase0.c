/*
 * XREFs of ViInitSystemPhase0 @ 0x140CE513C
 * Callers:
 *     VerifierInitSystem @ 0x140CE4C2C (VerifierInitSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14049D58C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     VfInitSystemNoRebootNeeded @ 0x140C265DC (VfInitSystemNoRebootNeeded.c)
 *     ViDisableVerification @ 0x140C27F0C (ViDisableVerification.c)
 *     VfSetVerifierRunningMode @ 0x140C3F0D4 (VfSetVerifierRunningMode.c)
 *     VfInitSetVerifyDriverTargets @ 0x140CE4F9C (VfInitSetVerifyDriverTargets.c)
 *     ViInitPickRandomTargets @ 0x140CE4FF0 (ViInitPickRandomTargets.c)
 *     VfTriageSystem @ 0x140CE5AC8 (VfTriageSystem.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  const char *v6; // rcx
  char *v7; // rax
  bool v8; // zf
  unsigned int v9; // eax
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER v11; // r8
  LARGE_INTEGER v12; // r9
  __int64 v13; // r12
  char *v14; // rdi
  unsigned __int64 v15; // rdx
  char *v16; // rbx
  unsigned __int64 v17; // rdx
  int v18; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  String2 = 0LL;
  v1 = *(_QWORD *)(a1 + 240);
  v3 = *(_QWORD *)(v1 + 280);
  v4 = *(_DWORD *)(v1 + 132) & 3;
  LOBYTE(VfExtendedParameters) = 1;
  dword_140E68260 = 32;
  KiInitializeMutant(&ViDriversLoadLock, 0LL, 1u, 0LL);
  qword_140F090A8 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_140F08DD8 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_140F08DC8 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = (VfRuleClasses & 0x400000) != 0 ? 2 : 4;
    dword_140F08AA4 = VfVerifyMode;
  }
  if ( MmVerifyDriverLevel == -1 )
  {
    if ( (_DWORD)VfRuleClasses )
    {
      ViDisableVerification(0);
      if ( (VfOptionFlags & 0x410) != 0 )
        VfClearanceFlag = 1;
      return;
    }
  }
  else
  {
    LODWORD(VfRuleClasses) = MmVerifyDriverLevel;
  }
  if ( v4 != 3 && v3 )
  {
    *(_QWORD *)&VfBugcheckTmpData = *(unsigned int *)(v3 + 56);
    BugCheckParameter1 = *(_QWORD *)(v3 + 64);
    qword_140FF0ED8 = *(_QWORD *)(v3 + 72);
    *(_OWORD *)&xmmword_140FF0EE0 = *(_OWORD *)(v3 + 80);
  }
  VfRuleClassesRecord = VfRuleClasses;
  if ( (VfOptionFlags & 0x410) == 0 || (v5 = 1, v4 == 3) )
    v5 = 0;
  v6 = *(const char **)(a1 + 216);
  VfClearanceFlag = v5;
  v7 = strstr(v6, "SAFEBOOT:");
  v8 = v7 == 0LL;
  if ( v7 )
  {
LABEL_71:
    ViDisableVerification(!v8);
    return;
  }
  if ( VfClearanceFlag )
  {
    v8 = 1;
    goto LABEL_71;
  }
  VfTriageSystem(a1);
  if ( MmVerifyDriverLevel != -1 )
  {
    if ( !VfRandomVerifiedDrivers && (_DWORD)MmVerifyDriverBufferLength == -1 && (MmVerifyDriverLevel & 4) == 0 )
      VfInitSetVerifyDriverTargets(L"*", 4u);
    if ( MmVerifyDriverLevel != -1 && (MmVerifyDriverLevel & 0x400004) != 0 )
      VfRandomVerifiedDrivers = 1;
  }
  if ( VfRandomVerifiedDrivers )
  {
    v9 = HIWORD(VfRandomVerifiedDrivers);
    ViExpectedDriversCount = v9;
    HIWORD(VfRandomVerifiedDrivers) = 0;
    if ( v9 >= 3 )
    {
      if ( v9 > 0x200 )
        ViExpectedDriversCount = 512;
    }
    else
    {
      ViExpectedDriversCount = 256;
    }
  }
  ViRandomSeed = KeQueryPerformanceCounter(0LL).LowPart;
  if ( ViVerifyAllDrivers == 1 )
    goto LABEL_30;
  if ( ViVerifyAllDrivers == 2 )
  {
    ViVerifyAllDrivers = 1;
    KernelVerifier = 1;
    ViForceAllDriversSuspect = 1;
LABEL_30:
    LODWORD(MmVerifyDriverBufferLength) = 0;
    goto LABEL_31;
  }
  if ( (_DWORD)MmVerifyDriverBufferLength == -1 )
  {
    if ( !(unsigned int)ViInitPickRandomTargets() )
      return;
    LODWORD(MmVerifyDriverBufferLength) = 0;
    if ( VfVerifyMode > 2 )
      VfSetVerifierRunningMode(2);
    goto LABEL_32;
  }
LABEL_31:
  VfRandomVerifiedDrivers = 0;
LABEL_32:
  if ( (VfOptionFlags & 1) != 0 && !VfRandomVerifiedDrivers )
  {
LABEL_66:
    ViVerifyAllDrivers = 1;
  }
  else if ( !ViVerifyAllDrivers && !VfRandomVerifiedDrivers )
  {
    v10.QuadPart = (LONGLONG)MmVerifyDriverBuffer;
    v13 = 0x100002401LL;
    v14 = (char *)MmVerifyDriverBuffer + 2 * (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1);
    while ( v10.QuadPart < (unsigned __int64)v14 )
    {
      v15 = *(unsigned __int16 *)v10.QuadPart;
      if ( (_DWORD)v15 == 9 || (unsigned __int16)v15 <= 0x20u && _bittest64(&v13, v15) || (_WORD)v15 == 12288 )
      {
        v10.QuadPart += 2LL;
      }
      else
      {
        if ( (_DWORD)v15 == 42 )
          goto LABEL_66;
        v16 = (char *)(v10.QuadPart + 2);
        if ( (_DWORD)v15 == 34 )
        {
          v10.QuadPart += 2LL;
          while ( 1 )
          {
            v16 += 2;
            if ( v16 >= v14 )
              goto LABEL_67;
            if ( *(_WORD *)v16 == 34 )
              goto LABEL_60;
          }
        }
        while ( v16 < v14 )
        {
          v17 = *(unsigned __int16 *)v16;
          if ( (_DWORD)v17 == 9 || (unsigned __int16)v17 <= 0x20u && _bittest64(&v13, v17) )
            break;
          if ( (_WORD)v17 == 12288 )
            break;
          v16 += 2;
        }
LABEL_60:
        v18 = 2 * ((__int64)&v16[-v10.QuadPart] >> 1);
        if ( v18 )
        {
          String2.Length = 2 * ((__int64)&v16[-v10.QuadPart] >> 1);
          String2.MaximumLength = v18 + 2;
          if ( (unsigned __int16)(v18 + 2) < (unsigned __int16)v18 )
            break;
          String2.Buffer = (wchar_t *)v10.QuadPart;
          if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
          {
            KernelVerifier = 1;
            break;
          }
        }
        v10.QuadPart = (LONGLONG)(v16 + 2);
      }
    }
  }
LABEL_67:
  if ( (VfOptionFlags & 0x2000) != 0 )
    KernelVerifier = 1;
  VfInitSystemNoRebootNeeded(v10.QuadPart, 1, v11.QuadPart, v12.QuadPart);
}
