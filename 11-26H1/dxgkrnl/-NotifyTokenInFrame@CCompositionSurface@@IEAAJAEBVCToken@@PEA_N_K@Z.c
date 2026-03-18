/*
 * XREFs of ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z @ 0x1400680AC
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x140021340 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?InFrame@CFlipContentToken@@QEAAJPEA_N@Z @ 0x1400554B0 (-InFrame@CFlipContentToken@@QEAAJPEA_N@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x14006AB78 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 * Callees:
 *     ?ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z @ 0x1400459F8 (-ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::NotifyTokenInFrame(
        CCompositionSurface *this,
        const struct CToken *a2,
        bool *a3)
{
  int v5; // ebp
  _QWORD **v6; // rcx
  _QWORD *i; // rax
  struct CCompositionBuffer *v8; // rbx

  *a3 = 0;
  v5 = -1073741275;
  if ( *((_DWORD *)this + 30) )
  {
    v6 = (_QWORD **)((char *)this + 104);
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
    {
      v8 = (struct CCompositionBuffer *)(i - 3);
      if ( *(i - 1) == *((_QWORD *)a2 + 7) )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD *, const struct CToken *, bool *))(*(_QWORD *)v8 + 128LL))(i - 3, a2, a3);
        if ( v5 >= 0 && *a3 )
          CCompositionSurface::ReleaseOlderInactiveBuffers(this, v8);
        return (unsigned int)v5;
      }
    }
  }
  return (unsigned int)v5;
}
