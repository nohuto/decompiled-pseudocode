/*
 * XREFs of ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x18014979C
 * Callers:
 *     ?CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180144FA0 (-CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientPr.c)
 * Callees:
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x18006B61C (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x18006BB3C (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 *     ?MakeCompletedCallback@GestureHandler@@AEAA?AV?$shared_ptr@VGestureHandler@@@std@@W4GestureCompletedReason@@@Z @ 0x18006BD68 (-MakeCompletedCallback@GestureHandler@@AEAA-AV-$shared_ptr@VGestureHandler@@@std@@W4GestureCompl.c)
 *     ?GetRelativePoints@GestureHandler@@AEAA?AV?$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@UtagPOINTF@@@Z @ 0x18008F8BC (-GetRelativePoints@GestureHandler@@AEAA-AV-$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@Uta.c)
 *     ?CASGestureState@GestureHandler@@AEAA?AW4GestureOperationState@@W42@@Z @ 0x1800942A4 (-CASGestureState@GestureHandler@@AEAA-AW4GestureOperationState@@W42@@Z.c)
 *     ?GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x1800965D0 (-GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureHandler::CancelOperation(GestureHandler *this)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // rsi
  __int64 i; // rdi
  _BYTE v6[8]; // [rsp+50h] [rbp-38h] BYREF
  std::_Ref_count_base *v7; // [rsp+58h] [rbp-30h]
  unsigned __int64 v8; // [rsp+60h] [rbp-28h] BYREF
  int v9; // [rsp+68h] [rbp-20h] BYREF
  int v10[4]; // [rsp+70h] [rbp-18h] BYREF

  v2 = GestureHandler::CASGestureState((__int64)this);
  if ( v2 != v3 )
  {
    if ( v2 != 3 )
      GestureHandler::FeedAnimationDataIfNeeded(this, 1);
    v4 = *((_QWORD *)this + 15);
    for ( i = *((_QWORD *)this + 14); i != v4; i += 40LL )
    {
      GestureHandler::GetRelativePoints((__int64)this, &v8, i, *((_QWORD *)this + 19));
      InputETW::InputGesture::GestureCancelled(
        *((const WCHAR **)this + 3),
        *((_DWORD *)this + 34),
        v10,
        (int *)&v8,
        &v9,
        *((_QWORD *)this + 23),
        *((_DWORD *)this + 44),
        *((_QWORD *)this + 24));
      (*(void (__fastcall **)(__int64, _QWORD, int *, unsigned __int64 *, int *, char *, _QWORD, _DWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 48LL))(
        *(_QWORD *)(i + 8) + 8LL,
        *((unsigned int *)this + 34),
        v10,
        &v8,
        &v9,
        (char *)this + 152,
        *((_QWORD *)this + 23),
        *((_DWORD *)this + 44),
        *((_QWORD *)this + 24));
    }
    GestureHandler::MakeCompletedCallback((__int64)this, (__int64)v6, 1);
    GestureHandler::CleanupAnimationDataIfNeeded(this);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
}
