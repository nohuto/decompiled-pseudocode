/*
 * XREFs of ?GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18026E060
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@$0A@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18026DD48 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18026DDC0 (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  __int64 i; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h]
  __int128 v14; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+58h] [rbp-8h]
  __int64 v16; // [rsp+90h] [rbp+30h] BYREF

  v3 = *a3;
  v4 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( v3 != a3[1] )
    a3[1] = v3;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a1 + 192) )
    {
      std::vector<CContent::LayoutData>::operator=(a3, (__int64)&v14);
      goto LABEL_13;
    }
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * i);
    if ( v9 )
      break;
LABEL_9:
    ;
  }
  v13 = 0LL;
  v12 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v9 + 296LL))(v9, a2, &v12);
  v4 = v10;
  if ( v10 >= 0 )
  {
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      (char **)&v14,
      &v16,
      *((char **)&v14 + 1),
      v12,
      *((__int64 *)&v12 + 1));
    if ( (_QWORD)v12 )
      std::_Deallocate<16>((void *)v12, 8 * ((v13 - (__int64)v12) >> 3));
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x159u, 0LL);
  if ( (_QWORD)v12 )
    std::_Deallocate<16>((void *)v12, 8 * ((v13 - (__int64)v12) >> 3));
LABEL_13:
  if ( (_QWORD)v14 )
    std::_Deallocate<16>((void *)v14, 8 * ((v15 - (__int64)v14) >> 3));
  return v4;
}
