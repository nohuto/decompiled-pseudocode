/*
 * XREFs of ??4DrawVisualTreeData@CDrawingContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x180092368
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawVisualTreeData::operator=(__int64 a1, __int64 a2)
{
  void *v2; // r9
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r8
  void *v8; // rdi
  bool v9; // zf
  HANDLE ProcessHeap; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  v5 = *(__int64 **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v4;
  if ( v5 )
  {
    v6 = (v5[1] - *v5) >> 4;
    if ( v6 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v12, *v5, v6);
      v5[1] += -16 * v7;
    }
    v8 = (void *)*v5;
    v9 = *v5 == (_QWORD)(v5 + 3);
    *v5 = (__int64)v2;
    if ( v9 )
      v8 = v2;
    if ( v8 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v8);
    }
    operator delete(v5, 0x38uLL);
  }
  return a1;
}
