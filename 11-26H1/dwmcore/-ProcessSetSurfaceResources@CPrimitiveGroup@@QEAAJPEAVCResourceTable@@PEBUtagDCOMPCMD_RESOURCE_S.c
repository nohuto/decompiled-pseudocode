/*
 * XREFs of ?ProcessSetSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180205398
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?ProcessAppendSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x1802498F8 (-ProcessAppendSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURC.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4 (-_Tidy@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18018E63C (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ??$_Insert_counted_range@PEAPEAVCVectorShape@@@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCVectorShape@@@std@@@std@@@1@PEAPEAVCVectorShape@@_K@Z @ 0x1801C6474 (--$_Insert_counted_range@PEAPEAVCVectorShape@@@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVect.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180200344 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@@Z @ 0x1802054D0 (-UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV-$vect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetSurfaceResources(
        char **this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        const void *a4,
        unsigned int a5,
        bool a6)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v9; // kr00_16
  _QWORD *i; // rdi
  __int128 *v11; // rdi
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  char *v14; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v13 = 0LL;
  v14 = 0LL;
  v7 = CResource::UnmarshalResourceArray((_DWORD)a4, a5, 31, (_DWORD)a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = v13;
    for ( i = (_QWORD *)v13; i != *((_QWORD **)&v13 + 1); ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
    v11 = (__int128 *)(this + 17);
    if ( a6 )
    {
      std::vector<CVectorShape *>::_Insert_counted_range<CVectorShape * *>(
        (__int64)(this + 17),
        this[18],
        (const void *)v13,
        (__int64)(*((_QWORD *)&v13 + 1) - v13) >> 3);
    }
    else
    {
      CPrimitiveGroup::ReleasePrimitiveCaches((CPrimitiveGroup *)this, 1);
      CPrimitiveGroup::ReleaseSurfaceResources((CPrimitiveGroup *)this);
      if ( v11 != &v13 )
      {
        std::vector<CLight *>::_Tidy((__int64)(this + 17));
        this[19] = v14;
        v13 = 0LL;
        *(_QWORD *)v11 = v9;
        this[18] = (char *)*((_QWORD *)&v9 + 1);
        v14 = 0LL;
      }
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\primitivegroup.cpp",
      (const char *)(unsigned int)v7);
  }
  std::vector<CLight *>::_Tidy((__int64)&v13);
  return v8;
}
