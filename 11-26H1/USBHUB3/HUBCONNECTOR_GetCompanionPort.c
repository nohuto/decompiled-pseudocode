/*
 * XREFs of HUBCONNECTOR_GetCompanionPort @ 0x140085BD0
 * Callers:
 *     HUBMISC_TypeCCompanionHasIdenticalDeviceAttached @ 0x140033D9C (HUBMISC_TypeCCompanionHasIdenticalDeviceAttached.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x14007F1A8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBCONNECTOR_GetCompanionPort(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  int v5; // eax
  unsigned __int16 v6; // r9
  __int64 v7; // rcx
  int v8; // edx
  _QWORD *v9; // r14
  _QWORD *i; // rax
  _QWORD *v11; // rdi
  int v13; // ecx
  bool v14; // zf
  int v15; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  v3 = a2;
  if ( (*(_DWORD *)(a1 + 204) & 0x20) != 0 )
  {
    if ( a2 <= 1u )
    {
      v9 = (_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_14006D2C0)
                    + 40);
      for ( i = (_QWORD *)*v9; ; i = (_QWORD *)v11[10] )
      {
        v11 = i - 10;
        if ( v9 == i )
          goto LABEL_10;
        if ( RtlCompareMemory(i - 10, (const void *)(a1 + 1368), 0x38uLL) == 56 )
          break;
      }
      if ( !v11 )
      {
LABEL_10:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), v8, 4, 22, (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
        }
        return v2;
      }
      v13 = *(_DWORD *)(a1 + 208);
      if ( v13 == 512 )
      {
        if ( !v3 )
          return v11[8];
        v14 = v3 == 1;
      }
      else
      {
        if ( v13 != 768 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v2;
          v15 = *(_DWORD *)(a1 + 208);
          v6 = 23;
          v7 = *(_QWORD *)(a1 + 1432);
          goto LABEL_5;
        }
        if ( !v3 )
          return v11[7];
        v2 = v11[8];
        v14 = a1 == v2;
      }
      if ( v14 )
        return v11[9];
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(_DWORD *)(a1 + 208);
      v6 = 21;
      v7 = *(_QWORD *)(a1 + 1432);
      v15 = v5;
LABEL_5:
      WPP_RECORDER_SF_d(v7, 2u, 6u, v6, (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids, v15);
    }
  }
  return v2;
}
