/*
 * XREFs of CmpInitializeSystemHivesLoad @ 0x1408514A8
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     CmpCreateRegistryThread @ 0x14085D308 (CmpCreateRegistryThread.c)
 */

void CmpInitializeSystemHivesLoad()
{
  __int64 v0; // rdx
  unsigned int i; // ebx
  __int64 v2; // rcx
  int v3; // eax
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  BYTE1(NlsMbOemCodePageTag) = 0;
  KeInitializeEvent((PRKEVENT)&CmpContextListLock.SystemCallNumber, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)&CmpContextListLock.StateSaveArea, SynchronizationEvent, 0);
  for ( i = 0; i < 7; ++i )
  {
    v2 = 23LL * i;
    if ( ((__int64)CmpMachineHiveList[v2 + 4] & 1) != 0
      || LOBYTE(WheapPfaLock.CurrentRunTime)
      || CmpForceSynchronousMachineHiveLoad
      || ((i - 2) & 0xFFFFFFFA) == 0 )
    {
      KeSetEvent((PRKEVENT)&CmpMachineHiveList[v2 + 8], 0, 0);
    }
    v3 = CmpCreateRegistryThread(&Handle, v0, CmpLoadHiveThread, i);
    if ( v3 < 0 )
      KeBugCheckEx(0x74u, 2uLL, 3uLL, i, v3);
    ZwClose(Handle);
  }
}
