/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801BA3B0
 * Callers:
 *     ?AddRef@CortanaSharedExperienceManager@@W7EAAKXZ @ 0x18036AEB0 (-AddRef@CortanaSharedExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18036AEC0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICort_ea_18036AEC0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18036AED0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICort_ea_18036AED0.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 40);
  while ( 1 )
  {
    if ( v1 < 0 )
      return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                             (Microsoft::WRL::Details *)(2 * v1 + 16),
                             (volatile int *)((unsigned __int64)v1 >> 63));
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      break;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
