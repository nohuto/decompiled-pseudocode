/*
 * XREFs of _CmAddDeviceToContainer @ 0x140AE600C
 * Callers:
 *     _CmMoveBaseContainer @ 0x14089E370 (_CmMoveBaseContainer.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1409ABF4C (PiDcUpdateDeviceContainerMembership.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmAddDeviceToContainerWorker @ 0x140AE6180 (_CmAddDeviceToContainerWorker.c)
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x140B274B0 (_PnpObjectRaiseDevicesChangeEvent.c)
 */

__int64 __fastcall CmAddDeviceToContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v9; // rsi
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v14; // eax
  _DWORD *v15; // [rsp+28h] [rbp-69h]
  _DWORD v16[4]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v17; // [rsp+50h] [rbp-41h]
  __int64 v18; // [rsp+58h] [rbp-39h]
  _BYTE v19[64]; // [rsp+60h] [rbp-31h] BYREF

  memset_0(v16, 0, 0x58uLL);
  v9 = *(_QWORD *)(a1 + 504);
  v18 = a4;
  v17 = a3;
  if ( v9 )
  {
    v15 = v16;
    v14 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v14 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v14 == -1073741536 )
        goto LABEL_17;
      if ( v14 )
        return (unsigned int)-1073741595;
    }
  }
  v10 = CmAddDeviceToContainerWorker(a1, a2, v17, v18, v19, v15);
  v11 = v10;
  if ( !v9 || (v16[0] = v10, v12 = guard_dispatch_icall_no_overrides(a1, a2), v12 == -1073741822) )
  {
LABEL_6:
    if ( !v19[0] )
      PnpObjectRaiseDevicesChangeEvent(a1, a2, 5LL);
    goto LABEL_8;
  }
  if ( v12 != -1073741536 )
  {
    if ( !v12 )
      goto LABEL_6;
    return (unsigned int)-1073741595;
  }
LABEL_17:
  v11 = v16[0];
LABEL_8:
  if ( v11 >= 0 && a5 )
    *a5 = v19[0];
  return (unsigned int)v11;
}
