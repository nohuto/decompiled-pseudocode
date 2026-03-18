/*
 * XREFs of ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14021DEC4
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14005DEB0 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x14019B67C (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x14019C368 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021B160 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x14021E974 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SendKeyboardInput(
        IVRootDeliver::Keyboard::Detail *this,
        struct _UNICODE_STRING *a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        void *a4)
{
  PVOID v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  const struct _KEYBOARD_INPUT_DATA *v9; // r9
  int v10; // edi
  struct _UNICODE_STRING v11; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v12[6]; // [rsp+30h] [rbp-30h] BYREF
  char *v13; // [rsp+98h] [rbp+38h] BYREF

  v6 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  v7 = HMValidateHandleNoSecure((int)a3, 19);
  if ( v7 )
  {
    result = RawInputManagerDeviceObjectResolveHandle(*(char **)(v7 + 24), 3u, 0, (PVOID *)&v13);
    if ( (int)result < 0 )
      return result;
    v6 = v13;
    v11 = *(struct _UNICODE_STRING *)(v13 + 264);
  }
  CIVSerializer::CIVSerializer((__int64)v12, 5);
  v12[0] = &CIVGenericSerializer::`vftable';
  if ( v12[2] )
  {
    v10 = IVRootDeliver::Keyboard::Detail::SerializeKeyboardInputForContainer(
            (IVRootDeliver::Keyboard::Detail *)v12,
            &v11,
            a2,
            v9);
    if ( v10 >= 0 )
      v10 = ivrIVSend((const struct CIVSerializer *)v12, 1LL, this);
  }
  else
  {
    v10 = -1073741801;
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  v12[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v12);
  return (unsigned int)v10;
}
