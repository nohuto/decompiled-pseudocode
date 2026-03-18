/*
 * XREFs of HUBCONNECTOR_RegisterPort @ 0x1400864DC
 * Callers:
 *     HUBCONNECTOR_MapExternalHubPorts @ 0x140085EA8 (HUBCONNECTOR_MapExternalHubPorts.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x140085F84 (HUBCONNECTOR_MapHubPorts.c)
 *     HUBCONNECTOR_MapIntegratedHubPorts @ 0x1400860C4 (HUBCONNECTOR_MapIntegratedHubPorts.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1400861BC (HUBCONNECTOR_MapRootHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBCONNECTOR_RegisterPort(__int64 a1)
{
  __int64 v2; // r15
  unsigned int v3; // esi
  __int64 v4; // rax
  _QWORD *v5; // r14
  _QWORD *i; // rax
  volatile signed __int32 *v7; // rdx
  _QWORD *v8; // rdi
  __int64 Pool2; // rax
  int v10; // edx
  _QWORD *v11; // rax
  int v12; // eax
  unsigned __int16 v13; // r9
  unsigned int v14; // r8d
  __int64 v15; // rcx
  int v16; // eax
  int v17; // r9d
  unsigned __int16 v18; // r9
  unsigned __int16 v19; // cx
  __int64 v20; // rax
  __int64 v22; // [rsp+28h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 56),
    0LL);
  v5 = (_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_14006D2C0)
                + 40);
  for ( i = (_QWORD *)*v5; ; i = (_QWORD *)v8[10] )
  {
    v8 = i - 10;
    if ( v5 == i )
      goto LABEL_7;
    if ( RtlCompareMemory(i - 10, (const void *)(a1 + 1368), 0x38uLL) == 56 )
      break;
  }
  if ( v8 )
  {
LABEL_14:
    v12 = *(_DWORD *)(a1 + 208);
    if ( v12 == 512 )
    {
      if ( v8[7] )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_49;
        v17 = 11;
        goto LABEL_24;
      }
      v7 = (volatile signed __int32 *)(a1 + 204);
      if ( (*(_DWORD *)(a1 + 204) & 0x200) != 0 )
      {
        v15 = v8[8];
        if ( v15 && (*(_DWORD *)(v15 + 204) & 0x200) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v18 = 12;
          goto LABEL_48;
        }
        *(_WORD *)(a1 + 236) = *(_WORD *)(a1 + 200);
      }
      v8[7] = a1;
    }
    else
    {
      if ( v12 != 768 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_55;
        v13 = 17;
        LODWORD(v22) = *(_DWORD *)(a1 + 208);
        v14 = 6;
        goto LABEL_18;
      }
      v15 = v8[8];
      v7 = (volatile signed __int32 *)(a1 + 204);
      v16 = *(_DWORD *)(a1 + 204) & 0x200;
      if ( v15 )
      {
        if ( !v16 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v17 = 15;
          goto LABEL_24;
        }
        if ( v8[9] )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_49:
            v3 = -1073741823;
            goto LABEL_50;
          }
          v17 = 13;
LABEL_24:
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 1432),
            (_DWORD)v7,
            6,
            v17,
            (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
          goto LABEL_49;
        }
        if ( (*(_DWORD *)(v15 + 204) & 0x200) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v18 = 14;
LABEL_48:
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 1432),
            2u,
            6u,
            v18,
            (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
            *(unsigned __int8 *)(v15 + 1341));
          goto LABEL_49;
        }
        v19 = *(_WORD *)(v15 + 200);
        if ( v19 >= *(_WORD *)(a1 + 200) )
          v19 = *(_WORD *)(a1 + 200);
        *(_WORD *)(a1 + 236) = v19;
        *(_WORD *)(v8[8] + 236LL) = v19;
        v8[9] = a1;
      }
      else
      {
        if ( v16 )
        {
          v15 = v8[7];
          if ( v15 && (*(_DWORD *)(v15 + 204) & 0x200) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_49;
            v18 = 16;
            goto LABEL_48;
          }
          *(_WORD *)(a1 + 236) = *(_WORD *)(a1 + 200);
        }
        v8[8] = a1;
      }
    }
    _InterlockedOr(v7, 0x20u);
    goto LABEL_55;
  }
LABEL_7:
  Pool2 = ExAllocatePool2(64LL, 96LL, 1882409045LL);
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = *(_OWORD *)(a1 + 1368);
    *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(a1 + 1384);
    *(_OWORD *)(Pool2 + 32) = *(_OWORD *)(a1 + 1400);
    *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a1 + 1416);
    v11 = (_QWORD *)(Pool2 + 80);
    v7 = *(volatile signed __int32 **)(v2 + 48);
    if ( *(_QWORD *)v7 != v2 + 40 )
      __fastfail(3u);
    *v11 = v2 + 40;
    v11[1] = v7;
    *(_QWORD *)v7 = v11;
    *(_QWORD *)(v2 + 48) = v11;
    goto LABEL_14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), v10, 4, 10, (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
  }
  v3 = -1073741670;
LABEL_50:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 18;
    LODWORD(v22) = v3;
    v14 = 4;
LABEL_18:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      2u,
      v14,
      v13,
      (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
      v22);
  }
LABEL_55:
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006D2C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v20 + 56));
  return v3;
}
