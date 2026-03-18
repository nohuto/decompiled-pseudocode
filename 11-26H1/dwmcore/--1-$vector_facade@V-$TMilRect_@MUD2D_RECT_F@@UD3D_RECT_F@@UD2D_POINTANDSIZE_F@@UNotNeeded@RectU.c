/*
 * XREFs of ??1?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801802F0
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 */

void __fastcall detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::~vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  __int64 *v1; // r9
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 *v4; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = (a1[1] - *a1) >> 4;
  if ( v2 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v6, *a1, v2);
    v1[1] += -16 * v3;
  }
  v4 = (__int64 *)*v1;
  *v1 = 0LL;
  if ( v4 != v1 + 3 )
  {
    if ( v4 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
  }
}
