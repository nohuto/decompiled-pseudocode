/*
 * XREFs of ?DisableHardwareCursor@COverlayContext@@IEAAXXZ @ 0x18021C0E8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020A23C (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z @ 0x1802915FC (-DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::DisableHardwareCursor(COverlayContext *this)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // ebp
  struct _LUID *v6; // rax
  CCursorState *v7; // rcx
  CResource *v8; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2392) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 280LL))(*((_QWORD *)this + 7));
    v3 = v2;
    if ( v2 )
    {
      v4 = *((_QWORD *)this + 2392);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 240LL))(v2);
      v6 = (struct _LUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 232LL))(v3, &v9);
      v7 = *(CCursorState **)(v4 + 696);
      if ( v7 )
        CCursorState::DisableHardwareCursor(v7, *v6, v5);
    }
    v8 = (CResource *)*((_QWORD *)this + 2392);
    *((_QWORD *)this + 2392) = 0LL;
    if ( v8 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v8);
  }
}
