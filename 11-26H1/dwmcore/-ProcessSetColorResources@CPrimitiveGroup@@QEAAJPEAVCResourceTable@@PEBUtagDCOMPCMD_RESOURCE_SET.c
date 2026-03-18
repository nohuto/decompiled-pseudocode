/*
 * XREFs of ?ProcessSetColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027DF94
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?ProcessAppendColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x18024977C (-ProcessAppendColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18018E63C (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ??$_Insert_counted_range@PEAPEAVCBaseExpression@@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@PEAPEAVCBaseExpression@@_K@Z @ 0x18019F4C4 (--$_Insert_counted_range@PEAPEAVCBaseExpression@@@-$vector@PEAVCBaseExpression@@V-$allocator@PEA.c)
 *     ?_Tidy@?$vector@PEAVCPrimitiveColor@@V?$allocator@PEAVCPrimitiveColor@@@std@@@std@@AEAAXXZ @ 0x180200214 (-_Tidy@-$vector@PEAVCPrimitiveColor@@V-$allocator@PEAVCPrimitiveColor@@@std@@@std@@AEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1802003AC (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@@Z @ 0x1802054D0 (-UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV-$vect.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetColorResources(
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
  struct CResource **i; // rdi
  __int128 *v11; // rdi
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  char *v15; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  v7 = CResource::UnmarshalResourceArray(a4, a5, 0x5Du, (__int64)a2, v13, (__int64)&v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = v14;
    for ( i = (struct CResource **)v14; i != *((struct CResource ***)&v9 + 1); ++i )
      CResource::RegisterNotifier((CResource *)this, *i);
    v11 = (__int128 *)(this + 20);
    if ( a6 )
    {
      std::vector<CBaseExpression *>::_Insert_counted_range<CBaseExpression * *>(
        (__int64)(this + 20),
        this[21],
        (const void *)v9,
        (__int64)(*((_QWORD *)&v9 + 1) - v9) >> 3);
    }
    else
    {
      CPrimitiveGroup::ReleasePrimitiveCaches((CPrimitiveGroup *)this, 1);
      CPrimitiveGroup::ReleaseColorResources((CPrimitiveGroup *)this);
      if ( v11 != &v14 )
      {
        std::vector<CPrimitiveColor *>::_Tidy((__int64)(this + 20));
        this[22] = v15;
        v14 = 0LL;
        *(_QWORD *)v11 = v9;
        this[21] = (char *)*((_QWORD *)&v9 + 1);
        v15 = 0LL;
      }
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\primitivegroup.cpp",
      (const char *)(unsigned int)v7);
  }
  std::vector<CPrimitiveColor *>::_Tidy((__int64)&v14);
  return v8;
}
