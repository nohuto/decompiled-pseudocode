/*
 * XREFs of RtlGetHotPatchSize @ 0x140720BB0
 * Callers:
 *     RtlHotPatchSynchronizationRequired @ 0x140720C00 (RtlHotPatchSynchronizationRequired.c)
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 *     MiPrepareDriverForHotPatch @ 0x1408734E8 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x1408AAD4C (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x1408AAF38 (RtlEnumerateHotPatchPatches.c)
 *     RtlValidateHotPatchBase @ 0x1408AB358 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x140C0206C (RtlApplyHotPatch.c)
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
