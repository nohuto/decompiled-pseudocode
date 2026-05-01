/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801341E0
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18049EBA0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Imp_ea_18049EBA0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18049EBB0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Imp_ea_18049EBB0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@23@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x18049EBC0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Imp_ea_18049EBC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  bool v4; // zf
  signed __int64 v5; // rax
  signed __int32 v6; // r9d

  v1 = *(_QWORD *)(a1 + 72);
  v2 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v2;
    v3 = v1 + 1;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v1 + 1, v1);
    v4 = v1 == v5;
    v1 = v5;
    if ( v4 )
      return v3;
  }
  while ( 1 )
  {
    v6 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v6 == 0x7FFFFFFF )
      break;
    if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v6 + 1, v6) )
      return (unsigned int)(v6 + 1);
  }
  return v2;
}
