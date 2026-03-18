/*
 * XREFs of ?ProcessSetExpressions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18026C254
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?ProcessAppendExpressions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x1802497C4 (-ProcessAppendExpressions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOU.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4 (-_Tidy@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@@Z @ 0x1802054D0 (-UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV-$vect.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@$0A@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@V21@1@Z @ 0x18026B7B4 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@.c)
 *     ??4?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026B88C (--4-$vector@PEAVCBaseExpression@@V-$allocator@PEAVCBaseExpression@@@std@@@std@@QEAAAEAV01@$$QEAV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConditionalExpression::ProcessSetExpressions(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        unsigned int *a4,
        unsigned int a5,
        bool a6)
{
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD *i; // rbx
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rsi
  _QWORD *j; // rdi
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = a3;
  v16 = 0LL;
  v17 = 0LL;
  v7 = CResource::UnmarshalResourceArray(a4, a5, 0xAu, (__int64)a2, v15, (__int64)&v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = *((_QWORD *)&v16 + 1);
    for ( i = (_QWORD *)v16; i != (_QWORD *)v10; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
    v11 = (_QWORD *)((char *)this + 312);
    if ( a6 )
    {
      std::vector<CBaseExpression *>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CBaseExpression *>>>,0>(
        (_QWORD *)this + 39,
        &v19,
        *((char **)this + 40),
        (const void *)v16,
        v10);
    }
    else
    {
      v12 = (_QWORD *)*((_QWORD *)this + 40);
      for ( j = (_QWORD *)*v11; j != v12; ++j )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 16LL))(*j);
      std::vector<CBaseExpression *>::operator=(v11, &v16);
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\conditionalexpression.cpp",
      (const char *)(unsigned int)v7);
  }
  std::vector<CLight *>::_Tidy((__int64)&v16);
  return v8;
}
