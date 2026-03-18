/*
 * XREFs of ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x1801DADE8
 * Callers:
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x18021CE8C (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x18021DEF0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 * Callees:
 *     ?DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ @ 0x18020DD14 (-DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSuperWetInkManager::TurnOffScribblingForTarget(CSuperWetInkManager *this, struct IMonitorTarget *a2)
{
  int (__fastcall ***v2)(_QWORD, GUID *, CSuperWetInkManager **); // rax
  int (__fastcall **v3)(_QWORD, GUID *, CSuperWetInkManager **); // rcx
  CComputeScribbleRenderer *v4; // rax
  CSuperWetInkManager *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  v2 = (int (__fastcall ***)(_QWORD, GUID *, CSuperWetInkManager **))(*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 224LL))(a2);
  if ( v2 )
  {
    v3 = *v2;
    v5 = 0LL;
    if ( (*v3)(v2, &GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f, &v5) >= 0 )
    {
      (*(void (__fastcall **)(CSuperWetInkManager *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, 0LL);
      v4 = (CComputeScribbleRenderer *)(*(__int64 (__fastcall **)(CSuperWetInkManager *))(*(_QWORD *)v5 + 56LL))(v5);
      if ( v4 )
        CComputeScribbleRenderer::DeactivateOnNextFrame(v4);
    }
    if ( v5 )
      (*(void (__fastcall **)(CSuperWetInkManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
