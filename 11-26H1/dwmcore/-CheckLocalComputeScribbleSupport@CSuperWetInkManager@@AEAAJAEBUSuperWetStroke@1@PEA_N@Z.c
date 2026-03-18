/*
 * XREFs of ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x1801BA9A4
 * Callers:
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801BA598 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?ResolveTarget@SuperWetStroke@CSuperWetInkManager@@QEBAJPEAPEAVIMonitorTarget@@@Z @ 0x1801BAB30 (-ResolveTarget@SuperWetStroke@CSuperWetInkManager@@QEBAJPEAPEAVIMonitorTarget@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::CheckLocalComputeScribbleSupport(
        CSuperWetInkManager *this,
        const struct CSuperWetInkManager::SuperWetStroke *a2,
        bool *a3)
{
  bool v3; // zf
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rax
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // r10
  struct IMonitorTarget *v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF

  v10 = this;
  v3 = CCommonRegistryData::SuperWetEnabled == 0;
  *a3 = 0;
  if ( !v3 )
  {
    v10 = 0LL;
    if ( (int)CSuperWetInkManager::SuperWetStroke::ResolveTarget(a2, &v10) >= 0 )
    {
      v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v10 + 224LL))(v10);
      v7 = v6;
      if ( v6 )
      {
        v11 = 0LL;
        if ( (**v6)(v6, &GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc, &v11) < 0 )
        {
LABEL_5:
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          if ( v10 )
            (*(void (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v10 + 16LL))(v10);
          return 0LL;
        }
        v9 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[5])(v7);
        if ( v9
          && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, char *, _QWORD))(**(_QWORD **)a2 + 320LL))(
               *(_QWORD *)a2,
               v9,
               (char *)a2 + 16,
               0LL) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v10 + 240LL))(v10) )
            *a3 = 1;
          goto LABEL_5;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      {
        McTemplateU0t_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          10LL);
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
    return 0LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      9LL);
  return 0LL;
}
