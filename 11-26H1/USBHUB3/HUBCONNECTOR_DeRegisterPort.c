/*
 * XREFs of HUBCONNECTOR_DeRegisterPort @ 0x1400859A0
 * Callers:
 *     HUBCONNECTOR_UnMapHubPorts @ 0x140086938 (HUBCONNECTOR_UnMapHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBCONNECTOR_DeRegisterPort(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  int v4; // edx
  _QWORD *v5; // r14
  _QWORD *i; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  int v10; // ecx
  __int64 v11; // rdx
  _QWORD *v12; // rcx

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 56),
    0LL);
  if ( (*(_DWORD *)(a1 + 204) & 0x20) == 0 )
    goto LABEL_9;
  v5 = (_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_14006D2C0)
                + 40);
  for ( i = (_QWORD *)*v5; ; i = (_QWORD *)v7[10] )
  {
    v7 = i - 10;
    if ( v5 == i )
      goto LABEL_6;
    if ( RtlCompareMemory(i - 10, (const void *)(a1 + 1368), 0x38uLL) == 56 )
      break;
  }
  if ( !v7 )
  {
LABEL_6:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), v4, 4, 19, (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
    }
    v2 = -1073741823;
    goto LABEL_9;
  }
  v10 = *(_DWORD *)(a1 + 208);
  if ( v10 == 512 )
  {
    v7[7] = 0LL;
  }
  else
  {
    if ( v10 != 768 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 1432),
          2u,
          6u,
          0x14u,
          (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
          *(_DWORD *)(a1 + 208));
      goto LABEL_9;
    }
    v7[8] = 0LL;
  }
  if ( !v7[7] && !v7[8] )
  {
    v11 = v7[10];
    if ( *(_QWORD **)(v11 + 8) != v7 + 10 || (v12 = (_QWORD *)v7[11], (_QWORD *)*v12 != v7 + 10) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    ExFreePoolWithTag(v7, 0x70334855u);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 204), 0xFFFFFFDF);
LABEL_9:
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 56));
  return v2;
}
