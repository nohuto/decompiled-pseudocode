/*
 * XREFs of PopDirectedDripsInitializePhase3 @ 0x140CD0B50
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140CD0CA8 (PopInitializeDirectedDrips.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x1407CC23C (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopDiagTraceDirectedDripsInitialization @ 0x1407D3440 (PopDiagTraceDirectedDripsInitialization.c)
 *     PopBSDiagSetTriageData @ 0x1407DC970 (PopBSDiagSetTriageData.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1408F9EF0 (ObReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThread @ 0x140A03420 (PsCreateSystemThread.c)
 *     PopBSDiagSetTriageThread @ 0x140ABB370 (PopBSDiagSetTriageThread.c)
 *     PopDirectedDripsDiagInitialize @ 0x140CD6C5C (PopDirectedDripsDiagInitialize.c)
 */

__int64 PopDirectedDripsInitializePhase3()
{
  NTSTATUS v0; // ebx
  struct _KLOCK_ENTRIES *v1; // r9
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ThreadHandle = 0LL;
  PopDirectedDripsDiagInitialize(3LL);
  PopDirectedDripsQueryEnabledMitigations((__int64)dword_140F12AC0);
  if ( (dword_140F12AF0 & 3) != 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v0 = PsCreateSystemThread(
           &ThreadHandle,
           0,
           &ObjectAttributes,
           0LL,
           0LL,
           (PKSTART_ROUTINE)PopDirectedDripsWorkerRoutine,
           dword_140F12AC0);
    if ( v0 >= 0 )
    {
      v0 = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             0x1FFFFFu,
             (POBJECT_TYPE)PsThreadType,
             0,
             0x67446F50u,
             &unk_140F12AD0,
             0LL);
      ZwClose(ThreadHandle);
      if ( v0 >= 0 )
      {
        if ( (unsigned int)PopDirectedDripsDfxEnforcementPolicy >= 3 )
          PopDirectedDripsDfxEnforcementPolicy = 1;
        PopBSDiagSetTriageData(4, (struct _LIST_ENTRY *)dword_140F12AC0, 592LL, v1);
        PopBSDiagSetTriageThread(2, (__int64)unk_140F12AD0, v2, v3);
        dword_140F12AC0[0] |= 1u;
        v0 = 0;
      }
    }
  }
  else
  {
    v0 = -1073741637;
  }
  PopDiagTraceDirectedDripsInitialization(v0);
  return (unsigned int)v0;
}
