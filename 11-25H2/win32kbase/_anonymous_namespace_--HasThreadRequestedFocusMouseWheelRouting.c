/*
 * XREFs of _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1400B9C04
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x14021F75C (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1400B9C3C (GetAppCompatFlags2QuadWord.c)
 */

bool __fastcall anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 464) + 808LL) & 0x8000LL) != 0
      || (GetAppCompatFlags2QuadWord() & 0x10000000000000LL) != 0;
}
