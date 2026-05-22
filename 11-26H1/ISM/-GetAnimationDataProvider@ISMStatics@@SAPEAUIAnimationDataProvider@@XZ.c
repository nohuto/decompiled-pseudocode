/*
 * XREFs of ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180099660
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180055204 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x18006BB3C (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180149DB0 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 *     ?StartAnimation@GestureHandler@@QEAAXI_N@Z @ 0x180149F30 (-StartAnimation@GestureHandler@@QEAAXI_N@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x18014E8E4 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180150BFC (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x180153DE4 (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180155244 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x18015755C (-FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180158B80 (-StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@AnimationDataProvider@@SA?AV?$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ @ 0x180088AC8 (-Create@AnimationDataProvider@@SA-AV-$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ.c)
 */

struct IAnimationDataProvider *ISMStatics::GetAnimationDataProvider(void)
{
  struct IAnimationDataProvider *result; // rax
  __int64 *v1; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  result = ISMStatics::s_animationDataProvider;
  if ( !ISMStatics::s_animationDataProvider )
  {
    v1 = AnimationDataProvider::Create(&v2);
    ISMStatics::s_animationDataProvider = (struct IAnimationDataProvider *)*v1;
    *v1 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v2);
    return ISMStatics::s_animationDataProvider;
  }
  return result;
}
