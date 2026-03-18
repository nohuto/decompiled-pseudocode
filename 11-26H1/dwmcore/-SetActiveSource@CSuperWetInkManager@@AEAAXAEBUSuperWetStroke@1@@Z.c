/*
 * XREFs of ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x18021CE8C
 * Callers:
 *     ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180125CD8 (-OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1800E4EBC (McTemplateU0xx_EventWriteTransfer.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x180126738 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     ?ResolveTarget@SuperWetStroke@CSuperWetInkManager@@QEBAJPEAPEAVIMonitorTarget@@@Z @ 0x1801BAB30 (-ResolveTarget@SuperWetStroke@CSuperWetInkManager@@QEBAJPEAPEAVIMonitorTarget@@@Z.c)
 *     ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x1801DADE8 (-TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSuperWetInkManager::SetActiveSource(CSuperWetInkManager *this, CSuperWetInkManager **a2)
{
  CSuperWetInkManager *v3; // rdi
  struct CSuperWetSource *v4; // rdx
  struct CSuperWetInkManager::SuperWetStroke *v5; // rax
  CSuperWetInkManager *v6; // rcx
  CSuperWetInkManager *v7; // rcx
  struct IMonitorTarget *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  v4 = *(struct CSuperWetSource **)this;
  if ( *a2 != *(CSuperWetInkManager **)this )
  {
    if ( v4 )
    {
      v5 = CSuperWetInkManager::TryLookupDataForSource(this, v4);
      this = (CSuperWetInkManager *)*((_QWORD *)v5 + 1);
      if ( this )
      {
        if ( this != a2[1] )
        {
          v8 = 0LL;
          if ( (int)CSuperWetInkManager::SuperWetStroke::ResolveTarget(v5, &v8) >= 0 )
            CSuperWetInkManager::TurnOffScribblingForTarget(v6, v8);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v8);
        }
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0xx_EventWriteTransfer((__int64)this, &EVTDESC_COMPUTESCRIBBLE_SOURCEACTIVE, *a2, *(_QWORD *)v3);
    v7 = *a2;
    *(_QWORD *)v3 = *a2;
    (*(void (__fastcall **)(CSuperWetInkManager *))(*(_QWORD *)v7 + 344LL))(v7);
  }
}
