/*
 * XREFs of UsbhReleaseApiLock @ 0x1400249B8
 * Callers:
 *     UsbhIoctlGetHubCaps @ 0x1400246CC (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x140024AB8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlCyclePort @ 0x14004CF64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004D280 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004D550 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004D834 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DAC4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004DEE0 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x14004E1D8 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseApiLock(__int64 a1, unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  signed __int32 v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rdi
  struct _KSEMAPHORE *v10; // rbx
  struct _KEVENT *v11; // rax

  v3 = a2;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v4 = *(_QWORD *)(a1 + 64);
      if ( v4 )
      {
        v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 880), 0xFFFFFFFF);
        v6 = *(_DWORD *)(v4 + 884);
        v7 = *(_QWORD *)(v4 + 888);
        v8 = 32LL * ((v5 - 1) & v6);
        *(_DWORD *)(v8 + v7) = 758206529;
        *(_QWORD *)(v8 + v7 + 8) = 0LL;
        *(_QWORD *)(v8 + v7 + 16) = 0LL;
        *(_QWORD *)(v8 + v7 + 24) = v3;
      }
    }
  }
  v9 = FdoExt(a1);
  v10 = (struct _KSEMAPHORE *)FdoExt(a1);
  FdoExt(*((_QWORD *)v9 + 218));
  v9[446] = 1734964085;
  v10[41].Header.WaitListHead.Blink = 0LL;
  KeReleaseSemaphore(v10 + 155, 16, 1, 0);
  v11 = (struct _KEVENT *)FdoExt(a1);
  return KeSetEvent(v11 + 205, 0, 0);
}
