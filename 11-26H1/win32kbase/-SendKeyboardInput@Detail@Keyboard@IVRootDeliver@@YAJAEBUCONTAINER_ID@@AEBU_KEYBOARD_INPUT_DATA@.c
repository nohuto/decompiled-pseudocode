/*
 * XREFs of ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x140221638
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14010FC20 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1401B4D38 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1401B71EC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1401BA300 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x140222158 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SendKeyboardInput(
        IVRootDeliver::Keyboard::Detail *this,
        struct _UNICODE_STRING *a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        void *a4)
{
  const struct _UNICODE_STRING *v4; // rdi
  PVOID v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  const struct _KEYBOARD_INPUT_DATA *v11; // r9
  int v12; // edi
  struct _UNICODE_STRING v13; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v14[6]; // [rsp+30h] [rbp-30h] BYREF
  char *v15; // [rsp+98h] [rbp+38h] BYREF

  v4 = a2;
  v6 = 0LL;
  LOBYTE(a2) = 19;
  v15 = 0LL;
  v13 = 0LL;
  v7 = HMValidateHandleNoSecure((__int64)a3, (__int64)a2);
  if ( v7 )
  {
    result = RawInputManagerDeviceObjectResolveHandle(*(char **)(v7 + 24), 3u, 0, (PVOID *)&v15);
    if ( (int)result < 0 )
      return result;
    v6 = v15;
    v13 = *(struct _UNICODE_STRING *)(v15 + 264);
  }
  CIVSerializer::CIVSerializer((__int64)v14, 5);
  v14[0] = &CIVGenericSerializer::`vftable';
  if ( v14[2] )
  {
    v12 = IVRootDeliver::Keyboard::Detail::SerializeKeyboardInputForContainer(
            (IVRootDeliver::Keyboard::Detail *)v14,
            &v13,
            v4,
            v11);
    if ( v12 >= 0 )
      v12 = ivrIVSend((const struct CIVSerializer *)v14, 1u, this);
  }
  else
  {
    v12 = -1073741801;
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  v14[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v14, v9, v10, (__int64)v11);
  return (unsigned int)v12;
}
