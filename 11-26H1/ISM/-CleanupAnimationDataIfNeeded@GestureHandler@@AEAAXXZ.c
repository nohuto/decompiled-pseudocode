/*
 * XREFs of ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x18006B61C
 * Callers:
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x18006B75C (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 *     ?OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ @ 0x18007FC58 (-OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ.c)
 *     ?OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEventArg@@@Z @ 0x180107BF0 (-OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEven.c)
 *     ?OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z @ 0x180145C80 (-OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z.c)
 *     ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x18014979C (-CancelOperation@GestureHandler@@QEAAXXZ.c)
 *     ?OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ @ 0x180149C20 (-OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?MakeCompletedCallback@GestureHandler@@AEAA?AV?$shared_ptr@VGestureHandler@@@std@@W4GestureCompletedReason@@@Z @ 0x18006BD68 (-MakeCompletedCallback@GestureHandler@@AEAA-AV-$shared_ptr@VGestureHandler@@@std@@W4GestureCompl.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x1800942D4 (-IsGestureInvalid@GestureHandler@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureHandler::CleanupAnimationDataIfNeeded(GestureHandler *this)
{
  char *v2; // rbp
  std::_Ref_count_base *v3; // rdi
  _QWORD *CompletedCallback; // rax
  std::_Ref_count_base *v5; // rbx
  _BYTE v6[8]; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+38h] [rbp-10h]

  v2 = (char *)this + 248;
  v3 = 0LL;
  if ( *((_QWORD *)this + 31) && GestureHandler::IsGestureInvalid(this) )
  {
    CompletedCallback = (_QWORD *)GestureHandler::MakeCompletedCallback(this, v6, 2LL);
    v3 = (std::_Ref_count_base *)CompletedCallback[1];
    *CompletedCallback = 0LL;
    CompletedCallback[1] = 0LL;
    v5 = v3;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(v2);
    *((_OWORD *)this + 16) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v3 )
    std::_Ref_count_base::_Decref(v5);
}
