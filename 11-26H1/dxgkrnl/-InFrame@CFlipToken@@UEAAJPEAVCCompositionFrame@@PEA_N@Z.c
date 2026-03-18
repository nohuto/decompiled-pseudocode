/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1400A25A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x140021DC0 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x140039724 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z @ 0x140039F40 (-SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x140067210 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x14006AB78 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipToken::InFrame(CompositionSurfaceObject **this, struct CCompositionFrame *a2, bool *a3)
{
  int CanReleaseToFrame; // ebx
  CompositionSurfaceObject *v7; // rbx
  CompositionSurfaceObject *v8; // rdx
  __int64 v9; // rax
  bool v11; // [rsp+48h] [rbp+10h] BYREF

  CanReleaseToFrame = CFlipToken::CanReleaseToFrame(
                        (CFlipToken *)this,
                        (struct CCompositionFrame *)((char *)a2 + 32),
                        a3);
  if ( CanReleaseToFrame >= 0 && *a3 )
  {
    v11 = 0;
    *((_DWORD *)this + 6) = 3;
    CFlipToken::TraceStateChanged((CFlipToken *)this);
    v7 = this[6];
    (*(void (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
    CanReleaseToFrame = CompositionSurfaceObject::NotifyTokenInFrame(v7, (const struct CToken *)this, &v11);
    if ( CanReleaseToFrame >= 0 )
    {
      v8 = this[14];
      *((_BYTE *)this + 577) = v11;
      v9 = (*((__int64 (__fastcall **)(CompositionSurfaceObject **, CompositionSurfaceObject *, _QWORD, _QWORD))*this
            + 17))(
             this,
             v8,
             *((_QWORD *)a2 + 6),
             *((_QWORD *)a2 + 15));
      CompositionSurfaceObject::SetSyncRefreshTime(this[6], v9);
      CFlipToken::SignalGpuFenceAndPresentLimitSemaphore((CFlipToken *)this, 0);
    }
  }
  else
  {
    ++*((_DWORD *)this + 10);
  }
  return (unsigned int)CanReleaseToFrame;
}
