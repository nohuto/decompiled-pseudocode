/*
 * XREFs of ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x140225A6C
 * Callers:
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1402219A4 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x140221B3C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x140221C60 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x140221E14 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x140221FD0 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICOD.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x14022206C (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSeriali.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x140222158 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@.c)
 * Callees:
 *     UserReAllocPool @ 0x140043400 (UserReAllocPool.c)
 */

__int64 __fastcall CIVSerializer::ExtendByMeasuredExtra(CIVSerializer *this)
{
  int v1; // eax
  unsigned int v3; // ecx
  _DWORD *v4; // rax
  int v5; // edx

  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
    return 0LL;
  v3 = *((_DWORD *)this + 8);
  if ( v3 + v1 >= v3 )
  {
    v4 = (_DWORD *)UserReAllocPool(*((char **)this + 3), v3, v3 + v1, 1702057545LL);
    *((_QWORD *)this + 3) = v4;
    if ( v4 )
    {
      v5 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 8) += v5;
      *((_DWORD *)this + 9) += v5;
      *((_QWORD *)this + 2) = v4 + 4;
      *v4 = *((_DWORD *)this + 8) - 16;
      return 0LL;
    }
  }
  return 3221225495LL;
}
