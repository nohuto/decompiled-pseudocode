/*
 * XREFs of ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180084D88
 * Callers:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180096F80 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C15E0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18004CC2C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

bool __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        __int64 a1,
        int a2,
        int *a3)
{
  int v3; // r9d
  int v4; // eax
  const struct wil::FailureInfo *v6; // rdx
  _BYTE v7[168]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = *(_DWORD *)(a1 + 248);
  if ( v3 < 1 )
  {
    memset_0(v7, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v7, v6);
  }
  v4 = *(_DWORD *)(a1 + 72);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(a1 + 72) = a2;
    v4 = a2;
  }
  if ( a3 )
    *a3 = v4;
  *(_DWORD *)(a1 + 248) = v3 - 1;
  return v3 == 1;
}
