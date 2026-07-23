/*
 * XREFs of PiDcHandleContainerEvent @ 0x140B05464
 * Callers:
 *     PiDcHandleObjectEvent @ 0x140969048 (PiDcHandleObjectEvent.c)
 * Callees:
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140B054E0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleContainerEvent(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int i; // r9d
  __int64 v4; // r8
  __int64 v5; // rax

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 76); ++i )
  {
    v4 = 32LL * i;
    if ( !*(_DWORD *)(v4 + a1 + 100) && !*(_QWORD *)(v4 + a1 + 104) && *(_DWORD *)(32 * (i + 3LL) + a1) == 55 )
    {
      v5 = *(_QWORD *)(v4 + a1 + 80) - *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1;
      if ( !v5 )
        v5 = *(_QWORD *)(v4 + a1 + 88) - *(_QWORD *)DEVPKEY_DeviceContainer_IsConnected.fmtid.Data4;
      if ( !v5 )
        return (unsigned int)PiDcGenerateConfigNotificationIfContainerRequiresConfiguration(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL));
    }
  }
  return v1;
}
