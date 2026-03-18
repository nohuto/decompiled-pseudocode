/*
 * XREFs of ?GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180289670
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@$0A@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18026DD48 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18026DDC0 (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClipBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v6; // rcx
  int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h]
  __int128 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h]
  __int64 v13; // [rsp+70h] [rbp+10h] BYREF

  v3 = *a3;
  v4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( v3 != a3[1] )
    a3[1] = v3;
  v6 = *(_QWORD *)(a1 + 104);
  if ( !v6 )
    goto LABEL_7;
  v9 = 0LL;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v6 + 296LL))(v6, a2, &v9);
  v4 = v7;
  if ( v7 >= 0 )
  {
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      (char **)&v11,
      &v13,
      *((char **)&v11 + 1),
      v9,
      *((__int64 *)&v9 + 1));
    if ( (_QWORD)v9 )
      std::_Deallocate<16>((void *)v9, 8 * ((v10 - (__int64)v9) >> 3));
LABEL_7:
    std::vector<CContent::LayoutData>::operator=(a3, (__int64)&v11);
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x4Du, 0LL);
  if ( (_QWORD)v9 )
    std::_Deallocate<16>((void *)v9, 8 * ((v10 - (__int64)v9) >> 3));
LABEL_8:
  if ( (_QWORD)v11 )
    std::_Deallocate<16>((void *)v11, 8 * ((v12 - (__int64)v11) >> 3));
  return v4;
}
