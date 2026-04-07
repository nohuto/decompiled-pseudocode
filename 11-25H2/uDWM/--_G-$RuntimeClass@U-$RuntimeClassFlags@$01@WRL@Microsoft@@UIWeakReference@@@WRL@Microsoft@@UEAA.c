/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800EA8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference>::`scalar deleting destructor'(
        _DWORD *a1,
        const struct std::nothrow_t *a2)
{
  a1[3] = -1073741823;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, a2);
  return a1;
}
