/*
 * XREFs of ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800E7154
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@$$V@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C2910 (--$emplace_back@$$V@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USin.c)
 *     ??0CCpuClipAntialiasSink@@AEAA@XZ @ 0x1800E8974 (--0CCpuClipAntialiasSink@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::PushSink(
        void ***this,
        const struct CShape *a2,
        struct CCpuClipAntialiasSink *a3)
{
  struct CCpuClipAntialiasSink *v3; // rbx
  void **v6; // rax
  __int64 v7; // rcx
  void **v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // rdi
  CCpuClipAntialiasSink *v12; // rax
  CCpuClipAntialiasSink *v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  if ( a3 )
  {
    (**(void (__fastcall ***)(struct CCpuClipAntialiasSink *))a3)(a3);
LABEL_3:
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::emplace_back<>(this + 2);
    v6 = this[3];
    v7 = (__int64)*(v6 - 54);
    *(v6 - 54) = v3;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    return 0LL;
  }
  v9 = this[3];
  v17 = 0LL;
  v10 = 0x84BDA12F684BDA13uLL * (((char *)v9 - (char *)this[2]) >> 4);
  if ( v10 )
    v11 = (__int64)*(v9 - 54) + 16;
  else
    v11 = 0LL;
  v12 = (CCpuClipAntialiasSink *)operator new(0x40uLL);
  if ( v12 )
  {
    v13 = CCpuClipAntialiasSink::CCpuClipAntialiasSink(v12);
    v3 = v13;
    if ( v13 )
      (**(void (__fastcall ***)(CCpuClipAntialiasSink *))v13)(v13);
  }
  else
  {
    v3 = 0LL;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_3;
  v14 = CCpuClipAntialiasSink::Initialize((__int64)v3, v10, v11, a2, (CMILMatrix *)(this + 113));
  v15 = v14;
  if ( v14 >= 0 )
    goto LABEL_3;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassink.cpp",
    (const char *)(unsigned int)v14);
  if ( v3 )
    (*(void (__fastcall **)(struct CCpuClipAntialiasSink *))(*(_QWORD *)v3 + 8LL))(v3);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
    (const char *)v15);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v17);
  return v15;
}
