/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013DF90
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1806C9E80 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImme_ea_1806C9E80.c)
 *     ?AddRef@CImmersiveWindowFactory@@WDA@EAAKXZ @ 0x1806C9E90 (-AddRef@CImmersiveWindowFactory@@WDA@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WEI@EAAKXZ @ 0x1806C9EA0 (-AddRef@CImmersiveWindowFactory@@WEI@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WFA@EAAKXZ @ 0x1806C9EB0 (-AddRef@CImmersiveWindowFactory@@WFA@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WLA@EAAKXZ @ 0x1806C9EC0 (-AddRef@CImmersiveWindowFactory@@WLA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  bool v4; // zf
  signed __int64 v5; // rax
  signed __int32 v7; // r9d

  v1 = *(_QWORD *)(a1 + 192);
  v2 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v2;
    v3 = v1 + 1;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 192), v1 + 1, v1);
    v4 = v1 == v5;
    v1 = v5;
    if ( v4 )
      return v3;
  }
  while ( 1 )
  {
    v7 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v7 == 0x7FFFFFFF )
      break;
    if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v7 + 1, v7) )
      return (unsigned int)(v7 + 1);
  }
  return v2;
}
