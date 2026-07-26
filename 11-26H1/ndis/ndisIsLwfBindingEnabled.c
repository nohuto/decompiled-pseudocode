/*
 * XREFs of ndisIsLwfBindingEnabled @ 0x14014E6C0
 * Callers:
 *     ndisBuildMonitoringLwfBindings @ 0x14014E2D8 (ndisBuildMonitoringLwfBindings.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x14014ACBC (-netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU.c)
 *     ndisIsBindPathEnabled @ 0x14014E564 (ndisIsBindPathEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x14014E764 (ndisIsLwfBindingEnabled_0.c)
 */

__int64 __fastcall ndisIsLwfBindingEnabled(unsigned int *a1, _DWORD *a2, __int64 a3, bool *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // ecx
  wchar_t v11[256]; // [rsp+40h] [rbp-238h] BYREF

  result = ndisIsLwfBindingEnabled_0(a1, a2, a4);
  v10 = 0;
  if ( !(_DWORD)result && *a4 )
  {
    if ( a1[16] || a2[14] || *(_DWORD *)(a3 + 56) )
      v10 = 1;
    netsetupBuildBindingRegistryPath(v10, v9, a1, 0LL, a2, (unsigned int *)a3, v11);
    return ndisIsBindPathEnabled(v11, *(_BYTE *)(a3 + 52), a4);
  }
  return result;
}
