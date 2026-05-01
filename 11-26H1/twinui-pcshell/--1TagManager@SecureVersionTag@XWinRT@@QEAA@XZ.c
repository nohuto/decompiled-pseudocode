/*
 * XREFs of ??1TagManager@SecureVersionTag@XWinRT@@QEAA@XZ @ 0x18056C148
 * Callers:
 *     ??1?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x18056BE68 (--1-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation.c)
 * Callees:
 *     ?Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x18056FFD0 (-Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 */

void __fastcall XWinRT::SecureVersionTag::TagManager::~TagManager(XWinRT::SecureVersionTag::Tag **this)
{
  XWinRT::SecureVersionTag::Tag *v1; // rcx

  v1 = *this;
  if ( v1 )
    XWinRT::SecureVersionTag::Tag::Release(v1);
}
