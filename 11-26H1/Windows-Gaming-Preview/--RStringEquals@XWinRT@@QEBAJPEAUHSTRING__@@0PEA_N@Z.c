/*
 * XREFs of ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x180026B18
 * Callers:
 *     ?GetNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEBAJAEBQEAUHSTRING__@@AEAI1AEAPEAVCNode@12@PEAPEAV412@@Z @ 0x18002A080 (-GetNode@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-.c)
 *     ?HasKey@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18002ABA0 (-HasKey@ChunkView@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@.c)
 *     ?Lookup@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z @ 0x18002BC70 (-Lookup@ChunkView@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@.c)
 * Callees:
 *     memcmp_0 @ 0x180043364 (memcmp_0.c)
 */

__int64 __fastcall XWinRT::StringEquals::operator()(__int64 a1, HSTRING a2, HSTRING a3, bool *a4)
{
  bool v4; // di
  PCWSTR StringRawBuffer; // rax
  PCWSTR v8; // rbp
  PCWSTR v9; // rax
  UINT32 v11[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 length; // [rsp+40h] [rbp+8h] BYREF

  length = a1;
  v4 = 0;
  v11[0] = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, v11);
  LODWORD(length) = 0;
  v8 = StringRawBuffer;
  v9 = WindowsGetStringRawBuffer(a3, (UINT32 *)&length);
  if ( v11[0] == (_DWORD)length )
    v4 = memcmp_0(v8, v9, 2LL * (unsigned int)length) == 0;
  *a4 = v4;
  return 0LL;
}
