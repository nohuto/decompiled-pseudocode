/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18016BC30
 * Callers:
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18016B7F4 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

int __fastcall detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  LPVOID v2; // r15
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  HANDLE v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  SIZE_T v16; // rbx
  HANDLE ProcessHeap; // rax
  __int128 v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-28h]
  LPVOID v23; // [rsp+60h] [rbp-18h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = a1[1];
  v5 = (a1[2] - v4) >> 4;
  if ( v5 < a2 )
  {
    v6 = (v4 - *a1) >> 4;
    v7 = (__int64)(a1[2] - *a1) >> 4;
    v8 = v6 + a2;
    if ( v6 + a2 >= v6 )
    {
      v14 = v7 >> 1;
      v23 = v2;
      if ( v7 <= ~(v7 >> 1) )
      {
        v15 = v14 + v7;
        if ( v14 + v7 < v8 )
          v15 = v6 + a2;
        v8 = v15;
      }
      v16 = 16 * v8;
      if ( !is_mul_ok(v8, 0x10uLL) )
        v16 = -1LL;
      ProcessHeap = GetProcessHeap();
      v2 = HeapAlloc(ProcessHeap, 0, v16);
      if ( !v2 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v19, (__int64)v2, v6);
    v9 = a1[1];
    v10 = (_QWORD *)*a1;
    v21 = v19;
    v22 = v20;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v21, (v9 - (__int64)v10) >> 4);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
      v10,
      v9,
      (void *)(v19 + 16 * v20));
    v11 = (_QWORD *)*a1;
    LODWORD(v5) = (_DWORD)a1 + 24;
    *a1 = v2;
    if ( v11 != a1 + 3 && v11 )
    {
      v13 = GetProcessHeap();
      LODWORD(v5) = HeapFree(v13, 0, v11);
    }
    v12 = *a1 + 16 * v6;
    a1[2] = *a1 + 16 * v8;
    a1[1] = v12;
  }
  return v5;
}
