/*
 * XREFs of RtlGetHotPatchSize @ 0x1407257D0
 * Callers:
 *     RtlHotPatchSynchronizationRequired @ 0x140725820 (RtlHotPatchSynchronizationRequired.c)
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     MiPrepareDriverForHotPatch @ 0x140879848 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x1408B11BC (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x1408B13A8 (RtlEnumerateHotPatchPatches.c)
 *     RtlValidateHotPatchBase @ 0x1408B17C8 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x140C0827C (RtlApplyHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetHotPatchSize(_DWORD *a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( *a1 >= 3u )
    return (unsigned int)(a1[6] + 2);
  return result;
}
