/*
 * XREFs of bSetDeviceSessionUsage @ 0x14006C3B0
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvCloseGraphicsDevices @ 0x14006C330 (DrvCloseGraphicsDevices.c)
 *     DrvCleanupOneGraphicsDevice @ 0x14006D470 (DrvCleanupOneGraphicsDevice.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x14004D980 (UserRemoteConnectedSessionUsingXddm.c)
 */

__int64 __fastcall bSetDeviceSessionUsage(__int64 a1, int a2)
{
  unsigned int v4; // edi
  struct _DEVICE_OBJECT *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  PIRP v8; // r13
  __int64 v9; // rcx
  NTSTATUS Status; // eax
  unsigned int v12; // ecx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  const CHAR *v14; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  int InputBuffer; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v18; // [rsp+B4h] [rbp+34h]

  if ( a1 == -4 || (*(_DWORD *)(a1 + 160) & 0x6000008) != 0 && (*(_DWORD *)(a1 + 160) & 0x800000) == 0 )
  {
    return 1;
  }
  else
  {
    v18 = 0;
    v5 = *(struct _DEVICE_OBJECT **)(a1 + 136);
    InputBuffer = a2;
    v4 = 1;
    IoStatusBlock = 0LL;
    memset(&Event, 0, sizeof(Event));
    if ( v5 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v8 = IoBuildDeviceIoControlRequest(0x23202Bu, v5, &InputBuffer, 8u, &InputBuffer, 8u, 1u, &Event, &IoStatusBlock);
      if ( v8 )
      {
        if ( (unsigned int)UserRemoteConnectedSessionUsingXddm(v7, v6) )
        {
          CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(*(_QWORD *)(W32GetSessionState(v9) + 88) + 2864LL);
        }
        Status = IofCallDriver(v5, v8);
        if ( Status == 259 )
        {
          while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
            ;
          Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 )
        {
          if ( v18 )
          {
            v12 = *(_DWORD *)(a1 + 164) | 2;
            if ( !a2 )
              v12 = *(_DWORD *)(a1 + 164) & 0xFFFFFFFD;
            *(_DWORD *)(a1 + 164) = v12;
          }
          else
          {
            v14 = "Trying to enable physical device already in use.\n";
            if ( !a2 )
              v14 = "Trying to disable physical device not enabled in this session.\n";
            DbgPrint(v14);
          }
          return v18;
        }
      }
    }
  }
  return v4;
}
