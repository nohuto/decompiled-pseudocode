/*
 * XREFs of ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010E82C
 * Callers:
 *     ?EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ @ 0x18007B4C4 (-EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ.c)
 *     ?GetCapabilityUsageSession@@YAJPEAPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x18011D254 (-GetCapabilityUsageSession@@YAJPEAPEAUICapabilityUsageSession@Management@CapabilityAccess@Intern.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18006D7F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(HSTRING_HEADER *a1)
{
  unsigned __int64 v2; // r9

  a1[1].Reserved.Reserved1 = 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( c_szCapabilityMicrophone[v2] );
  if ( v2 > 0xFFFFFFFF || (int)v2 + 1 < (unsigned int)v2 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    __debugbreak();
    JUMPOUT(0x18010E88ELL);
  }
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(a1, c_szCapabilityMicrophone, v2 + 1, v2);
  return a1;
}
