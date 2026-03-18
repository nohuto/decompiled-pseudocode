/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1409481F0
 * Callers:
 *     DifNtQueryWnfStateNameInformationWrapper @ 0x140686D60 (DifNtQueryWnfStateNameInformationWrapper.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140948608 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x140948B9C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409490DC (ExpWnfCheckCrossScopeAccess.c)
 *     ExpCaptureWnfStateName @ 0x140949F88 (ExpCaptureWnfStateName.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14094A070 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfResolveScopeInstance @ 0x14094B390 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x14094B9A0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfLookupPermanentName @ 0x14094D528 (ExpWnfLookupPermanentName.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryWnfStateNameInformation(void *a1, int a2, __int64 a3, int *a4, unsigned int Length)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  int v10; // edi
  __int64 v11; // r8
  int v12; // esi
  int v13; // eax
  ACCESS_MASK v14; // r12d
  int v15; // r8d
  struct _KTHREAD *v16; // rax
  _KPROCESS *Process; // rdx
  int v18; // eax
  void *v19; // rcx
  __int64 v20; // r8
  int v22; // [rsp+38h] [rbp-A0h]
  int v23; // [rsp+48h] [rbp-90h]
  _QWORD v24[3]; // [rsp+50h] [rbp-88h] BYREF
  int v25[2]; // [rsp+68h] [rbp-70h] BYREF
  PVOID P; // [rsp+70h] [rbp-68h] BYREF
  void *Buf1; // [rsp+78h] [rbp-60h] BYREF
  int v28; // [rsp+80h] [rbp-58h]
  int v29[2]; // [rsp+88h] [rbp-50h]
  __int64 v30; // [rsp+90h] [rbp-48h]
  _OWORD v31[4]; // [rsp+98h] [rbp-40h] BYREF

  Buf1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v25 = 0LL;
  v24[0] = 0LL;
  v31[0] = 0LL;
  v10 = ExpCaptureWnfStateName(a1);
  if ( v10 >= 0 )
  {
    v30 = 0LL;
    v28 = 0;
    *(_QWORD *)v29 = 0LL;
    LOBYTE(v11) = PreviousMode;
    v10 = ExpWnfCaptureScopeInstanceId(0LL, a3, v11, &Buf1, v31);
    if ( v10 >= 0 )
    {
      if ( a2 && (unsigned int)(a2 - 1) > 1 )
      {
        v10 = -1073741821;
        goto LABEL_42;
      }
      if ( Length < 4 )
      {
        v10 = -1073741811;
      }
      else
      {
        if ( PreviousMode )
          ProbeForWrite(a4, Length, 4u);
        v10 = -1073741811;
      }
      v12 = 1;
      if ( a2 )
      {
        v23 = 0;
      }
      else
      {
        v23 = 1;
        if ( a3 )
          goto LABEL_42;
      }
      if ( PreviousMode && a2 )
      {
        v13 = 0;
        v22 = 0;
        if ( a3 )
        {
          v10 = ExpWnfCheckCrossScopeAccess(0LL);
          if ( v10 < 0 )
            goto LABEL_42;
          v13 = 0;
        }
      }
      else
      {
        v13 = 1;
        v22 = 1;
      }
      v14 = 0;
      if ( !v13 && (unsigned int)(a2 - 1) <= 1 )
        v14 = 2;
      v15 = 0;
      if ( PreviousMode )
      {
        v16 = KeGetCurrentThread();
        Process = v16->ApcState.Process;
        if ( !v23 )
          v15 = (int)v16;
      }
      else
      {
        LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
      }
      v10 = ExpWnfResolveScopeInstance((int)v25, (int)Process, v15, v29[0], Buf1);
      if ( v10 >= 0 )
      {
        v18 = ExpWnfLookupNameInstance(*(_QWORD *)v25, 0LL, v24);
        v10 = v18;
        if ( v18 != -1073741772 || (_DWORD)v30 == 3 )
        {
          if ( v18 < 0 )
            goto LABEL_42;
          if ( v22 )
          {
LABEL_30:
            if ( a2 )
            {
              if ( a2 == 1 )
              {
                if ( !v24[0] || !*(_DWORD *)(v24[0] + 160LL) )
                  goto LABEL_34;
              }
              else if ( v24[0] && *(_DWORD *)(v24[0] + 164LL) )
              {
LABEL_34:
                v12 = 0;
              }
            }
            if ( PreviousMode )
              RtlWriteULongToUser(a4, v12);
            else
              *a4 = v12;
            v10 = 0;
            goto LABEL_42;
          }
          v19 = *(void **)(v24[0] + 72LL);
        }
        else
        {
          v10 = ExpWnfLookupPermanentName(0LL, &P);
          if ( v10 < 0 )
            goto LABEL_42;
          if ( v22 )
            goto LABEL_30;
          v19 = (void *)*((_QWORD *)P + 2);
        }
        v10 = ExpWnfCheckCallerAccess(v19, v14);
        if ( v10 < 0 )
          goto LABEL_42;
        goto LABEL_30;
      }
    }
  }
LABEL_42:
  if ( v10 == -1073741772 && !a2 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a4, 0);
    else
      *a4 = 0;
    v10 = 0;
  }
  if ( v24[0] )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v24[0] + 8LL));
  if ( *(_QWORD *)v25 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v25 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  LOBYTE(v20) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId(0LL, v31, v20);
  return (unsigned int)v10;
}
