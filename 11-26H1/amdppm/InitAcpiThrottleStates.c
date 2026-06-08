/*
 * XREFs of InitAcpiThrottleStates @ 0x1400397C8
 * Callers:
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     Display_PCT_PTC @ 0x14002CC68 (Display_PCT_PTC.c)
 *     Display_TSS @ 0x14002D0CC (Display_TSS.c)
 *     ValidateAcpiThrottleStates @ 0x1400301CC (ValidateAcpiThrottleStates.c)
 *     InitAcpi1ThrottleStates @ 0x140039164 (InitAcpi1ThrottleStates.c)
 *     InitAcpi3ThrottleStates @ 0x1400392F8 (InitAcpi3ThrottleStates.c)
 */

__int64 __fastcall InitAcpiThrottleStates(__int64 a1)
{
  __int64 v2; // rax
  int inited; // edi
  const wchar_t *v4; // r8
  unsigned int *v5; // rdx
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = *(_QWORD *)(a1 + 280);
  inited = -1073741823;
  if ( (v2 & 0x3000000) != 0 )
  {
    inited = InitAcpi3ThrottleStates(a1);
    if ( inited >= 0 )
      goto LABEL_7;
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCFFFFFFuLL;
    v2 = *(_QWORD *)(a1 + 280);
  }
  if ( (v2 & 0x300000) == 0 )
    goto LABEL_11;
  inited = InitAcpi1ThrottleStates(a1);
  if ( inited < 0 )
  {
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFCFFFFFuLL;
    goto LABEL_11;
  }
LABEL_7:
  v4 = *(const wchar_t **)(a1 + 64);
  v5 = *(unsigned int **)(a1 + 504);
  v10 = 0;
  inited = ValidateAcpiThrottleStates(a1 + 480, v5, v4, &v10);
  if ( inited >= 0 )
  {
    inited = 0;
    Display_TSS(*(unsigned int **)(a1 + 504));
    Display_PCT_PTC((unsigned __int8 *)(a1 + 480), "_PTC", v7, v8);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        3,
        18,
        (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
        inited);
    }
  }
LABEL_11:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)inited;
}
