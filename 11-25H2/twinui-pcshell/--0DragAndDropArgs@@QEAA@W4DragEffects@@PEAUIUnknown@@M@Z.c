/*
 * XREFs of ??0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z @ 0x1804C8AB0
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C901C (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C9980 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall DragAndDropArgs::DragAndDropArgs(__int64 a1, int a2, __int64 a3, float a4)
{
  __int64 *v5; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  v5 = (__int64 *)(a1 + 8);
  *v5 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v5, a3);
  *(float *)(a1 + 20) = a4;
  result = a1;
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}
