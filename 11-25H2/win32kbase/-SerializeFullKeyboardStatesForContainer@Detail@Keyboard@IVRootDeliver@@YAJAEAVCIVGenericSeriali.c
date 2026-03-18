/*
 * XREFs of ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x14021E928
 * Callers:
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x14021DE3C (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z @ 0x140219AF4 (-IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x14022411C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
        IVRootDeliver::Keyboard::Detail *this,
        struct CIVGenericSerializer *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx

  W32GetUserSessionState(this, a2);
  *((_DWORD *)this + 2) += 64;
  W32GetUserSessionState(v4, v3);
  *((_DWORD *)this + 2) += 64;
  result = CIVSerializer::ExtendByMeasuredExtra(this);
  if ( (int)result >= 0 )
    return IVSerializeFullKeyboardStates(this, v6);
  return result;
}
