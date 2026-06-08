/*
 * XREFs of AcpiEvaluateMethod @ 0x1400434F4
 * Callers:
 *     AcpiEval_PCCP @ 0x140027428 (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x1400279B0 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_LPI @ 0x140027E10 (AcpiEval_LPI.c)
 *     AcpiEval_CPC @ 0x14002E460 (AcpiEval_CPC.c)
 *     AcpiEval_PDC @ 0x14002EBD8 (AcpiEval_PDC.c)
 *     AcpiEval_PSD_TSD @ 0x14002ECE4 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x14002F000 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x14002F3A8 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x14002F6B0 (AcpiEval_XPSS.c)
 *     AcpiEval_OSC @ 0x140042F0C (AcpiEval_OSC.c)
 *     AcpiEval_TPC @ 0x140043094 (AcpiEval_TPC.c)
 *     AcpiEval_PPC @ 0x14004336C (AcpiEval_PPC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiEvaluateMethod(__int64 a1, int a2, __int64 *a3, _QWORD *a4, _DWORD *a5)
{
  __int64 *v6; // r14
  int v8; // ebx
  unsigned int v9; // edi
  __int64 Pool2; // rax
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  int v17; // eax
  __int64 v18; // [rsp+50h] [rbp-11h] BYREF
  __int128 v19; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+7h]
  int v21; // [rsp+6Ch] [rbp+Bh]
  __int128 v22; // [rsp+70h] [rbp+Fh] BYREF
  int v23; // [rsp+80h] [rbp+1Fh]
  int v24; // [rsp+84h] [rbp+23h]
  __int64 v25; // [rsp+D0h] [rbp+6Fh] BYREF

  v25 = 0LL;
  v23 = 0;
  v20 = 0;
  v18 = 0LL;
  v6 = a3;
  v22 = 0LL;
  v19 = 0LL;
  if ( a3 )
  {
    v17 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 != 1114203457 )
    {
      switch ( v17 )
      {
        case 1130980673:
          v8 = *((_DWORD *)a3 + 2);
          break;
        case 1231643969:
          v8 = 12;
          break;
        case 1399416129:
          v8 = *((_DWORD *)a3 + 2) + 15;
          break;
        default:
          return (unsigned int)-1073741584;
      }
      goto LABEL_5;
    }
  }
  else
  {
    if ( !a2 )
      return (unsigned int)-1073741585;
    LODWORD(v25) = 1114203457;
    v6 = &v25;
    HIDWORD(v25) = a2;
  }
  v8 = 8;
LABEL_5:
  v9 = 1024;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v9, 1919119952LL);
    v11 = (_DWORD *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v12 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v19 + 1) = Pool2;
    *(_QWORD *)&v22 = 1LL;
    v24 = 0;
    *((_QWORD *)&v22 + 1) = v6;
    v23 = v8;
    *(_QWORD *)&v19 = 1LL;
    v21 = 0;
    v20 = v9;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, __int128 *, __int128 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
            WdfDriverGlobals,
            v12,
            0LL,
            3325956LL,
            &v22,
            &v19,
            0LL,
            &v18);
    v14 = v13;
    if ( v13 != -2147483643 )
      break;
    v9 = v11[1];
    ExFreePoolWithTag(v11, (ULONG)0);
  }
  if ( v13 >= 0 && (v15 = v18, v18) )
  {
    *a4 = v11;
  }
  else
  {
    *a4 = 0LL;
    ExFreePoolWithTag(v11, (ULONG)0);
    v15 = v18;
  }
  if ( a5 )
    *a5 = v15;
  return v14;
}
