/*
 * XREFs of ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180218658
 * Callers:
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180127C68 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1802664B4 (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DelayUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@U_LUID@@II@Z @ 0x18029764C (-DelayUnpinResources@CD3DDevice@@QEAAXV-$span@PEAVISwapChainRealization@@$0-0@gsl@@U_LUID@@II@Z.c)
 *     ?ImmediateUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x180297870 (-ImmediateUnpinResources@CD3DDevice@@QEAAXV-$span@PEAVISwapChainRealization@@$0-0@gsl@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        char a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // r14
  unsigned int v9; // r12d
  __int64 v10; // rbx
  int v11; // r15d
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // [rsp+20h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF

  if ( *((_BYTE *)this + 189) )
  {
    if ( !a2 )
    {
      v3 = *((_QWORD *)this + 24);
      if ( v3 )
      {
        v18 = 0LL;
        v4 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
               v3,
               &GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc,
               &v18);
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5E4,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\globalcompositionsurfaceinfo.cpp",
            (const char *)(unsigned int)v4,
            v14);
        if ( v18 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
          v6 = v5;
          if ( v5 )
          {
            if ( !*(_DWORD *)(v5 + 1124) )
            {
              v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 104LL))(v18);
              v8 = *((_QWORD *)this + 9);
              v9 = *((_DWORD *)this + 52);
              v10 = *((_QWORD *)this + 25);
              v11 = v7 + 1;
              gsl::details::extent_type<-1>::extent_type<-1>(&v15, (*((_QWORD *)this + 10) - v8) >> 3);
              if ( v15 == -1 || !v8 && v15 )
              {
                ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                __debugbreak();
              }
              v16 = v8;
              CD3DDevice::DelayUnpinResources(v6, &v15, v10, v9, v11);
              *((_BYTE *)this + 189) = 0;
            }
          }
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
      }
    }
    if ( *((_BYTE *)this + 189) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 9) + 40LL))(**((_QWORD **)this + 9));
      if ( v12 )
      {
        v13 = *((_QWORD *)this + 9);
        gsl::details::extent_type<-1>::extent_type<-1>(&v15, (*((_QWORD *)this + 10) - v13) >> 3);
        if ( v15 == -1 || !v13 && v15 )
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        v16 = v13;
        CD3DDevice::ImmediateUnpinResources(v12, &v15);
      }
    }
    *((_BYTE *)this + 189) = 0;
  }
}
