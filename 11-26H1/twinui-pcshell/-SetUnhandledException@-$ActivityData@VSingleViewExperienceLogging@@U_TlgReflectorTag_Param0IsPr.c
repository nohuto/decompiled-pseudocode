/*
 * XREFs of ?SetUnhandledException@?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x180078FD4
 * Callers:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800752AC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180079D04 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007D0D0 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B10A0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18028C95C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException(
        _DWORD *a1)
{
  int v2; // ecx
  int v3; // r8d
  const struct wil::FailureInfo *v4; // rdx
  int v5; // edx
  _BYTE v7[168]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = -2147024322;
  if ( (int)a1[22] < 0 )
    v2 = a1[22];
  v3 = a1[62];
  if ( v3 < 1 )
  {
    memset_0(v7, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v7, v4);
  }
  v5 = a1[18];
  if ( v5 >= 0 )
  {
    a1[18] = v2;
    v5 = v2;
  }
  a1[62] = v3 - 1;
  return (unsigned int)v5;
}
