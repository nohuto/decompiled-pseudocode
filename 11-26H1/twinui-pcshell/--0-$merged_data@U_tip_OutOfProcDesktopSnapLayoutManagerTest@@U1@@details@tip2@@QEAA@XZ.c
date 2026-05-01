/*
 * XREFs of ??0?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805B90D8
 * Callers:
 *     ?start@?$tip_test@V?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1805BC3C4 (-start@-$tip_test@V-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180282EC4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  std::wstring::wstring(a1 + 272);
  *(_WORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 308) = 0LL;
  *(_QWORD *)(a1 + 316) = 0LL;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 328) = 1;
  return result;
}
