/*
 * XREFs of SshInitialize @ 0x140CD7428
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     SshpSetCollectionActive @ 0x1404A2B28 (SshpSetCollectionActive.c)
 *     SSHSupportEtwRegister @ 0x1407E44D8 (SSHSupportEtwRegister.c)
 *     SSHSupportRegisterPowerSettingCallback @ 0x1407E4508 (SSHSupportRegisterPowerSettingCallback.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CmSiRWLockInitialize @ 0x140B60560 (CmSiRWLockInitialize.c)
 *     SshpUninitialize @ 0x140CD7578 (SshpUninitialize.c)
 *     SshpSessionManagerInitialize @ 0x140CD7604 (SshpSessionManagerInitialize.c)
 *     SshpAlpcInitialize @ 0x140CD768C (SshpAlpcInitialize.c)
 */

__int64 __fastcall SshInitialize(int a1)
{
  unsigned __int64 *p_QuantumTarget; // r9
  _QWORD *v2; // r9
  __int64 v3; // r10
  unsigned int v4; // r8d
  int v5; // ebx

  if ( !a1 )
  {
    CmSiRWLockInitialize(&SshpLibraryListLock);
    SshpSessionType = 0;
    qword_140F0A988 = (__int64)&SshpLibraryList;
    p_QuantumTarget = &SshpBlockerCollections.QuantumTarget;
    SshpLibraryList = &SshpLibraryList;
    SshpSessionId = 0LL;
    do
    {
      CmSiRWLockInitialize((PRTL_RUN_ONCE)p_QuantumTarget - 4);
      v2[1] = v2;
      *v2 = v2;
      v4 = *((_DWORD *)v2 - 1) & 0xFFFFFFFC | 2;
      if ( (*((_BYTE *)v2 - 6) & 1) == 0 )
        v4 = *((_DWORD *)v2 - 1) & 0xFFFFFFFC;
      *((_DWORD *)v2 - 1) = v4;
      p_QuantumTarget = v2 + 6;
    }
    while ( v3 != 1 );
    qword_140F0A958 = 0LL;
    SshpPurgeBlockersWorkItem = 0LL;
    qword_140F0A950 = (__int64)SshpPurgeBlockersWorker;
    dword_140F0A960 = 0;
    SshpGlobalBlockerCount = 0LL;
    SshpSetCollectionActive((struct _KTHREAD *)&SshpBlockerCollections.WaitBlockFill11[64], 1u);
    SshpInitialized = 1;
    return 0;
  }
  if ( a1 == 1 )
  {
    v5 = SshpAlpcInitialize();
    if ( v5 >= 0 )
    {
      SshpSessionManagerInitialize();
      return (unsigned int)v5;
    }
LABEL_17:
    SshpUninitialize();
    return (unsigned int)v5;
  }
  if ( a1 != 3 )
  {
    v5 = -1073741811;
    goto LABEL_17;
  }
  v5 = SSHSupportEtwRegister();
  if ( v5 < 0 )
    goto LABEL_17;
  SshpTraceHandleRegistered = 1;
  v5 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
         (__int64)&SshpBlockerCollections.WaitBlockFill11[112],
         0LL,
         0LL);
  if ( v5 < 0 )
    goto LABEL_17;
  SshpTelemetryHandleRegistered = 1;
  v5 = SSHSupportRegisterPowerSettingCallback();
  if ( v5 < 0 )
    goto LABEL_17;
  return 0;
}
