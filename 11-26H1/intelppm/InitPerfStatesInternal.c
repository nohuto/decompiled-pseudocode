/*
 * XREFs of InitPerfStatesInternal @ 0x140037F74
 * Callers:
 *     RegisterKernelPerfStates @ 0x140039860 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x14003EF40 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1400040CC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400048EC (ResetEnumerationContext.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     GetRegistryDwordValue @ 0x1400288D0 (GetRegistryDwordValue.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x140029A24 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     DisplayKernelPerfStates @ 0x140029FA4 (DisplayKernelPerfStates.c)
 *     GetLogicalProcessorIndex @ 0x140036238 (GetLogicalProcessorIndex.c)
 *     CalculatePercentageCap @ 0x140044D8C (CalculatePercentageCap.c)
 *     GetPerfDomain @ 0x1400463E0 (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x140047E50 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(__int64))
{
  unsigned int v2; // eax
  __int64 v4; // rcx
  __int64 inited; // rbx
  unsigned int *v6; // r12
  _QWORD *v7; // rsi
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  unsigned int v10; // edi
  char *v11; // r13
  int v12; // eax
  bool v13; // zf
  void *v14; // rax
  _DWORD *v15; // r8
  _DWORD *v16; // r11
  __int64 v17; // r13
  __int64 v18; // rcx
  _DWORD *v19; // r12
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // r10d
  int v23; // edx
  unsigned int v24; // r11d
  __int64 v25; // rdx
  unsigned int v26; // r9d
  int v27; // r13d
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // al
  __int64 v32; // rdx
  unsigned int v33; // edx
  unsigned int i; // ecx
  __int64 v35; // rdx
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  void *v40; // rax
  __int64 v41; // r8
  _QWORD *v42; // r15
  char *v43; // r14
  int v44; // r13d
  __int64 v45; // r12
  unsigned int v46; // eax
  int v48; // [rsp+30h] [rbp-39h]
  __int64 v49; // [rsp+38h] [rbp-31h] BYREF
  PVOID P; // [rsp+40h] [rbp-29h]
  __int64 Pool2; // [rsp+48h] [rbp-21h]
  __int64 v52; // [rsp+50h] [rbp-19h]
  _OWORD v53[6]; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v54; // [rsp+D0h] [rbp+67h]
  __int64 v55; // [rsp+D0h] [rbp+67h]
  __int64 v56; // [rsp+D0h] [rbp+67h]
  __int64 v58; // [rsp+E0h] [rbp+77h] BYREF
  int PerfDomain; // [rsp+E8h] [rbp+7Fh]

  v2 = 0;
  v49 = 0LL;
  LODWORD(v58) = 0;
  P = 0LL;
  v4 = *(_QWORD *)(a1 + 280);
  inited = 0LL;
  v6 = 0LL;
  v54 = 0;
  v7 = 0LL;
  v8 = 0;
  memset(v53, 0, 32);
  if ( (v4 & 0x70000000) != 0 )
  {
    v6 = *(unsigned int **)(((v4 & 0x40000000 | 0xE00000000uLL) >> 27) + a1);
    v2 = 0;
    v8 = *v6;
  }
  if ( (v4 & 0x3300000) != 0 )
  {
    v2 = **(_DWORD **)(a1 + 504);
    v54 = v2;
  }
  v9 = v2 + v8;
  if ( !(v2 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400191A8,
    0LL);
  PerfDomain = GetPerfDomain(a1, v53, &v58);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(592 * PerfDomain), 1919119952LL);
  v11 = (char *)Pool2;
  if ( Pool2
    && (P = (PVOID)ExAllocatePool2(64LL, 32 * v9, 1919119952LL)) != 0LL
    && (v7 = (_QWORD *)ExAllocatePool2(64LL, 80LL, 1919119952LL)) != 0LL
    && (inited = AllocateAndInitKernelPerfStatesRegistration(a1, PerfDomain, 1)) != 0 )
  {
    v12 = v58;
    *(_DWORD *)(inited + 24) = 100;
    *(_QWORD *)(inited + 472) = PerfControlPTStates;
    *(_WORD *)(inited + 4) = v12;
    *(_WORD *)(inited + 6) = 257;
    *(_BYTE *)(inited + 52) = 0;
    v48 = v12;
    if ( dword_140019AC8 == 1 || v12 == 252 || (v13 = v12 == 1, v14 = PerfControlPTStatesHidden, v13) )
      v14 = PerfControlPTStatesHiddenSwAll;
    *(_QWORD *)(inited + 480) = v14;
    *(_QWORD *)(inited + 456) = PerfSelectionPTStates;
    *(_QWORD *)(inited + 448) = PerfTargetPTStates;
    v7[7] = P;
    *(_QWORD *)(inited + 56) = 0LL;
    *(_QWORD *)(inited + 64) = 100LL;
    if ( v8 && v6 )
    {
      v15 = v6 + 2;
      *(_QWORD *)(inited + 392) = *(_QWORD *)(a1 + 352);
      v16 = v6 + 2;
      *(_QWORD *)(inited + 400) = *(_QWORD *)(a1 + 360);
      *(_DWORD *)(inited + 20) = v6[2];
      v17 = v8;
      LODWORD(v58) = v6[12 * v8 - 9];
      *v7 = *(_QWORD *)(a1 + 296);
      v7[4] = *(_QWORD *)(a1 + 328);
      v7[3] = *(_QWORD *)(a1 + 312);
      v7[5] = a1 + 424;
      *(_QWORD *)(inited + 64) = v6[2];
      v18 = 0LL;
      *(_QWORD *)(inited + 56) = v6[12 * v8 - 10];
      v19 = (_DWORD *)(inited + 20);
      do
      {
        v20 = v7[7];
        *(_DWORD *)(v18 + v20 + 16) = *v15;
        *(_BYTE *)(v18 + v20 + 24) = (unsigned int)(100 * *v15) / *v19;
        *(_QWORD *)(v18 + v20) = *((_QWORD *)v15 + 2);
        *(_DWORD *)(v18 + v20 + 20) = v15[1];
        *(_QWORD *)(v18 + v20 + 8) = *((_QWORD *)v15 + 3);
        *(_BYTE *)(v18 + v20 + 25) = 1;
        *(_WORD *)(v18 + v20 + 26) = *((_WORD *)v15 + 4);
        if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v18 + v20) = v16;
          *(_QWORD *)(v18 + v20 + 8) = 0LL;
        }
        v16 += 12;
        v18 += 32LL;
        v15 += 12;
        --v17;
      }
      while ( v17 );
      v21 = v7[7];
      v11 = (char *)Pool2;
      v22 = *(_DWORD *)(32LL * (v8 - 1) + v21 + 16);
LABEL_28:
      v24 = v54;
      v25 = v21;
      if ( v54 )
      {
        v26 = 0;
        v27 = v58;
        v28 = 0LL;
        v7[1] = *(_QWORD *)(a1 + 304);
        v7[2] = *(_QWORD *)(a1 + 320);
        v7[6] = a1 + 480;
        do
        {
          v29 = *(_QWORD *)(a1 + 504);
          v58 = v7[7];
          v55 = v29;
          v52 = 32LL * (v8 + v26);
          v30 = v52;
          LODWORD(v29) = *(_DWORD *)(v28 + v29 + 4) * v22 / 0x64u;
          *(_DWORD *)(v52 + v58 + 16) = v29;
          v31 = (unsigned int)(100 * v29) / *v19;
          v32 = v58;
          *(_BYTE *)(v30 + v58 + 24) = v31;
          *(_QWORD *)(v30 + v32) = *(unsigned int *)(v28 + v55 + 16);
          *(_QWORD *)(v30 + v32 + 8) = *(unsigned int *)(v28 + v55 + 20);
          *(_BYTE *)(v30 + v32 + 25) = 2;
          *(_WORD *)(v30 + v32 + 26) = *(_WORD *)(v28 + v55 + 12);
          v33 = *(_DWORD *)(v28 + v55 + 8);
          if ( !v33 )
          {
            v30 = v52;
            v33 = *(_DWORD *)(v28 + v55 + 4) * v27 / 0x64u;
          }
          ++v26;
          v28 += 20LL;
          *(_DWORD *)(v30 + v58 + 20) = v33;
        }
        while ( v26 < v24 );
        v21 = v7[7];
        v11 = (char *)Pool2;
        v25 = v21;
      }
      for ( i = 1; i < v9; ++i )
      {
        v21 = v25;
        if ( !*(_BYTE *)(32LL * i + v25 + 24) )
        {
          v9 = i;
          break;
        }
      }
      *((_DWORD *)v7 + 16) = v9;
      v35 = v9 - 1;
      if ( v9 <= v8 )
      {
        v36 = 0;
        v8 = v9;
        v37 = v21 + 32LL * (unsigned int)v35;
      }
      else
      {
        v36 = v9 - v8;
        v37 = v7[7] + 32LL * v8;
      }
      *((_DWORD *)v7 + 17) = v8;
      *((_DWORD *)v7 + 18) = v36;
      *(_DWORD *)(inited + 28) = *(unsigned __int8 *)(v37 + 24);
      *(_DWORD *)(inited + 32) = *(unsigned __int8 *)(32LL * (unsigned int)v35 + v7[7] + 24);
      v38 = *(_QWORD *)(a1 + 344);
      if ( v38 )
        *(_QWORD *)(inited + 376) = v38;
      v39 = *(_QWORD *)(inited + 568);
      *(_DWORD *)(v39 + 12) = 0;
      if ( *(_QWORD *)(a1 + 336) )
      {
        v40 = PerfReadWrappingCounter;
        v41 = 0x10000LL;
        if ( !_bittest64((const signed __int64 *)(a1 + 280), 0x27u) )
          v40 = PerfReadActualMasterCount;
        LOBYTE(v35) = 1;
      }
      else
      {
        LOBYTE(v35) = 0;
        v40 = PerfStatesInstantaneousFrequency;
        v41 = 100LL;
      }
      *(_QWORD *)v39 = v40;
      *(_BYTE *)(v39 + 16) = v35;
      *(_BYTE *)(v39 + 17) = v35;
      *(_DWORD *)(v39 + 8) = v41;
      DisplayKernelPerfStates(inited, v35, v41);
      v42 = *(_QWORD **)(inited + 584);
      v56 = *(_QWORD *)(inited + 576);
      ResetEnumerationContext((__int64 *)v53);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v53, &v49) )
      {
        v43 = v11 + 44;
        v44 = v56;
        do
        {
          v45 = v49;
          v46 = CalculatePercentageCap(v7, *(unsigned int *)(v49 + 464), *(unsigned int *)(v49 + 512));
          InitCommonPerfStateContext(v45, (_DWORD)v43 - 44, v44, v46, v46 < 0x64 ? 2 : 0);
          *(_QWORD *)(a1 + 216) = v43 - 44;
          *(_QWORD *)(v43 + 12) = v7;
          *(_DWORD *)v43 = 100;
          if ( *(_QWORD *)(a1 + 336) )
          {
            *v42 = v43 + 20;
            *((_DWORD *)v43 + 21) = GetLogicalProcessorIndex(v45);
            *(_QWORD *)(v43 + 68) = *(_QWORD *)(a1 + 336);
          }
          else
          {
            *v42 = v43 - 44;
          }
          ++v42;
          v43 += 592;
          v44 += 32;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v53, &v49) );
        v11 = (char *)Pool2;
      }
      if ( (*(_DWORD *)(a1 + 280) & 0x400000) != 0 && (v48 == 254 || PerfDomain == 1) )
      {
        *(_WORD *)(inited + 11) = 257;
        *(_DWORD *)(inited + 48) = 1000;
      }
      if ( a2(inited) >= 0 )
      {
        ResetEnumerationContext((__int64 *)v53);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v53, &v49) )
        {
          *(_QWORD *)(v49 + 224) = v11;
          v11 += 592;
        }
        v7 = 0LL;
        P = 0LL;
        v11 = 0LL;
      }
      v10 = 0;
      goto LABEL_66;
    }
    v19 = (_DWORD *)(inited + 20);
    *(_DWORD *)(inited + 20) = 0;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
      (__int64)L"~MHz",
      (_DWORD *)(inited + 20));
    v22 = *(_DWORD *)(inited + 20);
    if ( v22 )
    {
      LODWORD(v58) = 1000 * v22;
      v21 = v7[7];
      goto LABEL_28;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v23,
        3,
        28,
        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
    }
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCFFFFFFuLL;
    v10 = -1073741823;
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_66:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400191A8);
  if ( inited )
    ExFreePoolWithTag((PVOID)inited, (ULONG)1919119952);
  if ( P )
    ExFreePoolWithTag(P, (ULONG)1919119952);
  if ( v7 )
    ExFreePoolWithTag(v7, (ULONG)1919119952);
  if ( v11 )
    ExFreePoolWithTag(v11, (ULONG)1919119952);
  return v10;
}
