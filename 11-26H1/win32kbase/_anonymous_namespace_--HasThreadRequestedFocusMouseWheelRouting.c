/*
 * XREFs of _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1401452AC
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1401450CC (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1401452E4 (GetAppCompatFlags2QuadWord.c)
 */

bool __fastcall anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 456) + 808LL) & 0x8000LL) != 0
      || (GetAppCompatFlags2QuadWord(a1) & 0x10000000000000LL) != 0;
}
