/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18012BDF4
 * Callers:
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x18012C180 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801345AC (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x180205098 (-ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z.c)
 *     ?CleanupDelayUnpin@CD3DDevice@@AEAAXXZ @ 0x18020AB3C (-CleanupDelayUnpin@CD3DDevice@@AEAAXXZ.c)
 *     ?ImmediateUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x180297870 (-ImmediateUnpinResources@CD3DDevice@@QEAAXV-$span@PEAVISwapChainRealization@@$0-0@gsl@@@Z.c)
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x180297DD8 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAVISwapChainRealization@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  void *v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    while ( v1 != v3 )
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v1++);
    v4 = *(void **)a1;
    v5 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
    v8 = *(void **)a1;
    v6 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    v7 = v6;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v8, &v7);
      v6 = v7;
      v4 = v8;
    }
    operator delete(v4, v6);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
