/*
 * XREFs of ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1800553F4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180054758 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x180055550 (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x180055580 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathGeometry::ProcessSetPath(
        CPathGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PATHGEOMETRY_SETPATH *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // esi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  CSharedSectionBase *v10; // rbx
  __int64 v11; // rcx
  const void *v12; // rdi
  void *v13; // rbx
  const struct CPathData *v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-28h]
  size_t v17[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  if ( v3
    && v3 < *((_DWORD *)a2 + 7)
    && (v7 = *((_DWORD *)a2 + 6) * v3, v8 = *((_QWORD *)a2 + 5), v9 = (unsigned int)v7, *(_DWORD *)(v7 + v8))
    && (v11 = *(_QWORD *)(v7 + v8 + 8)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL))(v11, 132LL) )
  {
    v10 = *(CSharedSectionBase **)(v9 + v8 + 8);
  }
  else
  {
    v10 = 0LL;
  }
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 17);
  if ( v10 )
  {
    v12 = CSharedSectionBase::ResolveAllocation(v10, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( v12 )
    {
      v13 = MIDL_user_allocate(0x48uLL);
      if ( v13 )
      {
        gsl::details::extent_type<-1>::extent_type<-1>(v17, *((unsigned int *)a3 + 4));
        if ( v17[0] == -1LL )
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        v17[1] = (size_t)v12;
        v14 = (const struct CPathData *)CPathData::CPathData((__int64)v13, g_DeviceManager, v17);
        if ( v14 )
        {
          CPathGeometry::SetPath(this, v14);
          return v4;
        }
      }
      v16 = 30;
    }
    else
    {
      v16 = 25;
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v16, 0LL);
  }
  return v4;
}
