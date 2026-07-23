/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x140972760
 * Callers:
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1408A1A88 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1408A2960 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     PiCMOpenClassKey @ 0x140971868 (PiCMOpenClassKey.c)
 *     _PnpDispatchInterfaceClass @ 0x1409721D0 (_PnpDispatchInterfaceClass.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140972500 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmCreateInterfaceClassWorker @ 0x140AF5360 (_CmCreateInterfaceClassWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140960FE0 (_CmOpenCommonClassRegKeyWorker.c)
 */

__int64 __fastcall CmOpenInterfaceClassRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  __int64 v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v15; // eax
  int v16[4]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h]
  ACCESS_MASK v18; // [rsp+58h] [rbp-41h]
  char v19; // [rsp+5Ch] [rbp-3Dh]
  HANDLE *v20; // [rsp+60h] [rbp-39h]
  _DWORD v21[14]; // [rsp+68h] [rbp-31h] BYREF

  memset_0(v16, 0, 0x58uLL);
  v10 = *(_QWORD *)(a1 + 504);
  v18 = a5;
  v19 = a6;
  v17 = 64LL;
  v20 = a7;
  if ( v10 )
  {
    v11 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
      {
LABEL_10:
        v13 = v16[0];
        goto LABEL_5;
      }
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = CmOpenCommonClassRegKeyWorker(a1, a2, v17, HIDWORD(v17), v18, v19, v20, v21);
  v13 = v12;
  if ( v10 )
  {
    v16[0] = v12;
    v15 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v15 != -1073741822 )
    {
      if ( v15 != -1073741536 )
      {
        if ( !v15 )
          goto LABEL_5;
        return (unsigned int)-1073741595;
      }
      goto LABEL_10;
    }
  }
LABEL_5:
  if ( v13 >= 0 && a8 )
    *a8 = v21[0];
  return (unsigned int)v13;
}
