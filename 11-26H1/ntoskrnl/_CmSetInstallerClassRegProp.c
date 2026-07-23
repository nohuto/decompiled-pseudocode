/*
 * XREFs of _CmSetInstallerClassRegProp @ 0x14089D5E0
 * Callers:
 *     _CmSetInstallerClassMappedPropertyFromRegProp @ 0x1408A26A0 (_CmSetInstallerClassMappedPropertyFromRegProp.c)
 *     PiCMSetRegistryProperty @ 0x14094DCB8 (PiCMSetRegistryProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x14089D748 (_CmSetInstallerClassRegPropWorker.c)
 */

__int64 __fastcall CmSetInstallerClassRegProp(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, ULONG a7)
{
  __int64 v11; // r14
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  _DWORD v19[4]; // [rsp+40h] [rbp-69h] BYREF
  int v20[2]; // [rsp+50h] [rbp-59h]
  int v21; // [rsp+58h] [rbp-51h]
  int v22; // [rsp+5Ch] [rbp-4Dh]
  __int64 v23; // [rsp+60h] [rbp-49h]
  ULONG SecurityDescriptorLength; // [rsp+68h] [rbp-41h]
  __int16 v25[26]; // [rsp+6Ch] [rbp-3Dh]

  memset_0(v19, 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 504);
  v22 = a5;
  *(_QWORD *)v20 = a3;
  v21 = a4;
  SecurityDescriptorLength = a7;
  v23 = a6;
  *(_DWORD *)v25 = 0;
  if ( v11 )
  {
    v12 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return v19[0];
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = CmSetInstallerClassRegPropWorker(a1, a2, v20[0], v21, v22, v23, SecurityDescriptorLength, v25[0]);
  v14 = v13;
  if ( !v11 )
    return v14;
  v19[0] = v13;
  v15 = guard_dispatch_icall_no_overrides(a1, a2);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v14;
  if ( v15 == -1073741536 )
    return v19[0];
  v17 = v14;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
