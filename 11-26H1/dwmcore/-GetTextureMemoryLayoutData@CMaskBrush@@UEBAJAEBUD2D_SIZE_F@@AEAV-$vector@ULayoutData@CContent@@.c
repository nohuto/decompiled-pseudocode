/*
 * XREFs of ?GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18027AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@$0A@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18026DD48 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18026DDC0 (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMaskBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF

  v3 = *a3;
  v4 = 0;
  v15 = 0LL;
  v16 = 0LL;
  if ( v3 != a3[1] )
    a3[1] = v3;
  v8 = *(_QWORD *)(a1 + 120);
  if ( v8 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v8 + 296LL))(v8, a2, &v13);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x79u, 0LL);
      goto LABEL_16;
    }
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      (char **)&v15,
      &v17,
      *((char **)&v15 + 1),
      v13,
      *((__int64 *)&v13 + 1));
    if ( (_QWORD)v13 )
      std::_Deallocate<16>((void *)v13, 8 * ((v14 - (__int64)v13) >> 3));
  }
  v10 = *(_QWORD *)(a1 + 112);
  if ( !v10 )
  {
LABEL_11:
    std::vector<CContent::LayoutData>::operator=(a3, (__int64)&v15);
    goto LABEL_12;
  }
  v14 = 0LL;
  v13 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v10 + 296LL))(v10, a2, &v13);
  v4 = v11;
  if ( v11 >= 0 )
  {
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      (char **)&v15,
      &v17,
      *((char **)&v15 + 1),
      v13,
      *((__int64 *)&v13 + 1));
    if ( (_QWORD)v13 )
      std::_Deallocate<16>((void *)v13, 8 * ((v14 - (__int64)v13) >> 3));
    goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x80u, 0LL);
LABEL_16:
  if ( (_QWORD)v13 )
    std::_Deallocate<16>((void *)v13, 8 * ((v14 - (__int64)v13) >> 3));
LABEL_12:
  if ( (_QWORD)v15 )
    std::_Deallocate<16>((void *)v15, 8 * ((v16 - (__int64)v15) >> 3));
  return v4;
}
