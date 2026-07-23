/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1409C3B60
 * Callers:
 *     DifNtQueryWnfStateNameInformationWrapper @ 0x14068A940 (DifNtQueryWnfStateNameInformationWrapper.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1409C3F78 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x1409C450C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409C4A4C (ExpWnfCheckCrossScopeAccess.c)
 *     ExpCaptureWnfStateName @ 0x1409C58F8 (ExpCaptureWnfStateName.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409C59E0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1409C7310 (ExpWnfLookupNameInstance.c)
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  NTSTATUS v10; // edi
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
  v10 = ExpCaptureWnfStateName((void *)StateName);
  if ( v10 >= 0 )
  {
    v30 = 0LL;
    v28 = 0;
    *(_QWORD *)v29 = 0LL;
    LOBYTE(v11) = PreviousMode;
    v10 = ExpWnfCaptureScopeInstanceId(0LL, ExplicitScope, v11, &Buf1, v31);
    if ( v10 >= 0 )
    {
      if ( NameInfoClass && (unsigned int)(NameInfoClass - 1) > 1 )
      {
        v10 = -1073741821;
        goto LABEL_42;
      }
      if ( InfoBufferSize < 4 )
      {
        v10 = -1073741811;
      }
      else
      {
        if ( PreviousMode )
          ProbeForWrite(InfoBuffer, InfoBufferSize, 4u);
        v10 = -1073741811;
      }
      v12 = 1;
      if ( NameInfoClass )
      {
        v23 = 0;
      }
      else
      {
        v23 = 1;
        if ( ExplicitScope )
          goto LABEL_42;
      }
      if ( PreviousMode && NameInfoClass )
      {
        v13 = 0;
        v22 = 0;
        if ( ExplicitScope )
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
      if ( !v13 && (unsigned int)(NameInfoClass - 1) <= 1 )
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
            if ( NameInfoClass )
            {
              if ( NameInfoClass == WnfInfoSubscribersPresent )
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
              RtlWriteULongToUser(InfoBuffer, v12);
            else
              *(_DWORD *)InfoBuffer = v12;
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
  if ( v10 == -1073741772 && NameInfoClass == WnfInfoStateNameExist )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(InfoBuffer, 0);
    else
      *(_DWORD *)InfoBuffer = 0;
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
  return v10;
}
