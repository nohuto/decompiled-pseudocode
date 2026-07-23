/*
 * XREFs of PipInitializeCoreDriversByGroup @ 0x140D0B300
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140D0B1AC (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PnpUnlockDeviceActionQueue @ 0x1404D0F6C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1404D1004 (PnpLockDeviceActionQueue.c)
 *     HeadlessKernelAddLogEntry @ 0x1404E6FF8 (HeadlessKernelAddLogEntry.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14077CA20 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407A6AB8 (PipApplyFunctionToServiceInstances.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407AFEB0 (PnpWaitForEmptyDeviceActionQueue.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A11B9C (IopGetDriverNameFromKeyNode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     PnpInitializeBootStartDriver @ 0x140D0EFCC (PnpInitializeBootStartDriver.c)
 */

void __fastcall PipInitializeCoreDriversByGroup(int a1, __int64 a2)
{
  int v2; // r12d
  __int64 v3; // rax
  UNICODE_STRING **v4; // rdi
  UNICODE_STRING *v5; // rbx
  UNICODE_STRING *v6; // r14
  int DriverNameFromKeyNode; // esi
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // r9
  __int64 v12; // [rsp+20h] [rbp-30h]
  HANDLE v13; // [rsp+30h] [rbp-20h]
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h]

  v2 = 0;
  v16 = 0LL;
  Handle = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v3 = 96LL;
      v2 = 1;
    }
    else
    {
      if ( a1 != 2 )
        return;
      v3 = 112LL;
    }
  }
  else
  {
    v3 = 80LL;
  }
  v4 = (UNICODE_STRING **)(v3 + a2);
  if ( v3 + a2 )
  {
    v5 = *v4;
    PnpCoreDriverGroupLoadPhase = a1;
    while ( v5 != (UNICODE_STRING *)v4 )
    {
      v6 = v5;
      v5 = *(UNICODE_STRING **)&v5->Length;
      if ( SLODWORD(v6[3].Buffer) >= 0 )
      {
        P[1] = 0LL;
        Handle = 0LL;
        DriverNameFromKeyNode = IopOpenRegistryKeyEx(&Handle, 0LL, v6 + 2, 0x20019u);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, (PUNICODE_STRING)P);
          if ( DriverNameFromKeyNode >= 0 )
          {
            DriverNameFromKeyNode = PnpInitializeBootStartDriver(
                                      (unsigned int)P,
                                      (int)v6 + 32,
                                      *(_QWORD *)(*(_QWORD *)&v6[3].Length + 56LL),
                                      *(_QWORD *)&v6[3].Length,
                                      0,
                                      v2);
            if ( DriverNameFromKeyNode >= 0 )
            {
              v8 = v16;
              if ( v16 )
              {
                PnpLockDeviceActionQueue();
                PipApplyFunctionToServiceInstances(v9, *(_QWORD *)(v8 + 48) + 24LL, v10, v11, v12, v8, v13);
                PnpUnlockDeviceActionQueue();
                PnpWaitForEmptyDeviceActionQueue();
                PnpRequestDeviceAction(0LL, 7u, 0, 0LL, 0LL, 0LL, 0LL);
                if ( PnpWaitForEmptyDeviceEventQueue() < 0 )
                  HeadlessKernelAddLogEntry();
              }
            }
          }
        }
        if ( Handle )
          ZwClose(Handle);
        if ( P[1] )
          ExFreePoolWithTag(P[1], 0);
        if ( DriverNameFromKeyNode < 0 )
          *(_DWORD *)(*(_QWORD *)&v6[3].Length + 104LL) |= 0x20000u;
      }
    }
  }
}
