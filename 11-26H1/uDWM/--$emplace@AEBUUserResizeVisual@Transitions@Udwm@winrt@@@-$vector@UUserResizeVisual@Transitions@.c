/*
 * XREFs of ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800D9FB4
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1800DB680 (-InsertAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResi.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180041BB4 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAAEAUUserResizeVisual@Transitions@Udwm@winrt@@AEBU2345@@Z @ 0x1800D9934 (--$_Emplace_back_with_unused_capacity@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUs.c)
 *     ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800D9AA4 (--$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@.c)
 *     ??$construct_at@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEBU1234@@Z @ 0x1800D9DD0 (--$construct_at@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@std@@YAPEAUUserResizeVisual@.c)
 */

_QWORD *__fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::emplace<winrt::Udwm::Transitions::UserResizeVisual const &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v11[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = (__int64 *)a1[1];
  if ( v4 == (__int64 *)a1[2] )
  {
    *a2 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_reallocate<winrt::Udwm::Transitions::UserResizeVisual const &>(
            a1,
            (__int64)a3,
            (__int64)a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_back_with_unused_capacity<winrt::Udwm::Transitions::UserResizeVisual const &>(
        (__int64)a1,
        a4);
    }
    else
    {
      std::construct_at<winrt::Udwm::Transitions::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual const &>(
        v11,
        a4);
      v8 = v4 - 1;
      v9 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = v9;
      a1[1] += 8LL;
      while ( v8 != a3 )
        winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(--v4, --v8);
      winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(a3, v11);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v11);
    }
    *a2 = a3;
  }
  return a2;
}
