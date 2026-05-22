/*
 * XREFs of ?FindClosestShapeBitmap@SystemCursorShape2@@QEAA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@I@Z @ 0x1800FBB4C
 * Callers:
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800FCD58 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x1800646B0 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180065234 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB28 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800F7A00 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800FA04C (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall SystemCursorShape2::FindClosestShapeBitmap(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int128 v6; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rbx
  int *v9; // r8
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE v16[16]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h]
  int v19; // [rsp+70h] [rbp+20h] BYREF

  v17 = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  v7 = *(_QWORD ***)(a1 + 24);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = (int *)(v8 + 2);
    if ( *((_QWORD *)&v6 + 1) == (_QWORD)v6 )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(&v17, *((__int64 *)&v6 + 1), v9);
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&v17 + 1);
    }
    else
    {
      **((_DWORD **)&v6 + 1) = *v9;
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&v17 + 1) + 4LL;
      *((_QWORD *)&v17 + 1) += 4LL;
    }
    v8 = (_QWORD *)*v8;
    *(_QWORD *)&v6 = v18;
  }
  v10 = *((_QWORD *)&v6 + 1) - v17;
  if ( *((_QWORD *)&v6 + 1) == (_QWORD)v17 )
  {
    *a2 = v10;
    a2[1] = v10;
  }
  else
  {
    std::_Sort_unchecked<unsigned int *,std::less<void>>((int *)v17, *((int **)&v6 + 1), v10 >> 2, 0);
    v11 = -1LL;
    v12 = (__int64)(*((_QWORD *)&v17 + 1) - v17) >> 2;
    v13 = 1LL;
    if ( v12 <= 1 )
      goto LABEL_16;
    do
    {
      if ( a3 >= *(_DWORD *)(v17 + 4 * v13 - 4) && a3 <= *(_DWORD *)(v17 + 4 * v13) )
      {
        v11 = v13 - 1;
        if ( (float)((float)((float)*(int *)(v17 + 4 * v13) + (float)*(int *)(v17 + 4 * v13 - 4)) * 0.5) < (float)(int)a3 )
          v11 = v13;
      }
      ++v13;
    }
    while ( v13 < v12 );
    if ( v11 == -1 )
    {
LABEL_16:
      if ( a3 >= *(_DWORD *)v17 )
        v11 = v12 - 1;
      else
        v11 = 0LL;
    }
    v19 = *(_DWORD *)(v17 + 4 * v11);
    v14 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
            (float *)(a1 + 16),
            (__int64)v16,
            (unsigned __int8 *)&v19);
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(
      a2,
      (_QWORD *)(*(_QWORD *)v14 + 24LL));
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64 *)&v17);
  return a2;
}
