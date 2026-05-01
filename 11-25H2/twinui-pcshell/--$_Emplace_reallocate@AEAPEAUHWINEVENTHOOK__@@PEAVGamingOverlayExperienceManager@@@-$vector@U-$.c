/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@AEAAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU2@AEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033D738
 * Callers:
 *     ?WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803513DC (-WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800FE32C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x18033D5B0 (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 *     ??$_Uninitialized_move@PEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@0PEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x18033EBEC (--$_Uninitialized_move@PEAU-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V-$allocator@.c)
 *     ??0?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@Z @ 0x1803406B8 (--0-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@PEAUHWINEVENTHOOK__@@PEAVGamingO.c)
 */

char *__fastcall std::vector<OwnedHWinEventHook<GamingOverlayExperienceManager>>::_Emplace_reallocate<HWINEVENTHOOK__ * &,GamingOverlayExperienceManager *>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rdi
  char *v14; // r14
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx
  __int64 v19; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[8 * v6];
  try
  {
    OwnedHWinEventHook<GamingOverlayExperienceManager>::OwnedHWinEventHook<GamingOverlayExperienceManager>(
      v14,
      *a3,
      *a4);
    v19 = (__int64)v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<OwnedHWinEventHook<GamingOverlayExperienceManager> *,std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
        v17,
        a2,
        v13);
      v19 = (__int64)v13;
      v16 = v14 + 8;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<OwnedHWinEventHook<GamingOverlayExperienceManager> *,std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
      v17,
      v15,
      v16);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(v19, (__int64)(v14 + 8));
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * v8));
    throw;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *a1 = (__int64)v13;
  a1[1] = (__int64)&v13[8 * v9];
  a1[2] = (__int64)&v13[8 * v8];
  return v14;
}
