/*
 * XREFs of _lambda_9a7bfcc99c4e75b6f719d590bcf52609_::operator() @ 0x180569C18
 * Callers:
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___::OnStoryboardStatusChanged @ 0x18056A690 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_484aa05d4e8e00993eb11fe3ca_ea_18056A690.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180550644 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180551A84 (--1-$test_data_control@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180551ABC (--1-$test_watcher@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 */

__int64 __fastcall lambda_9a7bfcc99c4e75b6f719d590bcf52609_::operator()(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v5; // [rsp+50h] [rbp-18h]
  volatile signed __int32 *v6; // [rsp+70h] [rbp+8h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v4);
  if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v5 + 2)) )
  {
    v2 = v5;
    v6 = v5;
    if ( v5 )
      _InterlockedIncrement(v5 + 88);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v2 + 2));
    std::wstring::operator=((char *)v2 + 288, L"VirtualDesktopSlideAnimation");
    tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v6);
  }
  tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v4);
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 56LL))(*a1);
}
