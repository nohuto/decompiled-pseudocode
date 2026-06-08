/*
 * XREFs of InitAcpiLpiStates @ 0x14003E698
 * Callers:
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     AcpiEval_LPI @ 0x140028A1C (AcpiEval_LPI.c)
 *     Display_LPI @ 0x14002C824 (Display_LPI.c)
 *     ValidateLpiState @ 0x1400311CC (ValidateLpiState.c)
 */

__int64 __fastcall InitAcpiLpiStates(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edi
  int v7; // r9d
  _DWORD *v8; // rbp
  const wchar_t *v9; // r14
  int v10; // ecx
  __int64 i; // rsi
  _DWORD *v12; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  __int64 v15; // rbx
  int v17; // [rsp+28h] [rbp-20h]
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  P = 0LL;
  v2 = AcpiEval_LPI(a1, (__int64)&P);
  v6 = v2;
  if ( v2 < 0 )
  {
    P = 0LL;
    if ( v2 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v3,
          2,
          10,
          (__int64)&WPP_3e202d95210a3d64d7d99785f8240c47_Traceguids);
      }
      goto LABEL_17;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v7 = 11;
    v17 = v2;
    LOBYTE(v3) = 3;
LABEL_7:
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      3,
      v7,
      (__int64)&WPP_3e202d95210a3d64d7d99785f8240c47_Traceguids,
      v17);
    goto LABEL_17;
  }
  v8 = P;
  v9 = *(const wchar_t **)(a1 + 64);
  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < v8[4]; i = (unsigned int)(i + 1) )
    {
      v10 = ValidateLpiState((__int64)&v8[20 * i + 6], 0LL, v9);
      v6 = v10;
      if ( v10 < 0 )
        goto LABEL_10;
    }
    v12 = P;
    v6 = 0;
    v13 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 544) = P;
    P = 0LL;
    Display_LPI(v12, v13, v4, v5);
  }
  else
  {
    v6 = -1073741823;
    v10 = -1073741823;
LABEL_10:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 12;
      v17 = v10;
      LOBYTE(v3) = 2;
      goto LABEL_7;
    }
  }
LABEL_17:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v6 < 0 )
    *(_QWORD *)(a1 + 280) &= 0xFFFDE1FFFFFFFFFFuLL;
  v14 = P;
  if ( P )
  {
    v15 = 0LL;
    if ( *((_DWORD *)P + 4) )
    {
      do
      {
        if ( *(_QWORD *)&v14[20 * v15 + 24] )
        {
          RtlFreeUnicodeString((PUNICODE_STRING)&v14[20 * v15 + 22]);
          v14 = P;
        }
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < v14[4] );
    }
    ExFreePoolWithTag(v14, (ULONG)0);
  }
  return (unsigned int)v6;
}
