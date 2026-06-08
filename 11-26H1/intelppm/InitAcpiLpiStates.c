/*
 * XREFs of InitAcpiLpiStates @ 0x140047F20
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     AcpiEval_LPI @ 0x140027E10 (AcpiEval_LPI.c)
 *     Display_LPI @ 0x1400315DC (Display_LPI.c)
 *     ValidateProcessorLpiStates @ 0x140035D14 (ValidateProcessorLpiStates.c)
 */

__int64 __fastcall InitAcpiLpiStates(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // edi
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  struct _DEVICE_OBJECT *v7; // r8
  __int64 v8; // r9
  PVOID v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  __int64 v12; // rbx
  int v14; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  P = 0LL;
  v2 = AcpiEval_LPI(a1, (__int64)&P);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v4 = ValidateProcessorLpiStates((__int64)P, *(const wchar_t **)(a1 + 64));
    if ( v4 >= 0 )
    {
      v9 = P;
      v4 = 0;
      v10 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 544) = P;
      P = 0LL;
      Display_LPI((__int64)v9, v10, v7, v8);
      goto LABEL_12;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v5 = 12;
    v6 = 2;
LABEL_7:
    v14 = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      3u,
      v5,
      (__int64)&WPP_3e202d95210a3d64d7d99785f8240c47_Traceguids,
      v14);
    goto LABEL_12;
  }
  P = 0LL;
  if ( v2 != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v5 = 11;
    v6 = 3;
    goto LABEL_7;
  }
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
LABEL_12:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v4 < 0 )
    *(_QWORD *)(a1 + 280) &= 0xFFFDE1FFFFFFFFFFuLL;
  v11 = P;
  if ( P )
  {
    v12 = 0LL;
    if ( *((_DWORD *)P + 4) )
    {
      do
      {
        if ( *(_QWORD *)&v11[20 * v12 + 24] )
        {
          RtlFreeUnicodeString((PUNICODE_STRING)&v11[20 * v12 + 22]);
          v11 = P;
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < v11[4] );
    }
    ExFreePoolWithTag(v11, (ULONG)0);
  }
  return (unsigned int)v4;
}
