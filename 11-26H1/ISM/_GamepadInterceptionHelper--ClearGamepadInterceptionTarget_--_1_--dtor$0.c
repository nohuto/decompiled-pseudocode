/*
 * XREFs of _GamepadInterceptionHelper::ClearGamepadInterceptionTarget_::_1_::dtor$0 @ 0x1801DADD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GamepadInterceptionHelper::ClearGamepadInterceptionTarget_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>::~ComPtr<IGamepadInterceptionTarget>((_QWORD *)(a2 + 80));
}
