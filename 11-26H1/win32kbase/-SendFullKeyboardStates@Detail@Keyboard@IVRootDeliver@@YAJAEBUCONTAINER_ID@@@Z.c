/*
 * XREFs of ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1402215B0
 * Callers:
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1402221FC (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1401B4D38 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1401B71EC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1401BA300 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x14022206C (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSeriali.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates(
        IVRootDeliver::Keyboard::Detail *this,
        const struct CONTAINER_ID *a2)
{
  struct CIVGenericSerializer *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  CIVSerializer::CIVSerializer((__int64)v8, 7);
  v8[0] = &CIVGenericSerializer::`vftable';
  if ( v8[2] )
  {
    v6 = IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
           (IVRootDeliver::Keyboard::Detail *)v8,
           v3);
    if ( v6 >= 0 )
      v6 = ivrIVSend((const struct CIVSerializer *)v8, 1u, this);
  }
  else
  {
    v6 = -1073741801;
  }
  v8[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v8, (__int64)v3, v4, v5);
  return (unsigned int)v6;
}
