/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x14031B740
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x14024A2EC (DxgkPowerOnOffMonitor.c)
 *     DpiAcpiProcessEventRequests @ 0x14025374C (DpiAcpiProcessEventRequests.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x14030F770 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiFdoHandleSystemPower @ 0x1403BA2FC (DpiFdoHandleSystemPower.c)
 *     DpiPollDisplayChildren @ 0x1403E6480 (DpiPollDisplayChildren.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1403FA470 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoCreateRelatedObjects @ 0x14042F7C0 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x140056288 (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x14031C134 (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int64 v3; // r14
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // ecx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int128 v21; // xmm0
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v24[20]; // [rsp+28h] [rbp-51h] BYREF
  bool v25; // [rsp+3Ch] [rbp-3Dh]
  bool v26; // [rsp+3Dh] [rbp-3Ch]
  char v27; // [rsp+3Eh] [rbp-3Bh]
  bool v28; // [rsp+3Fh] [rbp-3Ah]
  _DWORD v29[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v30; // [rsp+48h] [rbp-31h]
  __int128 v31; // [rsp+50h] [rbp-29h]
  __int64 v32; // [rsp+60h] [rbp-19h]
  int v33; // [rsp+68h] [rbp-11h]
  int v34; // [rsp+6Ch] [rbp-Dh]
  int v35; // [rsp+70h] [rbp-9h]
  int v36; // [rsp+74h] [rbp-5h]
  int v37; // [rsp+78h] [rbp-1h]
  unsigned int v38; // [rsp+7Ch] [rbp+3h]
  __int64 v39; // [rsp+80h] [rbp+7h]

  v3 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 64);
  v23 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3440), 1u);
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeQueryTimeIncrement() * v7;
  v9 = v3 & 1;
  v10 = (v3 & 0xFFFFFFFE) - 1;
  if ( (v3 & 1) == 0 )
    v10 = v3 & 0xFFFFFFFE;
  if ( *(_DWORD *)(v6 + 3688) < v10 || v8 - *(_QWORD *)(v6 + 3696) >= 10000000 || (v3 & 8) != 0 )
  {
    v19 = *(_QWORD *)(v6 + 48);
    v20 = *(_QWORD *)(v6 + 40);
    *(_DWORD *)(v6 + 3688) = v10;
    *(_DWORD *)v24 = (v9 << 28) | 0x2000000;
    *(_QWORD *)(v6 + 3696) = v8;
    v21 = *a3;
    v27 = 1;
    v25 = (v3 & 4) != 0;
    v26 = (v3 & 2) != 0;
    *(_OWORD *)&v24[4] = v21;
    v28 = (v3 & 8) != 0;
    v22 = DpiDxgkDdiDisplayDetectControl(v6, v20, v19, v24, v23, *(_QWORD *)v24);
    v11 = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL), v22);
      WdLogGlobalForLineNumber = 11617;
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 3440));
    KeLeaveCriticalRegion();
    *(_BYTE *)(v6 + 3649) = 0;
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3440));
    KeLeaveCriticalRegion();
    v11 = 1075708985;
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
    v14[3] = DpiFdoInvalidateChildRelations;
    v15 = *(int *)(v6 + 3688);
    v14[6] = v3;
    v14[4] = v15;
    v14[5] = v8;
    v14[7] = 1075708985LL;
    WdLogGlobalForLineNumber = 11583;
  }
  v30 = 0LL;
  v31 = 0LL;
  v34 = 0;
  v16 = *(_QWORD *)(v6 + 2696);
  v17 = DxgkDiagCalcDuration1us(&v23);
  v29[0] = 30;
  v30 = 0LL;
  v29[1] = 72;
  v36 = v9 | v5 & 0xFFFF00;
  v33 = 0;
  v32 = 0LL;
  v31 = 0LL;
  v35 = 37;
  v37 = v17;
  v38 = v11;
  v39 = v16;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29, *(_QWORD *)(v6 + 5888));
  return v11;
}
