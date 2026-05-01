/*
 * XREFs of ?_Change_array@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@AEAAXQEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@_K1@Z @ 0x180357A04
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@AEAAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU2@AEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033D478 (--$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@-$vector@U-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x18033D2E8 (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 */

__int64 __fastcall std::vector<OwnedHWinEventHook<GamingOverlayExperienceManager>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
      (__int64)v6,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16>(
      *(void **)a1,
      (struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
