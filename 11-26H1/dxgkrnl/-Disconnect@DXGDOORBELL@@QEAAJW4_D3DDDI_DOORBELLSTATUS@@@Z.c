/*
 * XREFs of ?Disconnect@DXGDOORBELL@@QEAAJW4_D3DDDI_DOORBELLSTATUS@@@Z @ 0x1401E181C
 * Callers:
 *     ?DestroyCoreState@DXGDOORBELL@@IEAAXXZ @ 0x1401E1680 (-DestroyCoreState@DXGDOORBELL@@IEAAXXZ.c)
 *     DxgkDisconnectDoorbellCB @ 0x1401E4000 (DxgkDisconnectDoorbellCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiDisconnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DISCONNECTDOORBELL@@@Z @ 0x1401AE5E4 (-DdiDisconnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DISCONNECTDOORBELL@@@Z.c)
 */

__int64 __fastcall DXGDOORBELL::Disconnect(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  void *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rsi
  const wchar_t *v8; // r9
  void *v9; // rcx
  NTSTATUS v10; // eax
  _QWORD v12[2]; // [rsp+50h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytes; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 32LL)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 16LL) + 16LL) + 16LL) + 200LL) != 4 )
  {
    v4 = *(_QWORD *)a1;
    v12[1] = 0LL;
    v12[0] = *(_QWORD *)(v4 + 32);
    ADAPTER_RENDER::DdiDisconnectDoorbell(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 16LL),
      (struct _DXGKARG_DISCONNECTDOORBELL *)v12);
  }
  v5 = *(void **)(a1 + 32);
  NumberOfBytes = 4096LL;
  v6 = MmRotatePhysicalView(v5, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = *(void **)(a1 + 56);
    if ( !v9
      || (NumberOfBytes = 4096LL,
          v10 = MmRotatePhysicalView(v9, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL),
          v7 = v10,
          v10 >= 0) )
    {
      **(_QWORD **)(a1 + 136) = v2;
      return (unsigned int)v7;
    }
    WdLogSingleEntry2(2LL, a1, v10);
    v8 = L"DXGDOORBELL 0x%I64x: Failed to rotate secondary CPUVA back to dummy CPU page, returning 0x%I64x";
    WdLogGlobalForLineNumber = 4118;
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, v6);
    v8 = L"DXGDOORBELL 0x%I64x: Failed to rotate CPUVA back to dummy CPU page, returning 0x%I64x";
    WdLogGlobalForLineNumber = 4100;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, a1, v7, 0LL, 0LL, 0LL);
  return (unsigned int)v7;
}
