/*
 * XREFs of s_IsProcessingModeSupportedOnHostConnector @ 0x18010E530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z @ 0x18010C07C (-IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z.c)
 */

__int64 __fastcall s_IsProcessingModeSupportedOnHostConnector(
        CPolicyConfig *a1,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        _DWORD *a4)
{
  struct _GUID v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a3;
  *a4 = CPolicyConfig::IsProcessingModeSupportedOnHostConnector(a1, a2, (__m128i *)&v5);
  return 0LL;
}
