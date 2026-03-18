/*
 * XREFs of ?IsCursorScaledByHardware@COverlayContext@@QEBA_NPEBVCD3DDevice@@@Z @ 0x1801DF9E4
 * Callers:
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E7258 (-TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRec.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::IsCursorScaledByHardware(COverlayContext *this, const struct CD3DDevice *a2)
{
  __int64 v3; // rax
  __int64 v5; // rcx

  if ( *((_QWORD *)this + 2411) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, const struct CD3DDevice *))(**((_QWORD **)this + 7) + 256LL))(
           *((_QWORD *)this + 7),
           a2);
    if ( *(_BYTE *)(v3 + 280) || *(int *)(v3 + 272) >= 1 )
      return 1;
  }
  if ( *((_BYTE *)this + 19052) )
  {
    if ( *((_DWORD *)this + 4762) == 1 )
      return *((_BYTE *)this + 45);
    if ( *((_DWORD *)this + 4762) == 2 )
      return 1;
  }
  else
  {
    v5 = *((_QWORD *)this + 1586);
    if ( *((_QWORD *)this + 1587) - v5 == 392 && !*(_DWORD *)(v5 + 372) )
      return (*(_DWORD *)(v5 + 32) & 4) != 0;
  }
  return 0;
}
