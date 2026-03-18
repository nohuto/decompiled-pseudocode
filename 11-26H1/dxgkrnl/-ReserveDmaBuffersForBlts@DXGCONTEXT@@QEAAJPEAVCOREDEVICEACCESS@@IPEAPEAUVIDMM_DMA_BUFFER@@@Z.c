/*
 * XREFs of ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14029C2EC
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x14029BEC8 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14029AA24 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x14029C4AC (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 */

__int64 __fastcall DXGCONTEXT::ReserveDmaBuffersForBlts(
        DXGCONTEXT *this,
        struct COREDEVICEACCESS *a2,
        unsigned int a3,
        struct VIDMM_DMA_BUFFER **a4)
{
  __int64 v5; // rbp
  __int64 v8; // rdi
  unsigned int i; // ebx
  int v11; // eax

  v5 = a3;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7936;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7936LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 46) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7937;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_ppBltDmaBuffers", 7937LL, 0LL, 0LL, 0LL, 0LL);
  }
  LODWORD(v8) = 0;
  if ( (_DWORD)v5 )
  {
    memset(a4, 0, 8 * v5);
    *((_QWORD *)this + 46) = a4;
    *((_DWORD *)this + 94) = v5;
  }
  for ( i = 0; i < (unsigned int)v5; ++i )
  {
    v11 = DXGCONTEXT::AcquireDmaBuffer(this, &a4[i], a2, 1);
    v8 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 7953;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire DMA buffer 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGCONTEXT::UnreserveDmaBuffersForBlts(this);
      return (unsigned int)v8;
    }
  }
  return (unsigned int)v8;
}
