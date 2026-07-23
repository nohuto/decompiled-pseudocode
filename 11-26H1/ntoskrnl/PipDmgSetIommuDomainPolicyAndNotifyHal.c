/*
 * XREFs of PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x14096ED2C
 * Callers:
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x1407B3F44 (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14096EC44 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1409AC818 (PnpDeviceObjectToDeviceInstance.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PipDmgSetIommuDomainPolicyAndNotifyHal(__int64 *a1, int a2, char a3)
{
  __int64 v3; // rax
  int v5; // ebx
  int v6; // ecx
  __int64 v8; // rdx
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = a2;
  v3 = a1[90];
  Handle = 0LL;
  v5 = 0;
  v6 = *(_DWORD *)(v3 + 20);
  if ( a2 != v6 && (a3 || v6) )
  {
    v5 = PnpDeviceObjectToDeviceInstance(a1[4], &Handle, 983103LL);
    if ( v5 >= 0 )
    {
      v5 = PnpSetObjectProperty(
             PiPnpRtlCtx,
             a1[6],
             1,
             0LL,
             (__int64)&DEVPKEY_Device_IommuDomainPolicy,
             7,
             (__int64)&v10,
             4,
             0);
      if ( v5 >= 0 )
      {
        *(_DWORD *)(a1[90] + 20) = v10;
        if ( !v10 )
          guard_dispatch_icall_no_overrides(a1[4], v8);
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)v5;
}
