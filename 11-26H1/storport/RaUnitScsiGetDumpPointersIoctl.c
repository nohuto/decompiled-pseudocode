/*
 * XREFs of RaUnitScsiGetDumpPointersIoctl @ 0x14009F164
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x140011BB0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     RtlStringCbPrintfW @ 0x14004308C (RtlStringCbPrintfW.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     WPP_SF_qD @ 0x14006F3F4 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     RaidQueryCrashdumpFunctions @ 0x14007FBFC (RaidQueryCrashdumpFunctions.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1400AAC8C (StorPortGetAdditionalCrashDumpArea.c)
 *     WPP_SF_S @ 0x1400AC8DC (WPP_SF_S.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitScsiGetDumpPointersIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // ebx
  unsigned int *Srb; // rsi
  int AdditionalCrashDumpArea; // edi
  _DWORD *v8; // r12
  __int64 Pool; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  wchar_t *v15; // rdi
  PVOID v16; // rax
  char v17; // al
  PVOID v18; // rdi
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  __int64 ContiguousIoResources; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r11
  _QWORD *v25; // r8
  int v26; // eax
  char *v27; // r8
  int v28; // eax
  int v29; // eax
  char v30; // al
  const wchar_t *v31; // r8
  _DWORD *v32; // rax
  _DWORD *v33; // rcx
  unsigned int v34; // ecx
  int v35; // eax
  char *v36; // rcx
  unsigned __int16 *v37; // r12
  NTSTATUS FullDriverPath; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  void *v41; // rcx
  _QWORD *v42; // r12
  size_t v43; // rdi
  WCHAR *v44; // rax
  const WCHAR *v45; // r14
  void *v46; // rcx
  PVOID v47; // r12
  void *v48; // rcx
  unsigned int *v49; // rax
  bool v50; // zf
  __int64 v51; // rcx
  __int64 v52; // rdx
  int *v53; // rax
  const EVENT_DESCRIPTOR *v54; // rdx
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  char v57; // r13
  _BYTE *v58; // r9
  unsigned __int8 v59; // r14
  char v60; // r10
  char v61; // si
  char v62; // r11
  char v63; // r12
  char *v64; // r12
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // r8
  int v68; // ecx
  char v69; // cl
  char v70; // al
  char v71; // r8
  char *v72; // r11
  unsigned int v73; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  char v76; // [rsp+60h] [rbp-69h]
  char v77; // [rsp+60h] [rbp-69h]
  NTSTATUS v78; // [rsp+64h] [rbp-65h]
  _QWORD *v79; // [rsp+68h] [rbp-61h]
  unsigned int v80; // [rsp+68h] [rbp-61h]
  __int64 v81; // [rsp+78h] [rbp-51h]
  int v82; // [rsp+78h] [rbp-51h]
  char *P; // [rsp+80h] [rbp-49h]
  __int64 v84; // [rsp+88h] [rbp-41h]
  unsigned int *v85; // [rsp+90h] [rbp-39h]
  UNICODE_STRING String2; // [rsp+98h] [rbp-31h] BYREF
  PVOID v87; // [rsp+A8h] [rbp-21h]
  PVOID v88; // [rsp+B0h] [rbp-19h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-11h] BYREF
  wchar_t pszDest[8]; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v91; // [rsp+D8h] [rbp+Fh]
  int v92; // [rsp+E0h] [rbp+17h]
  __int16 v93; // [rsp+E4h] [rbp+1Bh]

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v87 = 0LL;
  Srb = 0LL;
  v84 = 0LL;
  v81 = 0LL;
  v79 = 0LL;
  String2 = 0LL;
  v85 = 0LL;
  v76 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_BYTE *)(a2 + 64) )
  {
    AdditionalCrashDumpArea = -1073741790;
    goto LABEL_138;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) < 0x68u )
  {
    AdditionalCrashDumpArea = -1073741789;
    goto LABEL_138;
  }
  v8 = *(_DWORD **)(a2 + 24);
  memset_0(v8, 0, 0x68uLL);
  Pool = RaidAllocatePool(64LL, 320LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  P = (char *)Pool;
  if ( !Pool )
  {
    AdditionalCrashDumpArea = -1073741670;
    goto LABEL_138;
  }
  *(_DWORD *)Pool = 1;
  *(_DWORD *)(Pool + 4) = 248;
  v10 = Pool + 248;
  *(_DWORD *)(Pool + 8) = 1145917508;
  *(_OWORD *)(Pool + 16) = *(_OWORD *)(v2 + 384);
  *(_OWORD *)(Pool + 32) = *(_OWORD *)(v2 + 400);
  *(_OWORD *)(Pool + 48) = *(_OWORD *)(v2 + 416);
  *(_OWORD *)(Pool + 64) = *(_OWORD *)(v2 + 432);
  *(_OWORD *)(Pool + 80) = *(_OWORD *)(v2 + 448);
  *(_OWORD *)(Pool + 96) = *(_OWORD *)(v2 + 464);
  *(_OWORD *)(Pool + 112) = *(_OWORD *)(v2 + 480);
  *(_OWORD *)(Pool + 128) = *(_OWORD *)(v2 + 496);
  *(_OWORD *)(Pool + 144) = *(_OWORD *)(v2 + 512);
  *(_OWORD *)(Pool + 160) = *(_OWORD *)(v2 + 528);
  *(_OWORD *)(Pool + 176) = *(_OWORD *)(v2 + 544);
  *(_OWORD *)(Pool + 192) = *(_OWORD *)(v2 + 560);
  *(_OWORD *)(Pool + 208) = *(_OWORD *)(v2 + 576);
  *(_OWORD *)(Pool + 224) = *(_OWORD *)(v2 + 592);
  v11 = *(_QWORD *)(v2 + 608);
  if ( (*(_DWORD *)(v11 + 184) & 0x80u) != 0 && (*(_DWORD *)(v11 + 188) & 2) != 0 )
    *(_WORD *)(Pool + 240) = HiberFileHybridPriority;
  else
    *(_WORD *)(Pool + 240) = -1;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1872)) >= 0 )
    {
      *(_BYTE *)v10 = 1;
      v76 = 1;
      *(_QWORD *)(v10 + 8) = **(_QWORD **)(a1 + 1872);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  v12 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 5024LL);
  if ( v12 && (int)PoFxRegisterCrashdumpDevice(*v12) >= 0 )
  {
    *(_BYTE *)(v10 + 32) = 1;
    v76 = 1;
    *(_QWORD *)(v10 + 40) = **(_QWORD **)(*(_QWORD *)(a1 + 24) + 5024LL);
  }
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 5090LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 5088LL) = 40;
  if ( RaidQueryCrashdumpFunctions(
         *(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 24LL),
         (_LARGE_INTEGER)(*(_QWORD *)(a1 + 24) + 5088LL)) >= 0
    && (v13 = *(_QWORD *)(a1 + 24), (v14 = *(_QWORD *)(v13 + 5120)) != 0)
    && *(_QWORD *)(v13 + 5112) )
  {
    *(_QWORD *)(v10 + 56) = v14;
    *(_QWORD *)(v10 + 64) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5096LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 5090LL) = 0;
    if ( !v76 )
      goto LABEL_24;
  }
  *((_QWORD *)v8 + 12) = v10;
  *((_QWORD *)v8 + 11) = StorDumpDevicePowerOn;
LABEL_24:
  *(_QWORD *)(v10 + 16) = a1 + 1862;
  *(_QWORD *)(v10 + 48) = *(_QWORD *)(a1 + 24) + 4957LL;
  *(_QWORD *)(v10 + 24) = a1 + 1863;
  v88 = (PVOID)RaidAllocatePool(64LL, 88LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( !v88 )
    goto LABEL_25;
  v79 = (_QWORD *)RaidAllocatePool(64LL, 88LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v15 = (wchar_t *)v79;
  if ( !v79 )
    goto LABEL_25;
  RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v88 + 4, 0x1EuLL, L"diskdump.sys");
  RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v88 + 19, 0x1EuLL, L"storport.sys");
  v16 = v88;
  *(_QWORD *)v88 = v79;
  *v79 = 0LL;
  *((_QWORD *)v8 + 5) = v16;
  *((_QWORD *)v8 + 10) = a1 + 1863;
  *v8 = 4;
  v8[1] = 104;
  *((_QWORD *)v8 + 1) = P;
  *((_QWORD *)v8 + 2) = 0LL;
  *((_BYTE *)v8 + 28) = 1;
  *((_QWORD *)v8 + 4) = 0LL;
  v17 = *(_BYTE *)(v2 + 528);
  if ( v17 == 2 || (unsigned __int8)(v17 - 3) <= 1u )
    v8[12] |= 1u;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 608) + 184LL) & 0x20) != 0 )
    v8[12] |= 4u;
  if ( *(_BYTE *)(v2 + 4434) && (*(_DWORD *)(*(_QWORD *)(v2 + 608) + 184LL) & 8) == 0 )
    goto LABEL_72;
  v87 = (PVOID)RaidAllocatePool(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v18 = v87;
  if ( !v87 )
    goto LABEL_25;
  Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 38, *(_BYTE *)(v2 + 482), 0);
  if ( !Srb )
    goto LABEL_25;
  v20 = (_DWORD *)(v2 + 316);
  if ( *(_DWORD *)v2 != 1314275652 )
    v20 = (_DWORD *)(v2 + 524);
  ContiguousIoResources = StorAllocateContiguousIoResources(((*v20 + 7) & 0xFFFFFFF8) + 1200, v19, (_QWORD *)v2);
  v84 = ContiguousIoResources;
  if ( !ContiguousIoResources )
  {
LABEL_25:
    AdditionalCrashDumpArea = -1073741670;
LABEL_121:
    v47 = v87;
    ExFreePoolWithTag(P, 0x44436152u);
    if ( v88 )
      ExFreePoolWithTag(v88, 0x44436152u);
    if ( v79 )
    {
      v48 = (void *)v79[10];
      if ( v48 )
        ExFreePoolWithTag(v48, 0);
      ExFreePoolWithTag(v79, 0x44436152u);
    }
    goto LABEL_127;
  }
  v81 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v22, 0, 0LL);
  *(_BYTE *)(v81 + 17) |= 8u;
  *(_QWORD *)(v81 + 176) = a2;
  *(_QWORD *)(v81 + 184) = v18;
  *(_QWORD *)(v81 + 168) = Srb;
  if ( *(_BYTE *)(v2 + 482) == 1 )
  {
    *((_QWORD *)Srb + 12) = v81;
    *((_QWORD *)Srb + 10) = a2;
    Srb[5] = 38;
    *((_QWORD *)Srb + 8) = v18;
    Srb[15] = 112;
    Srb[6] = 256;
    v85 = Srb;
    if ( !*(_BYTE *)(v2 + 4434) )
      Srb[6] = 64;
    v23 = Srb[13];
    Srb[10] = 10;
    *((_BYTE *)Srb + v23 + 8) = *(_BYTE *)(a1 + 104);
    *((_BYTE *)Srb + v23 + 9) = *(_BYTE *)(a1 + 105);
    *((_BYTE *)Srb + v23 + 10) = *(_BYTE *)(a1 + 106);
  }
  else
  {
    *((_QWORD *)Srb + 6) = v81;
    *((_BYTE *)Srb + 2) = 38;
    *((_QWORD *)Srb + 3) = v18;
    Srb[4] = 112;
    *(_WORD *)Srb = 88;
    Srb[3] = 256;
    if ( !*(_BYTE *)(v2 + 4434) )
      Srb[3] = 64;
    Srb[5] = 10;
    *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 104);
    *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 105);
    *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 106);
  }
  RaSrbSetMiniportContext((int *)v2, (__int64)Srb, v84 + 1200);
  KeInitializeEvent((PRKEVENT)(v24 + 664), NotificationEvent, 0);
  v25 = (_QWORD *)v81;
  *(_QWORD *)(v81 + 656) = RaidXrbSignalCompletion;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Du,
      (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
      v81,
      Srb);
    v25 = (_QWORD *)v81;
  }
  if ( *(_BYTE *)(v2 + 4434) )
    v26 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v25);
  else
    v26 = RaidAdapterPostScatterGatherExecute(v2, (__int64)v25);
  AdditionalCrashDumpArea = v26;
  if ( v26 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v81 + 664), Executive, 0, 0, 0LL);
    AdditionalCrashDumpArea = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    LODWORD(Timeout) = *((unsigned __int8 *)Srb + 3);
    WPP_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Eu,
      (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
      AdditionalCrashDumpArea,
      Timeout);
  }
  if ( AdditionalCrashDumpArea < 0 )
  {
    if ( !*(_BYTE *)(v2 + 4434) || (*(_DWORD *)(*(_QWORD *)(v2 + 608) + 184LL) & 0x1000) != 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = AdditionalCrashDumpArea;
        WPP_SF_qD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Fu,
          (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
          v81,
          Timeout);
      }
      goto LABEL_121;
    }
  }
  else
  {
    v27 = (char *)v87;
    v28 = *((_DWORD *)v87 + 20);
    if ( v28 )
    {
      *((_DWORD *)P + 10) = v28;
      v29 = *((_DWORD *)v27 + 20);
    }
    else
    {
      v29 = *((_DWORD *)P + 10);
    }
    v8[15] = v29;
    *((_QWORD *)P + 10) = *((_QWORD *)v27 + 8);
    if ( !*(_BYTE *)(v2 + 4434) )
    {
      *((_DWORD *)P + 5) = *((_DWORD *)v27 + 18);
      *((_DWORD *)P + 6) = *((_DWORD *)v27 + 19);
      *((_DWORD *)P + 11) = *((_DWORD *)v27 + 21);
      *((_DWORD *)P + 16) = *((_DWORD *)v27 + 22);
      *((_DWORD *)P + 17) = *((_DWORD *)v27 + 23);
      *((_QWORD *)P + 9) = *((_QWORD *)v27 + 12);
      P[88] = v27[104];
      P[98] = v27[105];
      P[105] = v27[106];
      v30 = v27[107];
      v31 = (const wchar_t *)(v27 + 4);
      P[113] = v30;
      if ( !*v31 )
      {
        AdditionalCrashDumpArea = -1073741637;
        goto LABEL_121;
      }
      AdditionalCrashDumpArea = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v79 + 4, 0x1EuLL, v31);
      if ( AdditionalCrashDumpArea < 0 )
        goto LABEL_121;
      v32 = v87;
      *((_QWORD *)v8 + 8) = 0LL;
      *((_QWORD *)v8 + 9) = 0LL;
      v8[6] = v32[14];
    }
    *(_BYTE *)(a1 + 1861) = 1;
  }
  v15 = (wchar_t *)v79;
LABEL_72:
  RaidDriverGetName(*(_QWORD *)(v2 + 16), (__int64)&String2);
  if ( *(_BYTE *)(v2 + 4434) )
  {
    RtlStringCbPrintfW(v15 + 4, 0x1EuLL, L"%ws.sys", String2.Buffer);
    v33 = (_DWORD *)(v2 + 316);
    if ( *(_DWORD *)v2 != 1314275652 )
      v33 = (_DWORD *)(v2 + 524);
    v34 = (*v33 + 7) & 0xFFFFFFF8;
    if ( !v34 )
      v34 = 16;
    v8[6] = (*(_DWORD *)(v2 + 944) + 4095 + 16 * v34) & 0xFFFFF000;
    if ( !v8[15] )
      v8[15] = *((_DWORD *)P + 10);
    *((_QWORD *)v8 + 8) = *(_QWORD *)(v2 + 896);
    *((_QWORD *)v8 + 9) = v2 + 968;
    if ( (*(_DWORD *)(v2 + 604) & 1) != 0 || (v35 = *(_DWORD *)(a1 + 3432), v35 == 10) || v35 == 1 )
      v8[12] |= 2u;
  }
  v36 = (char *)v88;
  v8[12] |= 8u;
  RtlInitUnicodeString((PUNICODE_STRING)(v36 + 72), L"\\SystemRoot\\System32\\Drivers\\diskdump.sys");
  v37 = v15 + 36;
  FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 8LL), v15 + 36);
  if ( FullDriverPath >= 0 && !*(_BYTE *)(v2 + 4434) )
  {
    v91 = 0LL;
    *(_OWORD *)pszDest = 0LL;
    v92 = 0;
    v93 = 0;
    DestinationString = 0LL;
    FullDriverPath = RtlStringCbPrintfW(pszDest, 0x1EuLL, L"%ws.sys", String2.Buffer);
    v78 = FullDriverPath;
    if ( FullDriverPath >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      if ( *v37 > DestinationString.Length )
      {
        v43 = *v37 - (unsigned __int64)DestinationString.Length;
        String2 = 0LL;
        RtlInitUnicodeString(&String2, (PCWSTR)v79 + 4);
        if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
        {
          if ( DestinationString.Length >= String2.Length )
          {
            memset_0((void *)(v43 + v79[10]), 0, DestinationString.Length);
            memmove((void *)(v43 + v79[10]), String2.Buffer, String2.Length);
            *v37 = String2.Length + v43;
            v42 = v79;
          }
          else
          {
            v42 = v79;
            v44 = (WCHAR *)RaidAllocatePool(
                             64LL,
                             String2.Length + *((unsigned __int16 *)v79 + 37) - DestinationString.Length + 2LL,
                             1145266514LL,
                             *(_QWORD *)(a1 + 8));
            v45 = v44;
            if ( v44 )
            {
              memmove(v44, (const void *)v79[10], v43);
              memmove((char *)v45 + v43, String2.Buffer, String2.Length);
            }
            v46 = (void *)v79[10];
            if ( v46 )
            {
              ExFreePoolWithTag(v46, 0);
              *(_OWORD *)(v79 + 9) = 0LL;
            }
            if ( v45 )
              RtlInitUnicodeString((PUNICODE_STRING)(v79 + 9), v45);
          }
          goto LABEL_89;
        }
LABEL_88:
        v42 = v79;
LABEL_89:
        FullDriverPath = v78;
        goto LABEL_90;
      }
      v41 = (void *)*((_QWORD *)v15 + 10);
      if ( !v41 )
        goto LABEL_88;
LABEL_87:
      ExFreePoolWithTag(v41, 0);
      *(_OWORD *)v37 = 0LL;
      goto LABEL_88;
    }
    v41 = (void *)*((_QWORD *)v15 + 10);
    if ( v41 )
      goto LABEL_87;
  }
  v42 = v79;
LABEL_90:
  AdditionalCrashDumpArea = 0;
  if ( FullDriverPath >= 0 )
    AdditionalCrashDumpArea = FullDriverPath;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_S(WPP_GLOBAL_Control->AttachedDevice, v39, v40, v42 + 1);
  }
  if ( *(_DWORD *)(v2 + 576) )
    AdditionalCrashDumpArea = StorPortGetAdditionalCrashDumpArea(v2, P + 16);
  if ( AdditionalCrashDumpArea < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x21u,
        (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        AdditionalCrashDumpArea);
    }
    goto LABEL_121;
  }
  v47 = v87;
  *(_QWORD *)(a2 + 56) = 104LL;
LABEL_127:
  if ( v84 )
  {
    RaidXrbDeallocateResources(v81, 0);
    StorFreeContiguousIoResources(v2, v84);
  }
  if ( Srb )
  {
    if ( *((_BYTE *)Srb + 2) == 40 )
    {
      v49 = v85;
      if ( !v85 )
        v49 = Srb;
      *((_QWORD *)v49 + 10) = 0LL;
      *((_QWORD *)v49 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( v47 )
    ExFreePoolWithTag(v47, 0x44436152u);
LABEL_138:
  v50 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = AdditionalCrashDumpArea;
  if ( v50 )
    goto LABEL_204;
  DestinationString = 0LL;
  IoGetActivityIdIrp(a2, &DestinationString);
  v52 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v52 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_204;
    v54 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_203;
  }
  if ( *(_BYTE *)v52 != 15 )
  {
    if ( *(_BYTE *)v52 != 27 )
      goto LABEL_204;
    if ( *(_BYTE *)(v52 + 1) == 7 && !*(_DWORD *)(v52 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v53 = *(int **)(a2 + 56);
        if ( v53 )
          v3 = *v53;
        LODWORD(Timeout) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v51, v52, (const GUID *)&DestinationString, a2, Timeout, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_204;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_204;
    v54 = &EventPnpRequestComplete;
LABEL_203:
    LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v51, v54, (const GUID *)&DestinationString, a2, Timeout);
    goto LABEL_204;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_204;
  v55 = *(_QWORD *)(v52 + 8);
  v56 = 40LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  if ( *(_BYTE *)(v55 + 2) != 40 )
  {
    v69 = *(_BYTE *)(v55 + 72);
    v58 = *(_BYTE **)(v55 + 32);
    v59 = *(_BYTE *)(v55 + 11);
    v57 = *(_BYTE *)(v55 + 4);
    if ( *(_BYTE *)(v55 + 2) )
      goto LABEL_204;
LABEL_178:
    LOBYTE(v56) = v69 - 8;
    if ( (v56 & 0x5D) != 0 )
      goto LABEL_204;
    if ( *(_BYTE *)(v55 + 3) == 1 || !v58 || !v59 )
      goto LABEL_197;
    v70 = *v58 & 0x7F;
    if ( v70 == 114 || v70 == 115 )
    {
      v56 = (unsigned __int64)&v58[v59];
      v71 = 0;
      if ( (unsigned __int64)(v58 + 8) > v56 )
        goto LABEL_195;
      v61 = v58[2];
      v60 = v58[1] & 0xF;
      v62 = v58[3];
    }
    else
    {
      v56 = (unsigned __int64)&v58[v59];
      v71 = 0;
      if ( (unsigned __int64)(v58 + 8) > v56 )
        goto LABEL_195;
      v72 = v58 + 13;
      v60 = v58[2] & 0xF;
      v73 = v59;
      if ( (unsigned int)(unsigned __int8)v58[7] + 8 <= v59 )
        v73 = (unsigned __int8)v58[7] + 8;
      v56 = (unsigned __int64)&v58[v73];
      if ( (unsigned __int64)v72 <= v56 )
        v61 = v58[12];
      if ( (unsigned __int64)(v58 + 14) > v56 )
        v62 = 0;
      else
        v62 = *v72;
    }
    v71 = 1;
LABEL_195:
    if ( v71 )
      v63 = 1;
LABEL_197:
    if ( byte_140173441 < 0 )
    {
      if ( !v63 )
      {
        v62 = 0;
        v61 = 0;
        v60 = 0;
      }
      LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v56,
        v55,
        (const GUID *)&DestinationString,
        a2,
        Timeout,
        *(_BYTE *)(v55 + 3),
        v57,
        v60,
        v61,
        v62,
        a2);
    }
    goto LABEL_204;
  }
  v64 = 0LL;
  v77 = 0;
  if ( *(_DWORD *)(v55 + 20) )
    goto LABEL_204;
  v65 = 0LL;
  v82 = 0;
  v80 = *(_DWORD *)(v55 + 56);
  if ( !v80 )
    goto LABEL_204;
  while ( 1 )
  {
    v56 = *(unsigned int *)(v55 + 4 * v65 + 120);
    if ( (unsigned int)v56 >= 0x80 )
    {
      v66 = *(unsigned int *)(v55 + 16);
      if ( (unsigned int)v56 < (unsigned int)v66 )
        break;
    }
LABEL_169:
    v65 = (unsigned int)(v82 + 1);
    v82 = v65;
    if ( (unsigned int)v65 >= v80 )
      goto LABEL_175;
  }
  v67 = (unsigned int)v56;
  v68 = *(_DWORD *)(v56 + v55) - 64;
  if ( v68 )
  {
    v56 = (unsigned int)(v68 - 1);
    if ( (_DWORD)v56 )
    {
      if ( (_DWORD)v56 == 1 )
      {
        v56 = v67 + 40;
        if ( v67 + 40 <= v66 )
        {
          if ( *(_DWORD *)(v67 + v55 + 12) )
            v64 = (char *)(v67 + v55 + 32);
          v58 = *(_BYTE **)(v67 + v55 + 24);
          goto LABEL_174;
        }
      }
    }
    else
    {
      v56 = v67 + 56;
      if ( v67 + 56 <= v66 )
      {
        v77 = 1;
        if ( *(_BYTE *)(v67 + v55 + 10) )
          v64 = (char *)(v67 + v55 + 24);
        v57 = *(_BYTE *)(v67 + v55 + 8);
        v58 = *(_BYTE **)(v67 + v55 + 16);
        v59 = *(_BYTE *)(v67 + v55 + 9);
      }
    }
    goto LABEL_168;
  }
  v56 = v67 + 40;
  if ( v67 + 40 > v66 )
  {
LABEL_168:
    if ( v77 )
      goto LABEL_175;
    goto LABEL_169;
  }
  if ( *(_BYTE *)(v67 + v55 + 10) )
    v64 = (char *)(v67 + v55 + 24);
  v58 = *(_BYTE **)(v67 + v55 + 16);
LABEL_174:
  v59 = *(_BYTE *)(v67 + v55 + 9);
  v57 = *(_BYTE *)(v67 + v55 + 8);
LABEL_175:
  if ( v64 )
  {
    v69 = *v64;
    v63 = 0;
    goto LABEL_178;
  }
LABEL_204:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)AdditionalCrashDumpArea;
}
