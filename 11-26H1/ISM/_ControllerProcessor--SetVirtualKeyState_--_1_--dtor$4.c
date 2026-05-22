/*
 * XREFs of _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$4 @ 0x1801D6F20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VHapticDeviceCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A5FF0 (--1-$ComPtr@VHapticDeviceCollection@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall ControllerProcessor::SetVirtualKeyState_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 512) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 512) &= ~1u;
    return Microsoft::WRL::ComPtr<HapticDeviceCollection>::~ComPtr<HapticDeviceCollection>(a2 + 32);
  }
  return result;
}
