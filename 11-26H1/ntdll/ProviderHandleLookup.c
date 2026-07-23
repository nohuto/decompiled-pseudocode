/*
 * XREFs of ProviderHandleLookup @ 0x18008D650
 * Callers:
 *     EtwpSetProviderTraits @ 0x180041D70 (EtwpSetProviderTraits.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 *     EtwEventProviderEnabled @ 0x18008D8A0 (EtwEventProviderEnabled.c)
 *     EtwEventWriteString @ 0x18008D980 (EtwEventWriteString.c)
 *     EtwEventWriteEndScenario @ 0x1800B7EA0 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800B7FE0 (EtwEventWriteStartScenario.c)
 *     EtwpTrackProviderBinary @ 0x180117C5C (EtwpTrackProviderBinary.c)
 *     EtwpUseDescriptorType @ 0x180158BDC (EtwpUseDescriptorType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProviderHandleLookup(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r11
  unsigned __int64 v5; // r10

  result = 0LL;
  v3 = (a2 >> 1) & 7;
  v4 = qword_1801C62A0[v3];
  if ( ((v4 != 0 && a2 >> 4 < dword_180192040[v3]) & (unsigned __int8)a2) != 0 )
  {
    v5 = (unsigned __int64)a2 >> 4;
    if ( (*(_QWORD *)(v4 + 8 * v5) & 1) == 0 )
      return *(_QWORD *)(v4 + 8 * v5);
  }
  return result;
}
