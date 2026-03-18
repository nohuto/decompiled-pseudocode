/*
 * XREFs of ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x18014C738
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180054758 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x180055550 (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXAEA_K@Z @ 0x18014E2C8 (--$_Reallocate@$0A@@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPath.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180279988 (--$_Emplace_reallocate@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPathData@@@WR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetPathData(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPATHDATA *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned __int64 v8; // rsi
  int v9; // r9d
  unsigned int v10; // edi
  unsigned int i; // ebp
  CSharedSectionBase *Resource; // rax
  const void *v14; // r15
  void *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 *v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rdi
  __int64 v22; // r8
  unsigned int v23; // [rsp+20h] [rbp-68h]
  _QWORD v24[2]; // [rsp+30h] [rbp-58h] BYREF
  size_t v25[2]; // [rsp+40h] [rbp-48h] BYREF
  size_t v26[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+18h] BYREF

  v8 = a5 / 0xCuLL;
  if ( *((_DWORD *)a3 + 3)
    && a5 == 12 * v8
    && v8
    && (v20 = *((unsigned int *)a3 + 3),
        v21 = (_QWORD *)((char *)this + 344),
        v22 = *((_QWORD *)this + 44),
        v8 + ((v22 - *((_QWORD *)this + 43)) >> 3) <= v20)
    && (*((_BYTE *)a3 + 8) != 0) != (*v21 == v22) )
  {
    if ( *v21 == v22 )
    {
      v19 = (__int64)(*((_QWORD *)this + 45) - *((_QWORD *)this + 43)) >> 3;
      v27 = *((unsigned int *)a3 + 3);
      if ( v20 > v19 )
        std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Reallocate<0>(v21, &v27);
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= v8 )
        return 0;
      Resource = (CSharedSectionBase *)CResourceTable::GetResource(a2, a4[3 * i], 132LL);
      if ( !Resource )
      {
        v23 = 700;
        goto LABEL_3;
      }
      v14 = CSharedSectionBase::ResolveAllocation(Resource, a4[3 * i + 1], a4[3 * i + 2]);
      if ( !v14 )
      {
        v9 = -2147024882;
        v23 = 706;
        goto LABEL_4;
      }
      v15 = MIDL_user_allocate(0x48uLL);
      if ( !v15 )
        break;
      gsl::details::extent_type<-1>::extent_type<-1>(v26, a4[3 * i + 2]);
      if ( v26[0] == -1LL )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v25[0] = v26[0];
      v25[1] = (size_t)v14;
      v16 = CPathData::CPathData((__int64)v15, g_DeviceManager, v25);
      v24[0] = v16;
      v17 = v16;
      if ( !v16 )
        goto LABEL_24;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v18 = (__int64 *)v21[1];
      if ( v18 == (__int64 *)v21[2] )
      {
        std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CPathData>>(
          v21,
          v18,
          v24);
        v17 = v24[0];
      }
      else
      {
        *v18 = 0LL;
        if ( v18 != v24 )
        {
          *v18 = v17;
          v17 = 0LL;
        }
        v21[1] += 8LL;
      }
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v17 = 0LL;
LABEL_24:
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2C7u, 0LL);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  else
  {
    v23 = 680;
LABEL_3:
    v9 = -2003303421;
LABEL_4:
    v10 = v9;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v23, 0LL);
  }
  return v10;
}
