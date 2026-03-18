/*
 * XREFs of _CmDeleteDeviceContainer @ 0x140B1DC58
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x140AE82D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140B1D980 (_CmRemoveDeviceFromContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140B1DD7C (_CmDeleteDeviceContainerWorker.c)
 */

__int64 __fastcall CmDeleteDeviceContainer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  _DWORD v12[24]; // [rsp+40h] [rbp-88h] BYREF

  memset_0(v12, 0, 0x58uLL);
  v4 = *(_QWORD *)(a1 + 504);
  if ( v4 )
  {
    v5 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v5 == -1073741822 )
    {
      v4 = 0LL;
    }
    else
    {
      if ( v5 == -1073741536 )
        return v12[0];
      if ( v5 )
        return (unsigned int)-1073741595;
    }
  }
  v6 = CmDeleteDeviceContainerWorker(a1, a2, v12[4]);
  v7 = v6;
  if ( !v4 )
    return v7;
  v12[0] = v6;
  v9 = guard_dispatch_icall_no_overrides(a1, a2);
  v10 = v9;
  if ( v9 == -1073741822 )
    return v7;
  if ( v9 == -1073741536 )
    return v12[0];
  v11 = v7;
  if ( v10 )
    return (unsigned int)-1073741595;
  return v11;
}
