/*
 * XREFs of ?DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18004F464
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioRenderEndpo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F3E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIEndpointCharacte.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceManager@@UIAudioResourceControl@@UIAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800CAA60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceMan.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18011F960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@@De.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMixedRealitySpatialAudioFormatPolicyChange@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180144100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMixedRealitySpat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::StrongReference::DecrementStrongReference(
        Microsoft::WRL::Details::StrongReference *this)
{
  signed __int32 v1; // r8d

  do
    v1 = *(_DWORD *)this;
  while ( *(_DWORD *)this != 0x7FFFFFFF
       && v1 != _InterlockedCompareExchange((volatile signed __int32 *)this, v1 - 1, v1) );
  return (unsigned int)(v1 - 1);
}
