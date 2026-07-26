/*
 * XREFs of ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KW4NetSetupSubkeyType@@AEAVKRegKey@@@Z @ 0x140160830
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x140160770 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x14015F0B0 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1401603F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall Ndis::BindStack::OpenV2InterfaceKey(
        struct _GUID *a1,
        __int64 a2,
        enum NetSetupSubkeyType a3,
        struct KRegKey *a4)
{
  wchar_t *v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  __int16 v8; // cx
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-228h] BYREF
  wchar_t v11[256]; // [rsp+40h] [rbp-218h] BYREF

  netsetupBuildObjectPath(2LL, (int *)a1, 0, 2u, v11);
  v5 = v11;
  v10 = 0LL;
  v6 = 0x7FFFLL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = -1073741811;
  if ( v6 )
  {
    v7 = 0;
    v8 = 2 * v6;
    v10.Length = -2 - v8;
    v10.MaximumLength = -v8;
    v10.Buffer = v11;
  }
  if ( v7 >= 0 )
    return KRegKey::Open(a4, 1u, &v10, 0LL);
  else
    return (unsigned int)v7;
}
