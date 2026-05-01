/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F9820
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180427200 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180427200.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180427210 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180427210.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180427220 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180427220.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180427230 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180427230.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCEI@EAAKXZ @ 0x180427240 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180427240.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCFA@EAAKXZ @ 0x180427260 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180427260.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180427280 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180427280.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180427290 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180427290.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x1804272A0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_1804272A0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x1804272B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_1804272B0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x1804272C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_1804272C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WFA@EAAKXZ @ 0x1804272D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_1804272D0.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 608);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 608), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
