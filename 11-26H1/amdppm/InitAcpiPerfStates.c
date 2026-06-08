/*
 * XREFs of InitAcpiPerfStates @ 0x14003943C
 * Callers:
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     AcpiEval_PCT_PTC @ 0x140028EAC (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSS @ 0x1400294D0 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x140029CE0 (AcpiEval_XPSS.c)
 *     Display_PCT_PTC @ 0x14002CC68 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x14002CDD4 (Display_PSS.c)
 *     ValidateAcpi2PStates @ 0x14002F990 (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x14003218C (ValidateXPssPStates.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // esi
  int v4; // eax
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  const wchar_t *v13; // r8
  unsigned int *v14; // rdx
  int v15; // edx
  const wchar_t *v16; // r8
  __int64 v17; // rdx
  int v18; // edx
  __int64 v19; // rax
  unsigned int *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 208);
  v24 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(WdfDriverGlobals, v1, 0LL);
  v3 = 0;
  v4 = AcpiEval_PCT_PTC(a1, 1413697631, a1 + 424);
  v8 = v4;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          2,
          10,
          (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        3,
        11,
        (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
        v4);
    }
    v3 = v8;
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
  {
    v9 = AcpiEval_XPSS(a1, (_QWORD *)(a1 + 456));
    v8 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            2,
            12,
            (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          3,
          13,
          (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
          v9);
      }
      *(_QWORD *)(a1 + 280) &= ~0x40000000uLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x30000000) != 0 )
  {
    v11 = AcpiEval_PSS(a1, (_QWORD *)(a1 + 448));
    v8 = v11;
    if ( v11 < 0 )
    {
      if ( v11 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            2,
            14,
            (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          3,
          15,
          (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
          v11);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFCFFFFFFFuLL;
      if ( (*(_QWORD *)(a1 + 280) & 0x40000000LL) != 0 )
        v8 = 0;
    }
  }
  if ( v3 >= 0 )
  {
    if ( v8 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
      {
        v13 = *(const wchar_t **)(a1 + 64);
        v14 = *(unsigned int **)(a1 + 456);
        v24 = 0;
        v8 = ValidateXPssPStates(a1 + 424, v14, v13, &v24);
        if ( v8 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1112), v24);
          *(_QWORD *)(a1 + 280) &= ~0x40000000uLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = 3;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v15,
              3,
              16,
              (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
              v8);
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 280) & 0x30000000) != 0 )
      {
        v16 = *(const wchar_t **)(a1 + 64);
        v17 = *(_QWORD *)(a1 + 448);
        v24 = 0;
        v8 = ValidateAcpi2PStates(a1 + 424, v17, v16, &v24);
        if ( v8 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1112), v24);
          *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFCFFFFFFFuLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = 3;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v18,
              3,
              17,
              (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
              v8);
          }
        }
      }
      v19 = *(_QWORD *)(a1 + 280);
      if ( (v19 & 0x40000000) != 0 )
      {
        v20 = *(unsigned int **)(a1 + 456);
LABEL_39:
        Display_PCT_PTC((unsigned __int8 *)(a1 + 424), "_PCT", v6, v7);
        Display_PSS(v20, v21, v22);
        goto LABEL_41;
      }
      if ( (v19 & 0x30000000) != 0 )
      {
        v20 = *(unsigned int **)(a1 + 448);
        goto LABEL_39;
      }
    }
    v3 = v8;
  }
LABEL_41:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
