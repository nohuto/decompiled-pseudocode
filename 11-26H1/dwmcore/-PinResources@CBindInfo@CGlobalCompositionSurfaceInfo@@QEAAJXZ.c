/*
 * XREFs of ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18021779C
 * Callers:
 *     ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801BF858 (-EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z.c)
 *     ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z @ 0x1801DC4FC (-EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x180297DD8 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAVISwapChainRealization@@$0-0@gsl@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 9);
  if ( !((__int64)(*((_QWORD *)this + 10) - (_QWORD)v2) >> 3) )
  {
    v8 = -2003292412;
    v9 = 1494LL;
    goto LABEL_12;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 40LL))(*v2);
  if ( !v3 )
  {
    v8 = -2003304307;
    v9 = 1490LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\globalcompositionsurfaceinfo.cpp",
      (const char *)v8);
    return v8;
  }
  v4 = *((_QWORD *)this + 9);
  gsl::details::extent_type<-1>::extent_type<-1>(v10, (*((_QWORD *)this + 10) - v4) >> 3);
  if ( *(_QWORD *)v10 == -1LL || !v4 && *(_QWORD *)v10 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v11 = v4;
  v5 = CD3DDevice::PinResources(v3, v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_BYTE *)this + 189) = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5CB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\globalcompositionsurfaceinfo.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
