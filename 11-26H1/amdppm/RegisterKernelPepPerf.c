/*
 * XREFs of RegisterKernelPepPerf @ 0x140036490
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x140001490 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x140002B9C (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     PepNotifyPerfConstraints @ 0x14000D078 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x14003232C (AllocateAndInitKernelPerfStatesRegistration.c)
 *     InitCommonPerfStateContext @ 0x140032AA0 (InitCommonPerfStateContext.c)
 *     PepTranslateLimitReason @ 0x14003C63C (PepTranslateLimitReason.c)
 *     GetPerfDomain @ 0x140042498 (GetPerfDomain.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  void (__fastcall *v2)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  int v3; // edx
  __int64 v4; // rsi
  __int64 v5; // rbx
  char *Pool2; // r15
  int v7; // edi
  BOOL v8; // r13d
  int PerfDomain; // eax
  _BYTE *v10; // r14
  char *v11; // r12
  __int64 v12; // rcx
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // r9d
  int v17; // edi
  __int64 inited; // rax
  int v19; // ecx
  bool v20; // al
  bool v21; // al
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // r12
  _QWORD *v26; // r14
  char *v27; // rdi
  int v28; // r10d
  int v29; // esi
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rdx
  void *v35; // rax
  int v36; // eax
  bool v37; // zf
  __int64 v38; // rcx
  void *v39; // rax
  __int64 v40; // r10
  int v42; // [rsp+30h] [rbp-48h]
  __int64 v43; // [rsp+38h] [rbp-40h] BYREF
  __int64 v44; // [rsp+40h] [rbp-38h]
  _OWORD v45[3]; // [rsp+48h] [rbp-30h] BYREF
  int v47; // [rsp+C8h] [rbp+50h] BYREF
  int v48; // [rsp+D0h] [rbp+58h]
  int v49; // [rsp+D8h] [rbp+60h]

  memset(v45, 0, 32);
  v2 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v43 = 0LL;
  v47 = 0;
  v2(WdfDriverGlobals, qword_1400155D8, 0LL);
  v4 = *(_QWORD *)(a1 + 1184);
  v5 = 0LL;
  Pool2 = 0LL;
  v44 = v4;
  v42 = *(_DWORD *)(v4 + 20);
  if ( v42 )
  {
    v48 = *(_DWORD *)(v4 + 52);
    v8 = v48 != -1;
    PerfDomain = GetPerfDomain(a1, v45, &v47);
    v10 = *(_BYTE **)(a1 + 560);
    v49 = PerfDomain;
    if ( !v10 || !v10[48] )
      v10 = 0LL;
    Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(72 * PerfDomain), 1919119952LL);
    if ( !Pool2 )
      goto LABEL_9;
    ResetEnumerationContext((__int64 *)v45);
    v11 = Pool2 + 40;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v45, &v43) )
    {
      v12 = v43;
      *((_QWORD *)v11 + 1) = *(_QWORD *)(v43 + 1120);
      *(_QWORD *)v11 = *(_QWORD *)(v12 + 1184);
      v7 = PepNotifyPerfConstraints(v12, (_DWORD *)v11 + 6, (_DWORD *)v11 + 4);
      if ( v7 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_68;
        v16 = 47;
        goto LABEL_19;
      }
      v14 = *(_DWORD *)(v4 + 8);
      v15 = *((_DWORD *)v11 + 6);
      if ( v15 > v14 || v15 < *(_DWORD *)(v4 + 16) )
      {
        v7 = -1073741811;
        goto LABEL_68;
      }
      *((_DWORD *)v11 + 7) = 100 * v15 / v14;
      v11 += 72;
    }
    v17 = v49;
    inited = AllocateAndInitKernelPerfStatesRegistration(a1, v49, v8 + 1);
    v5 = inited;
    if ( inited )
    {
      v19 = v47;
      *(_WORD *)(inited + 4) = v47;
      if ( *(_BYTE *)(v4 + 37) )
      {
        *(_QWORD *)(inited + 472) = PepPerfStateControlHandler;
        *(_QWORD *)(inited + 448) = PepPerfStateTargetHandler;
        *(_QWORD *)(inited + 456) = PepPerfStateSelectionHandler;
        if ( (*(_DWORD *)(a1 + 280) & 0x400000) != 0 && (v19 == 254 || v17 == 1) && v10 && v10[58] )
        {
          *(_BYTE *)(inited + 11) = 1;
          v20 = !_bittest64((const signed __int64 *)(a1 + 280), 0x22u) || !v10[57];
          *(_BYTE *)(v5 + 12) = v20;
          *(_DWORD *)(v5 + 48) = 1000;
        }
      }
      else
      {
        *(_QWORD *)(inited + 472) = PepPerfControlHandler;
        *(_QWORD *)(inited + 448) = PerfTargetDefaultHandler;
        *(_QWORD *)(inited + 456) = PepPerfSelectionHandler;
        *(_QWORD *)(inited + 384) = PepSetTimeWindow;
      }
      *(_BYTE *)(v5 + 6) = 0;
      v21 = v10 && v10[59];
      *(_BYTE *)(v5 + 7) = v21;
      *(_DWORD *)(v5 + 20) = v42;
      *(_DWORD *)(v5 + 24) = *(_DWORD *)(v4 + 24);
      v22 = *(_DWORD *)(v4 + 28);
      *(_DWORD *)(v5 + 28) = v22;
      v23 = *(_DWORD *)(v4 + 32);
      *(_DWORD *)(v5 + 32) = v23;
      if ( !v22 )
        *(_DWORD *)(v5 + 28) = 1;
      if ( !v23 )
        *(_DWORD *)(v5 + 32) = 1;
      *(_QWORD *)(v5 + 56) = *(unsigned int *)(v4 + 16);
      *(_QWORD *)(v5 + 64) = *(unsigned int *)(v4 + 8);
      if ( *(_BYTE *)(v4 + 37) )
        v24 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 4LL);
      else
        v24 = (unsigned int)(*(_DWORD *)(v4 + 4) * v42 + (*(_DWORD *)(v4 + 8) >> 1)) / *(_DWORD *)(v4 + 8);
      *(_DWORD *)(v5 + 44) = v24;
      if ( *(_BYTE *)(v4 + 36) )
        *(_BYTE *)(v5 + 9) = 1;
      *(_BYTE *)(v5 + 52) = *(_BYTE *)v4;
      if ( *(_BYTE *)v4 == 1 )
        *(_QWORD *)(v5 + 416) = AcpiCStateIdleComplete;
      v25 = *(_QWORD *)(v5 + 576);
      v26 = *(_QWORD **)(v5 + 584);
      v27 = Pool2;
      ResetEnumerationContext((__int64 *)v45);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v45, &v43) )
      {
        v29 = v48;
        do
        {
          v30 = PepTranslateLimitReason(*((unsigned int *)v27 + 14));
          InitCommonPerfStateContext(v43, v27, v25, *((_DWORD *)v27 + 17), v30);
          *(_QWORD *)(a1 + 216) = v27;
          *v26++ = v27;
          if ( v29 != -1 )
            *v26++ = v27;
          v25 += 32LL;
          v27 += 72;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v45, &v43) );
        v4 = v44;
        v28 = 1;
      }
      v31 = *(unsigned int *)(v4 + 48);
      v32 = 100LL;
      v33 = *(_QWORD *)(v5 + 568);
      *(_DWORD *)(v33 + 12) = 0;
      *(_BYTE *)(v33 + 16) = v28 & *(_BYTE *)(v4 + 8 * v31 + 56);
      v34 = *(_DWORD *)(v4 + 8 * v31 + 56) & 6;
      *(_BYTE *)(v33 + 17) = (_DWORD)v34 == 2;
      *(_BYTE *)(v33 + 18) = v28 & (*(_DWORD *)(v4 + 8 * v31 + 56) >> 7);
      v35 = PepInstantaneousFrequencyRead;
      if ( (_DWORD)v34 == 2 )
        v35 = PepDifferentialFrequencyRead;
      *(_QWORD *)v33 = v35;
      v36 = 100;
      if ( (_DWORD)v34 == 2 )
        v36 = 0x10000;
      v37 = v48 == -1;
      *(_DWORD *)(v33 + 8) = v36;
      *(_DWORD *)(v5 + 36) = v28;
      if ( !v37 )
      {
        v38 = *(unsigned int *)(v4 + 52);
        v33 = *(_QWORD *)(v5 + 568);
        *(_DWORD *)(v33 + 36) = v28;
        *(_BYTE *)(v33 + 40) = v28 & *(_BYTE *)(v4 + 8 * v38 + 56);
        v34 = *(_DWORD *)(v4 + 8 * v38 + 56) & 6;
        *(_BYTE *)(v33 + 41) = (_DWORD)v34 == 2;
        *(_BYTE *)(v33 + 42) = v28 & (*(_DWORD *)(v4 + 8 * v38 + 56) >> 7);
        v39 = PepInstantaneousPerfRead;
        if ( (_DWORD)v34 == 2 )
        {
          v39 = PepDifferentialPerfRead;
          v32 = 0x10000LL;
        }
        *(_QWORD *)(v33 + 24) = v39;
        *(_DWORD *)(v33 + 32) = v32;
        *(_DWORD *)(v5 + 36) += v28;
      }
      *(_BYTE *)(v5 + 15) = v28;
      v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_1400158F8)(v5, v34, v33, v32);
      if ( v7 >= 0 )
      {
        ResetEnumerationContext((__int64 *)v45);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)v45, &v43) )
        {
          Pool2 = 0LL;
          do
            *(_QWORD *)(v43 + 1192) = v40;
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v45, &v43) );
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 48;
LABEL_19:
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          3,
          v16,
          (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
          v7);
      }
    }
    else
    {
LABEL_9:
      v7 = -1073741670;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        3,
        46,
        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
    }
    v7 = -1073741823;
  }
LABEL_68:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400155D8);
  if ( v5 )
    ExFreePoolWithTag((PVOID)v5, (ULONG)1919119952);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  return (unsigned int)v7;
}
