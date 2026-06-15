/*
 * XREFs of memmove_0 @ 0x18004B850
 * Callers:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180004BC8 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBGPEAUIAtlStringMgr@1@@Z @ 0x180004CE0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBGPEAUIAtlStringMgr@1@@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001D3E0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18001E104 (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180021470 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180021570 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ??$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@00@Z @ 0x180027C78 (--$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePoli.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180034310 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
