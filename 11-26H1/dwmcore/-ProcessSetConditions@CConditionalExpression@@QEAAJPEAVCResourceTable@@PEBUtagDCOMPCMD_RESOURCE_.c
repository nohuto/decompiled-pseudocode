/*
 * XREFs of ?ProcessSetConditions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18026C104
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?ProcessAppendConditions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x1802497A0 (-ProcessAppendConditions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOUR.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert_counted_range@PEAPEAVCBaseExpression@@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@PEAPEAVCBaseExpression@@_K@Z @ 0x18019F4C4 (--$_Insert_counted_range@PEAPEAVCBaseExpression@@@-$vector@PEAVCBaseExpression@@V-$allocator@PEA.c)
 *     ?_Tidy@?$vector@PEAVCPrimitiveColor@@V?$allocator@PEAVCPrimitiveColor@@@std@@@std@@AEAAXXZ @ 0x180200214 (-_Tidy@-$vector@PEAVCPrimitiveColor@@V-$allocator@PEAVCPrimitiveColor@@@std@@@std@@AEAAXXZ.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@@Z @ 0x1802054D0 (-UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV-$vect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConditionalExpression::ProcessSetConditions(
        char **this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        unsigned int *a4,
        unsigned int a5,
        bool a6)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v9; // kr00_16
  _QWORD *i; // rbx
  char *v11; // rbx
  char *v12; // rbp
  char *j; // r14
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  v7 = CResource::UnmarshalResourceArray(a4, a5, 0x32u, (__int64)a2, v15, (__int64)&v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = v16;
    for ( i = (_QWORD *)v16; i != *((_QWORD **)&v9 + 1); ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
    v11 = (char *)(this + 36);
    if ( a6 )
    {
      std::vector<CBaseExpression *>::_Insert_counted_range<CBaseExpression * *>(
        (__int64)(this + 36),
        this[37],
        (const void *)v9,
        (__int64)(*((_QWORD *)&v9 + 1) - v9) >> 3);
    }
    else
    {
      v12 = this[37];
      for ( j = *(char **)v11; j != v12; j += 8 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)j + 16LL))(*(_QWORD *)j);
      if ( v11 != (char *)&v16 )
      {
        std::vector<CPrimitiveColor *>::_Tidy((__int64)v11);
        *((_QWORD *)v11 + 2) = v17;
        v16 = 0LL;
        *(_OWORD *)v11 = v9;
        v17 = 0LL;
      }
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\conditionalexpression.cpp",
      (const char *)(unsigned int)v7);
  }
  std::vector<CPrimitiveColor *>::_Tidy((__int64)&v16);
  return v8;
}
