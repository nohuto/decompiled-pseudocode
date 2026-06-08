/*
 * XREFs of InitLegacyPccInternal @ 0x14000AE10
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x14000B480 (RegisterKernelLegacyPcc.c)
 *     RegisterHvLegacyPccCounters @ 0x14003DE50 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x140001490 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x140002B9C (ResetEnumerationContext.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     DisplayKernelPerfStates @ 0x14002E1BC (DisplayKernelPerfStates.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x14003232C (AllocateAndInitKernelPerfStatesRegistration.c)
 *     InitCommonPerfStateContext @ 0x140032AA0 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x140042498 (GetPerfDomain.c)
 */

__int64 __fastcall InitLegacyPccInternal(_QWORD *a1, __int64 (__fastcall *a2)(__int64))
{
  _DWORD *v2; // r13
  __int64 v4; // rdi
  int v5; // ebx
  unsigned int PerfDomain; // ebx
  __int64 **v7; // r15
  __int64 inited; // rax
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 *v17; // r15
  __int64 v18; // rbx
  unsigned int *v19; // rcx
  __int64 **v20; // r10
  __int64 *v21; // r11
  __int64 *v22; // rax
  __int64 Pool2; // [rsp+30h] [rbp-30h]
  _OWORD v25[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v27; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+58h] BYREF

  v2 = (_DWORD *)qword_140015BD8;
  v28 = 0LL;
  memset(v25, 0, sizeof(v25));
  v4 = 0LL;
  if ( qword_140015C58 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400155D8,
      0LL);
    PerfDomain = GetPerfDomain(a1, v25, &v27);
    Pool2 = ExAllocatePool2(64LL, 88 * PerfDomain, 1919119952LL);
    v7 = (__int64 **)Pool2;
    if ( Pool2 && (inited = AllocateAndInitKernelPerfStatesRegistration(a1, PerfDomain, 1LL), (v4 = inited) != 0) )
    {
      *(_DWORD *)(inited + 4) = 65537;
      *(_BYTE *)(inited + 52) = 0;
      *(_QWORD *)(inited + 472) = PerfControlLegacyPcc;
      *(_QWORD *)(inited + 480) = PerfControlLegacyPcc;
      *(_QWORD *)(inited + 456) = PerfSelectionLegacyPcc;
      *(_QWORD *)(inited + 448) = PerfTargetDefaultHandler;
      *(_QWORD *)(inited + 496) = PerfInitiateLegacyPcc;
      *(_QWORD *)(inited + 512) = PerfCommitLegacyPcc;
      v9 = v2[7];
      *(_DWORD *)(inited + 20) = v9;
      *(_DWORD *)(inited + 24) = 100;
      HIDWORD(v12) = 0;
      v10 = 100 * v2[9] / v9;
      *(_DWORD *)(inited + 28) = v10;
      LODWORD(v12) = 100 * v2[8] % v9;
      v11 = 100 * v2[8] / v9;
      *(_DWORD *)(v4 + 32) = v11;
      if ( !v10 )
        *(_DWORD *)(v4 + 28) = 1;
      if ( !v11 )
        *(_DWORD *)(v4 + 32) = 1;
      *(_QWORD *)(v4 + 56) = (unsigned int)v2[9];
      *(_QWORD *)(v4 + 64) = (unsigned int)v2[7];
      v13 = a1[43];
      if ( v13 )
        *(_QWORD *)(v4 + 376) = v13;
      *(_QWORD *)(v4 + 392) = a1[44];
      *(_QWORD *)(v4 + 400) = a1[45];
      if ( dword_140015BD4 )
      {
        v12 = 0x989680 % ((unsigned int)dword_140015BD4 >> 1);
        *(_DWORD *)(v4 + 40) = 0x989680 / ((unsigned int)dword_140015BD4 >> 1);
      }
      v14 = *(_QWORD *)(v4 + 568);
      *(_QWORD *)v14 = LegacyPccInstantaneousFrequency;
      *(_QWORD *)(v14 + 8) = 100LL;
      *(_WORD *)(v14 + 16) = 0;
      *(_DWORD *)(v4 + 36) = 1;
      DisplayKernelPerfStates(v4, v12);
      v15 = *(_QWORD *)(v4 + 576);
      v16 = Pool2;
      v27 = *(__int64 **)(v4 + 584);
      ResetEnumerationContext((__int64 *)v25);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v25, &v28) )
      {
        v17 = v27;
        do
        {
          v18 = v28;
          InitCommonPerfStateContext(v28, v16, v15, 100, 0);
          a1[27] = v16;
          v19 = *(unsigned int **)(v18 + 584);
          v15 += 32LL;
          *(_QWORD *)v16 = v18;
          *(_DWORD *)(v16 + 80) = 100;
          *(_QWORD *)(v16 + 64) = (char *)v2 + *v19;
          *(_QWORD *)(v16 + 72) = (char *)v2 + v19[1];
          *v17++ = v16;
          v16 += 88LL;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v25, &v28) );
        v7 = (__int64 **)Pool2;
      }
      v5 = a2(v4);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_140015C50);
        ResetEnumerationContext((__int64 *)v25);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)v25, &v28) )
        {
          v20 = v7 + 5;
          v21 = &qword_140015658;
          do
          {
            *(_QWORD *)(v28 + 240) = v20 - 5;
            v22 = (__int64 *)qword_140015660;
            if ( *(__int64 **)qword_140015660 != v21 )
              __fastfail(3u);
            *v20 = v21;
            v20[1] = v22;
            *v22 = (__int64)v20;
            qword_140015660 = (__int64)v20;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v25, &v28) );
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_140015C50);
        v7 = 0LL;
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400155D8);
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, (ULONG)1919119952);
    if ( v7 )
      ExFreePoolWithTag(v7, (ULONG)1919119952);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
