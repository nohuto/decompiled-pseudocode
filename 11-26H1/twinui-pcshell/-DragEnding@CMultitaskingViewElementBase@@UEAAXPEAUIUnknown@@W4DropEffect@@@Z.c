/*
 * XREFs of ?DragEnding@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1804C1A10
 * Callers:
 *     ?DragEnding@CSwitchItemElement@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1804BFB90 (-DragEnding@CSwitchItemElement@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z.c)
 *     ?DragEnding@CMultitaskingViewFrameElement@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1804C9E60 (-DragEnding@CMultitaskingViewFrameElement@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::DragEnding(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 result; // rax
  _QWORD *v7; // rdi

  v3 = *(_QWORD **)(a1 + 16);
  result = *(_QWORD *)(a1 + 24);
  v7 = &v3[result];
  while ( v3 != v7 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v3 + 440LL))(*v3, a2, a3);
    ++v3;
  }
  return result;
}
