/*
 * XREFs of ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804C3A44
 * Callers:
 *     ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C1B20 (-DragOver@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskin.c)
 *     ?Drop@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C1D00 (-Drop@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingVie.c)
 *     ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C2880 (-PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 *     ?PointerHover@CMultitaskingViewElementBase@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C2940 (-PointerHover@CMultitaskingViewElementBase@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C2B20 (-PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInput.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C3AB0 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?v_OnPointerMove@CVirtualDesktopContainerElement@@MEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DE950 (-v_OnPointerMove@CVirtualDesktopContainerElement@@MEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?v_PreHover@CVirtualDesktopContainerElement@@MEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DE9B0 (-v_PreHover@CVirtualDesktopContainerElement@@MEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::_MapArgumentsToChild(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  _DWORD *v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h]
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = a3[1];
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 120LL))(a1, &v9);
  v8 = *a3;
  *(_QWORD *)(a2 + 8) = v4;
  LODWORD(v8) = *v6 + v8;
  HIDWORD(v8) += v6[1];
  *(_QWORD *)a2 = v8;
  *(_DWORD *)(a2 + 16) = *((_DWORD *)a3 + 4);
  return a2;
}
