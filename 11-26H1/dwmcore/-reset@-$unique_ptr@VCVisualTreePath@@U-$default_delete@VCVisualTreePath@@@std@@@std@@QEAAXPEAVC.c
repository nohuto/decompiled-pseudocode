/*
 * XREFs of ?reset@?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAAXPEAVCVisualTreePath@@@Z @ 0x18008FF40
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CVisualTreePath>::reset(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 *v5; // rdi
  HANDLE ProcessHeap; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    v3 = (v2[1] - *v2) >> 4;
    if ( v3 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v7, *v2, v3);
      v2[1] += -16 * v4;
    }
    v5 = (__int64 *)*v2;
    *v2 = 0LL;
    if ( v5 != v2 + 3 )
    {
      if ( v5 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v5);
      }
    }
    operator delete(v2, 0x38uLL);
  }
}
