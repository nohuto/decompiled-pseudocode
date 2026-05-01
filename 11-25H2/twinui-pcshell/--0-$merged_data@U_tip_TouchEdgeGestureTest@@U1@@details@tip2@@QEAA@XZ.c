/*
 * XREFs of ??0?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@QEAA@XZ @ 0x180570EFC
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289144 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBA.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028A4F4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_WORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 282) = 0;
  *(_QWORD *)(a1 + 284) = 0LL;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 312) = 1;
  return result;
}
