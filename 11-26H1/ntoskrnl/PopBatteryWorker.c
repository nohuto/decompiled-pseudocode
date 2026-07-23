/*
 * XREFs of PopBatteryWorker @ 0x1407DB910
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     IoSynchronousCallDriver @ 0x1404ABE20 (IoSynchronousCallDriver.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 *     Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline @ 0x1404DA8A4 (Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x14072ADE0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopPowerAdapterTraceFailure @ 0x14077D91C (PopPowerAdapterTraceFailure.c)
 *     PopEvaluateWeakChargerState @ 0x1407DCC2C (PopEvaluateWeakChargerState.c)
 *     PopPowerAdapterPublishRecState @ 0x1407DD4A0 (PopPowerAdapterPublishRecState.c)
 *     PopResetCBTriggers @ 0x1407DDCB8 (PopResetCBTriggers.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1409BE914 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 *     PopPrepareIoctl @ 0x140AFD904 (PopPrepareIoctl.c)
 *     PopBatteryQueryStatus @ 0x140B00C30 (PopBatteryQueryStatus.c)
 *     PopAccountBatteryEnergyChange @ 0x140B061FC (PopAccountBatteryEnergyChange.c)
 *     PopBatteryQueryEstimatedTime @ 0x140B24440 (PopBatteryQueryEstimatedTime.c)
 *     PopEstimateChargeTime @ 0x140B26BD8 (PopEstimateChargeTime.c)
 *     PopBatteryEstimatesSpoiled @ 0x140B26DC0 (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryReadTag @ 0x140B3F4F0 (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x140B65670 (PopBatteryWaitTag.c)
 *     PopBatteryInitialize @ 0x140B76BD0 (PopBatteryInitialize.c)
 *     PopPowerAdapterQueryStatus @ 0x140B76DFC (PopPowerAdapterQueryStatus.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopBatteryWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 *v13; // rdi
  int v14; // eax
  __int64 *i; // rdi
  int v16; // eax
  int v17; // r13d
  __int32 v18; // r12d
  bool v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // rsi
  __int64 **v29; // rcx
  __int64 j; // rdi
  __int64 *v31; // rsi
  ULONG v32; // ebx
  __int64 *v33; // rdi
  int v34; // ecx
  int EstimatedTime; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  signed __int8 v39; // al
  signed __int8 v40; // di
  int v41; // ecx
  unsigned int v42; // ecx
  bool v43; // zf
  __int64 v44; // rcx
  NTSTATUS Status; // eax
  int v46; // edx
  __m128i v47; // xmm6
  struct _EVENT_DATA_DESCRIPTOR v48; // xmm7
  __int64 *v49; // xmm8_8
  int v50; // ecx
  int v51; // eax
  __int128 v52; // xmm1
  __int64 v53; // rcx
  unsigned int v54; // r13d
  int v55; // r14d
  int v56; // r15d
  int v57; // r12d
  struct _KLOCK_ENTRIES *v58; // r9
  int v59; // edi
  __int64 v60; // rsi
  unsigned int v61; // ebx
  int v62; // edx
  int v63; // r8d
  int v64; // ecx
  int v65; // eax
  int v66; // eax
  unsigned int v67; // r9d
  int v68; // eax
  unsigned int v69; // eax
  int v70; // eax
  unsigned int v71; // r9d
  int v72; // eax
  int v73; // eax
  int v74; // eax
  unsigned int v75; // eax
  int v76; // r9d
  __int64 v77; // rcx
  unsigned int v78; // r14d
  __int64 *v79; // rsi
  unsigned int v80; // ebx
  int v81; // eax
  unsigned int v82; // ecx
  char v83; // si
  __int64 v84; // rdx
  int v85; // ecx
  NTSTATUS updated; // r14d
  const CHAR *v87; // rdx
  const CHAR *v88; // r9
  char v89; // r8
  const CHAR *v90; // rdx
  const CHAR *v91; // r9
  char v92; // r8
  const CHAR *v93; // rdx
  const CHAR *v94; // r9
  char v95; // r8
  const CHAR *v96; // rdx
  int v97; // edi
  char v98; // r15
  ULONG v99; // edi
  unsigned int v100; // r14d
  char v101; // al
  __int64 v102; // rdx
  __int64 *v103; // rdi
  int v104; // eax
  char v105; // al
  char v106; // bl
  char v107; // di
  const CHAR *v108; // rdx
  char v109; // r8
  const CHAR *v110; // rdx
  const CHAR *v111; // r11
  char v112; // r8
  const CHAR *v113; // rdx
  const CHAR *v114; // r11
  char v115; // r8
  const CHAR *v116; // rdx
  const CHAR *v117; // r11
  const CHAR *v118; // rdx
  char v119; // r8
  const CHAR *v120; // r11
  char v121; // r8
  const CHAR *v122; // rdx
  const CHAR *v123; // r11
  char v124; // r8
  const CHAR *v125; // rdx
  const CHAR *v126; // r11
  const CHAR *v127; // rdx
  char v128; // r8
  const CHAR *v129; // r11
  const CHAR *v130; // rdx
  unsigned int v131; // r10d
  ULONG v132; // eax
  unsigned __int64 v133; // rax
  const CHAR *v134; // rdx
  int v135; // r9d
  NTSTATUS v136; // eax
  signed __int32 v138[8]; // [rsp+8h] [rbp-100h] BYREF
  PVOID Buffer; // [rsp+28h] [rbp-E0h]
  PULONG BufferSize; // [rsp+30h] [rbp-D8h]
  __int64 CheckStamp; // [rsp+38h] [rbp-D0h]
  __int64 v142; // [rsp+40h] [rbp-C8h]
  __int64 v143; // [rsp+48h] [rbp-C0h]
  bool v144; // [rsp+58h] [rbp-B0h] BYREF
  char v145; // [rsp+59h] [rbp-AFh] BYREF
  int v146; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v147; // [rsp+60h] [rbp-A8h] BYREF
  int v148; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v149; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v150; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG v151; // [rsp+70h] [rbp-98h] BYREF
  ULONG ChangeStamp; // [rsp+74h] [rbp-94h] BYREF
  bool v153; // [rsp+78h] [rbp-90h] BYREF
  bool v154; // [rsp+79h] [rbp-8Fh]
  int v155; // [rsp+7Ch] [rbp-8Ch]
  __int64 v156; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v157; // [rsp+88h] [rbp-80h] BYREF
  int v158; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int128 v159; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v160; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v161; // [rsp+A8h] [rbp-60h]
  int v162; // [rsp+B0h] [rbp-58h]
  __int64 v163; // [rsp+B4h] [rbp-54h]
  int v164; // [rsp+BCh] [rbp-4Ch]
  int v165; // [rsp+C0h] [rbp-48h]
  __int64 v166; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v167; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v168; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v169[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v170; // [rsp+108h] [rbp+0h]
  __int128 v171; // [rsp+118h] [rbp+10h] BYREF
  __int128 v172; // [rsp+128h] [rbp+20h]
  _BYTE v173[24]; // [rsp+138h] [rbp+30h] BYREF
  int v174; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v175[2]; // [rsp+158h] [rbp+50h] BYREF
  unsigned int *v176; // [rsp+178h] [rbp+70h]
  __int64 v177; // [rsp+180h] [rbp+78h]
  __int64 *v178; // [rsp+188h] [rbp+80h] BYREF
  __int64 v179; // [rsp+190h] [rbp+88h]
  ULONG *p_ChangeStamp; // [rsp+198h] [rbp+90h] BYREF
  __int64 v181; // [rsp+1A0h] [rbp+98h]
  _QWORD v182[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v183[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v184[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v185[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v186[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  char v187[16]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v188[16]; // [rsp+208h] [rbp+100h] BYREF
  ULONG *v189; // [rsp+218h] [rbp+110h]
  __int64 v190; // [rsp+220h] [rbp+118h]
  int *v191; // [rsp+228h] [rbp+120h]
  __int64 v192; // [rsp+230h] [rbp+128h]
  __int128 *v193; // [rsp+238h] [rbp+130h]
  __int64 v194; // [rsp+240h] [rbp+138h]
  ULONG *v195; // [rsp+248h] [rbp+140h]
  __int64 v196; // [rsp+250h] [rbp+148h]
  int *v197; // [rsp+258h] [rbp+150h]
  __int64 v198; // [rsp+260h] [rbp+158h]
  unsigned int *v199; // [rsp+268h] [rbp+160h]
  __int64 v200; // [rsp+270h] [rbp+168h]
  unsigned int *v201; // [rsp+278h] [rbp+170h]
  __int64 v202; // [rsp+280h] [rbp+178h]
  unsigned int *v203; // [rsp+288h] [rbp+180h]
  __int64 v204; // [rsp+290h] [rbp+188h]
  char v205[16]; // [rsp+298h] [rbp+190h] BYREF
  int *v206; // [rsp+2A8h] [rbp+1A0h]
  __int64 v207; // [rsp+2B0h] [rbp+1A8h]
  __int64 *v208; // [rsp+2B8h] [rbp+1B0h]
  __int64 v209; // [rsp+2C0h] [rbp+1B8h]
  struct _EVENT_DATA_DESCRIPTOR v210[2]; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int64 *v211; // [rsp+2E8h] [rbp+1E0h]
  __int64 v212; // [rsp+2F0h] [rbp+1E8h]

  v166 = 0LL;
  v167 = 0LL;
  v168 = 0LL;
  v144 = 0;
  v171 = 0LL;
  v172 = 0LL;
  v174 = 0;
  memset(v173, 0, sizeof(v173));
  PopAcquireRwLockShared(&PopPolicyDeviceLock, a2, a3, a4);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB, v5, v6, v7);
  v156 = 0LL;
  ChangeStamp = 0;
  v151 = 8;
  v8 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp, &v156, &v151);
  if ( v8 == -1073741670 || v8 == -1073741431 )
  {
    v155 = 0;
  }
  else if ( v8 || v151 != 8 )
  {
    v155 = 1;
  }
  else
  {
    v155 = (v156 != 0) + 2;
  }
  v12 = qword_140F108D0;
  v13 = (__int64 *)qword_140F10650;
  v156 = qword_140F108D0;
  while ( v13 != &qword_140F10650 )
  {
    IoCancelIrp((PIRP)*(v13 - 1));
    v13 = (__int64 *)*v13;
  }
  if ( v12 )
  {
    if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
    {
      v14 = *(_DWORD *)(v12 + 128);
      if ( v14 == 1 || v14 == 2 )
        IoCancelIrp(*(PIRP *)(v12 + 56));
    }
  }
  for ( i = (__int64 *)qword_140F10650; i != &qword_140F10650; i = (__int64 *)*i )
    KeWaitForSingleObject(i + 2, Executive, 0, 0, 0LL);
  if ( v12 )
  {
    if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
    {
      v16 = *(_DWORD *)(v12 + 128);
      if ( v16 == 1 || v16 == 2 )
        KeWaitForSingleObject((PVOID)(v12 + 104), Executive, 0, 0, 0LL);
    }
  }
  LOBYTE(i) = 0;
  v145 = 0;
  LOBYTE(v10) = 0;
  v146 = (int)i;
  v151 = v10;
  for ( LOBYTE(v17) = 0; ; LOBYTE(v17) = v158 )
  {
    LOBYTE(v4) = 0;
    v17 = (unsigned __int8)v17;
    v150 = v4;
    v18 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v148 = v18;
    v19 = (v18 & 2) != 0;
    if ( (v18 & 8) != 0 )
      v17 = 1;
    v158 = v17;
    if ( (v18 & 0x10) != 0 )
    {
      PopAcquirePolicyLock(v10, v9);
      LOBYTE(v20) = 0x80;
      PopResetCBTriggers(v20);
      PopReleasePolicyLock(v22, v21, v23, v24, Buffer);
    }
    v154 = (v18 & 0x40) != 0;
    ChangeStamp = v154;
    if ( (v18 & 0x80u) != 0 )
    {
      if ( v12 )
      {
        if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
        {
          v25 = *(_DWORD *)(v12 + 128);
          if ( v25 == 1 || v25 == 2 )
          {
            LOBYTE(v4) = (*(_BYTE *)(v12 + 140) & 1) != 0;
            v150 = (unsigned __int8)v4;
          }
        }
      }
    }
    v26 = qword_140F10650;
    if ( (__int64 *)qword_140F10650 != &qword_140F10650 )
    {
      do
      {
        v27 = *(__int64 **)v26;
        v28 = v26 - 64;
        if ( *(_DWORD *)(v26 - 64 + 104) == 2 )
        {
          if ( v27[1] != v26 || (v29 = *(__int64 ***)(v26 + 8), *v29 != (__int64 *)v26) )
            __fastfail(3u);
          *v29 = v27;
          v27[1] = (__int64)v29;
          *(_QWORD *)v26 = 0LL;
          ++dword_140F106AC;
          --dword_140F10634;
          byte_140F10638 = 1;
          if ( (int)PopBatteryReadTag(v26 - 64) < 0 )
            PopBatteryWaitTag(v28);
          v19 = 1;
        }
        v26 = (__int64)v27;
      }
      while ( v27 != &qword_140F10650 );
    }
    for ( j = qword_140F10640; (__int64 *)j != &qword_140F10640; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 1 )
      {
        KeWaitForSingleObject((PVOID)(j + 80), Executive, 0, 0, 0LL);
        if ( (int)PopBatteryInitialize(j) < 0 )
          PopBatteryWaitTag(j);
        else
          v19 = 1;
      }
    }
    v31 = (__int64 *)qword_140F10650;
    if ( (__int64 *)qword_140F10650 != &qword_140F10650 )
    {
      v32 = v151;
      do
      {
        v33 = v31 - 8;
        LOBYTE(v9) = 1;
        v159 = *(_OWORD *)((char *)v31 + 84);
        if ( (int)PopBatteryQueryStatus(v31 - 8, v9) >= 0 )
        {
          PopAccountBatteryEnergyChange(v31 - 8);
          v34 = *((_DWORD *)v33 + 37);
          v32 = (unsigned __int8)v32;
          if ( (_DWORD)v159 != v34 )
            v32 = 1;
          if ( (((unsigned __int8)v159 ^ (unsigned __int8)v34) & 7) != 0 )
          {
            LOBYTE(v146) = 1;
          }
          else if ( DWORD1(v159) != *((_DWORD *)v33 + 38) || HIDWORD(v159) != *((_DWORD *)v33 + 40) )
          {
            LOBYTE(v158) = 1;
          }
          EstimatedTime = -1;
          if ( (v34 & 2) != 0 )
            EstimatedTime = PopBatteryQueryEstimatedTime(v31 - 8, 0LL);
          *((_DWORD *)v33 + 46) = EstimatedTime;
          v36 = 0;
          if ( EstimatedTime != -1 )
            v36 = EstimatedTime;
          v37 = *((_DWORD *)v33 + 40);
          LODWORD(v143) = v36;
          LODWORD(v142) = v37;
          LODWORD(CheckStamp) = *((_DWORD *)v33 + 39);
          LODWORD(BufferSize) = *((_DWORD *)v33 + 38);
          LODWORD(Buffer) = *((_DWORD *)v33 + 37);
          DbgPrintEx(
            0x92u,
            3u,
            "\n"
            "Battery Status [%p]\n"
            "|-- PowerState = 0x%08x\n"
            "|-- Capacity   = %u\n"
            "|-- Voltage    = %u\n"
            "|-- Rate       = %d\n"
            "|-- Est Time   = %u\n",
            v31 - 8,
            Buffer,
            BufferSize,
            CheckStamp,
            v142,
            v143);
        }
        else
        {
          *((_DWORD *)v33 + 26) = 2;
          PopBatteryQueueWork(1u);
        }
        v31 = (__int64 *)*v31;
      }
      while ( v31 != &qword_140F10650 );
      LOBYTE(v4) = v150;
      LOBYTE(v18) = v148;
      v151 = v32;
      v12 = v156;
    }
    if ( !v12 )
      goto LABEL_87;
    if ( !(unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_87;
    v38 = *(_DWORD *)(v12 + 128);
    if ( v38 != 1 && v38 != 2 )
      goto LABEL_87;
    if ( (_BYTE)v4 )
    {
      _m_prefetchw(&PopPowerAdapterRecOverride);
      v39 = _InterlockedOr8(&PopPowerAdapterRecOverride, 0);
      v40 = v39;
      if ( v39 == *(_BYTE *)(v12 + 216) )
      {
LABEL_87:
        LOBYTE(v50) = v146;
        goto LABEL_88;
      }
      v41 = *(_DWORD *)(v12 + 180);
      if ( v39 )
        v42 = v41 | 4;
      else
        v42 = v41 & 0xFFFFFFFB;
      *(_DWORD *)(v12 + 180) = v42;
      v147 = 0;
      v43 = (v42 & 4) == 0;
      v44 = *(_QWORD *)(v12 + 56);
      *(_WORD *)((char *)&v147 + 1) = !v43;
      PopPrepareIoctl(v44, 2703476, 0, (unsigned int)&v147, 4, 0);
      Status = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(v12 + 48), *(IRP **)(v12 + 56));
      if ( Status >= 0 )
      {
        *(_DWORD *)(v12 + 128) = 1;
        *(_BYTE *)(v12 + 216) = v40;
        goto LABEL_87;
      }
      v46 = 3;
LABEL_79:
      PopPowerAdapterTraceFailure((_DWORD *)v12, v46, Status);
      goto LABEL_87;
    }
    v47 = *(__m128i *)(v12 + 176);
    LOBYTE(v9) = 1;
    v48 = *(struct _EVENT_DATA_DESCRIPTOR *)(v12 + 192);
    v49 = *(__int64 **)(v12 + 208);
    Status = PopPowerAdapterQueryStatus(v12, v9);
    if ( Status < 0 )
    {
      v46 = 4;
      goto LABEL_79;
    }
    v50 = (unsigned __int8)v146;
    *(_DWORD *)(v12 + 128) = 1;
    v51 = *(_DWORD *)(v12 + 140);
    if ( ((*(_BYTE *)(v12 + 180) ^ (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v47, 4))) & 1) != 0 )
      v50 = 1;
    v146 = v50;
    if ( (v51 & 1) != 0 )
    {
      v52 = *(_OWORD *)(v12 + 192);
      v169[0] = *(_OWORD *)(v12 + 176);
      v170 = *(_QWORD *)(v12 + 208);
      v169[1] = v52;
      v210[0] = (struct _EVENT_DATA_DESCRIPTOR)v47;
      v210[1] = v48;
      v211 = v49;
      PopPowerAdapterPublishRecState(v210, v169);
      goto LABEL_87;
    }
LABEL_88:
    if ( v19 )
    {
      PopBatteryUpdateCompositeInformation();
      LOBYTE(v50) = 1;
      PopMaxChargeRate = 0LL;
      v146 = v50;
    }
    if ( (v18 & 4) != 0 || (_BYTE)v50 )
    {
      if ( PopEstimateSpoilerMask )
      {
        PopEstimateSpoiledUntilTime = -1LL;
        KeCancelTimer(&stru_140F0D1E0);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_140F0D1E0, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
      }
    }
    v157 = 0;
    v53 = 0x80000000LL;
    LODWORD(v159) = -1;
    v148 = -1;
    v162 = 0;
    v54 = -1;
    v160 = 0xFFFFFFFF00000000uLL;
    v165 = -1;
    v55 = -1;
    v150 = 0x80000000;
    v56 = -1;
    v149 = 0x80000000;
    v57 = -1;
    v58 = 0LL;
    v161 = 0x80000000FFFFFFFFuLL;
    v163 = -1LL;
    v164 = -1;
    v166 = -1LL;
    v167 = -1LL;
    v147 = -1;
    if ( dword_140F10634 )
    {
      v60 = qword_140F10650;
      v59 = v160;
      if ( (__int64 *)qword_140F10650 != &qword_140F10650 )
      {
        v61 = v149;
        do
        {
          v62 = *(_DWORD *)(v60 + 84);
          v63 = v62 & 0xE7 | 8;
          if ( (v62 & 0xA) != 0xA )
            v63 = *(_DWORD *)(v60 + 84) & 0xE7;
          v64 = 0;
          if ( (v59 & 0x10) == 0 && (v62 & 0x11) == 0x11 )
            v64 = 16;
          v65 = v62 & 0x10;
          if ( (v62 & 1) != 0 )
            v66 = v65 != 0 ? 2 : 8;
          else
            v66 = v65 != 0 ? 1 : 4;
          v67 = v66 | (unsigned int)v58;
          v68 = *(_DWORD *)(v60 + 88);
          v59 = v63 | v64 ^ v59;
          v157 = v67;
          if ( v68 != -1 )
          {
            if ( v55 == -1 )
              v55 = 0;
            v55 += v68;
            HIDWORD(v160) = v55;
          }
          v69 = *(_DWORD *)(v60 + 92);
          if ( v69 != -1 )
          {
            if ( v54 == -1 )
              v54 = 0;
            if ( v69 > v54 )
              v54 = *(_DWORD *)(v60 + 92);
            LODWORD(v161) = v54;
          }
          v70 = *(_DWORD *)(v60 + 96);
          if ( v70 != 0x80000000 )
          {
            if ( v61 == 0x80000000 )
              v61 = 0;
            v61 += v70;
            HIDWORD(v161) = v61;
          }
          if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
          {
            v11 = *(unsigned int *)(v60 + 92);
            if ( (_DWORD)v11 != -1 )
            {
              v53 = *(unsigned int *)(v60 + 96);
              if ( (_DWORD)v53 != 0x80000000 )
              {
                v71 = v150;
                if ( v150 == 0x80000000 )
                  v71 = 0;
                if ( (_DWORD)v11 )
                {
                  v53 = (unsigned int)(1000 * v53);
                  v9 = (unsigned int)((int)(v53 + ((unsigned int)v11 >> 1)) >> 31);
                  LODWORD(v9) = (int)(v53 + ((unsigned int)v11 >> 1)) % (int)v11;
                  v72 = (int)(v53 + ((unsigned int)v11 >> 1)) / (int)v11;
                }
                else
                {
                  v72 = 0;
                }
                v150 = v72 + v71;
              }
            }
            v73 = *(_DWORD *)(v60 + 104);
            if ( v73 != -1 )
            {
              if ( v56 == -1 )
                v56 = 0;
              v56 += v73;
              LODWORD(v163) = v56;
            }
            v74 = *(_DWORD *)(v60 + 112);
            if ( v74 != -1 )
            {
              if ( v57 == -1 )
                v57 = 0;
              v57 += v74;
              v164 = v57;
            }
            v75 = *(_DWORD *)(v60 + 108);
            if ( v75 != -1 )
            {
              v53 = (unsigned int)v159;
              if ( (_DWORD)v159 == -1 )
                v53 = v75;
              LODWORD(v159) = v53;
              HIDWORD(v163) = v53;
            }
            if ( *(_DWORD *)(v60 + 116) != -1 )
            {
              v76 = v148;
              if ( v148 == -1 )
                v76 = *(_DWORD *)(v60 + 116);
              v148 = v76;
              v165 = v76;
            }
          }
          v60 = *(_QWORD *)v60;
          v58 = (struct _KLOCK_ENTRIES *)v157;
        }
        while ( (__int64 *)v60 != &qword_140F10650 );
        v12 = v156;
        LODWORD(v160) = v59;
      }
      if ( (v59 & 2) != 0 )
      {
        v59 &= ~4u;
        LODWORD(v160) = v59;
      }
      if ( (v59 & 1) != 0 || PopDisableBatteryDischargeEstimator )
      {
        if ( (v59 & 4) != 0 )
          v166 = PopEstimateChargeTime(v53, v9, v11, v58);
      }
      else
      {
        v77 = qword_140F10650;
        v78 = 0;
        if ( (__int64 *)qword_140F10650 != &qword_140F10650 )
        {
          do
          {
            v11 = *(unsigned int *)(v77 + 120);
            if ( (_DWORD)v11 != -1 && (_DWORD)v11 )
              v78 -= 3600 * *(_DWORD *)(v77 + 88) / (unsigned int)v11;
            v77 = *(_QWORD *)v77;
          }
          while ( (__int64 *)v77 != &qword_140F10650 );
          if ( v78 )
          {
            v79 = (__int64 *)qword_140F10650;
            v80 = v147;
            do
            {
              v81 = PopBatteryQueryEstimatedTime(v79 - 8, v78);
              if ( v81 != -1 )
              {
                v82 = 0;
                if ( v80 != -1 )
                  v82 = v80;
                v80 = v81 + v82;
              }
              v79 = (__int64 *)*v79;
            }
            while ( v79 != &qword_140F10650 );
            v147 = v80;
            v12 = v156;
          }
        }
      }
    }
    else
    {
      LOBYTE(v59) = 1;
      LODWORD(v160) = 1;
      if ( v155 == 3 && (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v155 = 1;
    }
    v83 = v59 & 1;
    if ( v155 == 2 && !v83 || v155 == 3 && v83 )
      v155 = 1;
    v84 = 16LL;
    v85 = v59 & 0x10;
    if ( (xmmword_140F10660 & 0x10) != v85 )
    {
      v144 = v85 != 0;
      v149 = v85 != 0;
      updated = ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LIMITING_MODE, &v144, 1u, 0LL, 0LL, 0, 0);
      v11 = (unsigned int)PopSetPowerSettingValueAcDc(&GUID_BATTERY_CHARGE_LIMITING_MODE, 4LL, &v149);
      if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
      {
        v176 = (unsigned int *)&v153;
        v87 = "DC + BCL";
        v148 = v11;
        v178 = (__int64 *)&v149;
        v153 = v144;
        if ( (v157 & 1) == 0 )
          v87 = "-";
        p_ChangeStamp = (ULONG *)&v148;
        v177 = 1LL;
        v149 = updated;
        v179 = 4LL;
        v181 = 4LL;
        tlgCreate1Sz_char((__int64)v182, v87);
        v90 = "AC + BCL";
        if ( (v89 & 2) == 0 )
          v90 = v88;
        tlgCreate1Sz_char((__int64)v183, v90);
        v93 = "DC + !BCL";
        if ( (v92 & 4) == 0 )
          v93 = v91;
        tlgCreate1Sz_char((__int64)v184, v93);
        v96 = "AC + !BCL";
        if ( (v95 & 8) == 0 )
          v96 = v94;
        tlgCreate1Sz_char((__int64)v185, v96);
        *(_QWORD *)&v159 = 0x1000000LL;
        v186[0] = &v159;
        v186[1] = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07560,
          (unsigned __int8 *)&byte_14004DAE7,
          0LL,
          0LL,
          0xAu,
          v175);
      }
    }
    v97 = (v59 & 0x20) != 0 ? ((v59 & 0x40) != 0) + 1 : 0;
    if ( (_DWORD)qword_140F10814 == v97 )
    {
      v99 = ChangeStamp;
      v98 = v154;
    }
    else
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock, v84, v11, v58);
      LODWORD(qword_140F10814) = v97;
      PopWeakChargerNotificationBatteryMiniport = v97;
      PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock);
      v98 = 1;
      v99 = ChangeStamp | 2;
    }
    v100 = v147;
    v101 = PopBatteryApplyCompositeState(&v160, v147, v150);
    if ( v101 || v98 )
    {
      v4 = 4;
      v102 = v99 | 4;
      LOBYTE(v10) = v83;
      if ( !v101 )
        v102 = v99;
      PopEvaluateWeakChargerState(v10, v102);
    }
    else
    {
      v4 = 4;
    }
    _InterlockedAnd(&PopBatteryWorkRequests, 0xFFFFFFDF);
    qword_140F10820 = MEMORY[0xFFFFF78000000008];
    _InterlockedOr(v138, 0);
    if ( qword_140F10828 )
      ExfUnblockPushLock(&qword_140F10828, 0LL);
    if ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) == 0x80000000 )
      break;
  }
  v103 = (__int64 *)qword_140F10650;
  if ( (__int64 *)qword_140F10650 != &qword_140F10650 )
  {
    do
    {
      PopBatteryQueryStatus(v103 - 8, 0LL);
      v103 = (__int64 *)*v103;
    }
    while ( v103 != &qword_140F10650 );
    v100 = v147;
  }
  if ( v12 )
  {
    if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
    {
      v104 = *(_DWORD *)(v12 + 128);
      if ( v104 == 1 || v104 == 2 )
        PopPowerAdapterQueryStatus(v12, 0LL);
    }
  }
  if ( !PopUserBatteryChargingEstimator )
    ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v166, 8u, 0LL, 0LL, 0, 0);
  if ( PopDisableBatteryDischargeEstimator )
  {
    v106 = v145;
  }
  else
  {
    v105 = PopBatteryEstimatesSpoiled();
    v106 = v105;
    if ( v100 != -1 && !v105 )
      v167 = v100;
    ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v167, 8u, 0LL, 0LL, 0, 0);
  }
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    v149 = PopUserBatteryChargingEstimator;
    v177 = 4LL;
    v176 = &v149;
    v156 = v166;
    v178 = &v156;
    ChangeStamp = PopDisableBatteryDischargeEstimator;
    p_ChangeStamp = &ChangeStamp;
    v182[0] = &v148;
    *(_QWORD *)&v159 = v167;
    v183[0] = &v159;
    v184[0] = &v145;
    v179 = 8LL;
    v181 = 4LL;
    v148 = v100;
    v182[1] = 4LL;
    v183[1] = 8LL;
    v145 = v106;
    v184[1] = 1LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)&byte_14004DA37, 0LL, 0LL, 8u, v175);
  }
  v107 = v146;
  if ( (unsigned __int8)v146 | (unsigned __int8)(v151 | v158) )
  {
    *(_DWORD *)v173 = dword_140F106A8;
    v171 = xmmword_140F10688;
    v174 = dword_140F10630;
    *(_OWORD *)&v173[4] = xmmword_140F10660;
    *(_DWORD *)&v173[20] = dword_140F10634;
    v172 = xmmword_140F10698;
    ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, &v171, 0x3Cu, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
    {
      v108 = "AC Power";
      v176 = &v149;
      v149 = dword_140F10634;
      v177 = 4LL;
      if ( (xmmword_140F10660 & 1) == 0 )
        v108 = "DC Power";
      tlgCreate1Sz_char((__int64)&v178, v108);
      v110 = "Battery Discharging";
      if ( (v109 & 2) == 0 )
        v110 = "-";
      tlgCreate1Sz_char((__int64)&p_ChangeStamp, v110);
      v113 = "Battery Charging";
      if ( (v112 & 4) == 0 )
        v113 = v111;
      tlgCreate1Sz_char((__int64)v182, v113);
      v116 = "Battery Critical";
      if ( (v115 & 8) == 0 )
        v116 = v114;
      tlgCreate1Sz_char((__int64)v183, v116);
      v118 = "Battery charge limiting mode";
      if ( (v119 & 0x10) == 0 )
        v118 = v117;
      tlgCreate1Sz_char((__int64)v184, v118);
      v122 = "Battery charging state power supply present";
      if ( (v121 & 0x20) == 0 )
        v122 = v120;
      tlgCreate1Sz_char((__int64)v185, v122);
      v125 = "Battery charging state adequate";
      if ( (v124 & 0x40) == 0 )
        v125 = v123;
      tlgCreate1Sz_char((__int64)v186, v125);
      v127 = "Battery trip point supported";
      if ( v128 >= 0 )
        v127 = v126;
      tlgCreate1Sz_char((__int64)v187, v127);
      v130 = "Platform BCL Enabled";
      if ( (byte_140F108B8 & 1) == 0 )
        v130 = v129;
      tlgCreate1Sz_char((__int64)v188, v130);
      if ( (_DWORD)xmmword_140F10698 )
        v132 = (((unsigned int)xmmword_140F10698 >> 1) + 100 * DWORD1(xmmword_140F10660))
             / (unsigned int)xmmword_140F10698;
      else
        v132 = 0;
      ChangeStamp = v132;
      v189 = &ChangeStamp;
      v190 = 4LL;
      if ( (_DWORD)xmmword_140F10698 )
        v133 = 100000 * (unsigned __int64)DWORD1(xmmword_140F10660) / (unsigned int)xmmword_140F10698;
      else
        LODWORD(v133) = 0;
      v134 = "Relative Capacity Unit";
      v148 = v133;
      v192 = 4LL;
      v191 = &v148;
      LODWORD(v159) = DWORD1(xmmword_140F10660);
      v193 = &v159;
      v195 = &v151;
      v158 = DWORD2(xmmword_140F10660);
      v197 = &v158;
      v150 = HIDWORD(xmmword_140F10660);
      v199 = &v150;
      v157 = dword_140F10630;
      v201 = &v157;
      v203 = &v147;
      if ( (xmmword_140F10688 & 0x40000000) == 0 )
        v134 = "mWh Unit";
      v194 = 4LL;
      v151 = xmmword_140F10698;
      v196 = 4LL;
      v198 = 4LL;
      v200 = 4LL;
      v202 = 4LL;
      v147 = v131;
      v204 = 4LL;
      tlgCreate1Sz_char((__int64)v205, v134);
      v206 = &v146;
      v146 = HIDWORD(xmmword_140F10688);
      v208 = &v156;
      LODWORD(v156) = v135;
      v207 = 4LL;
      v209 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07560,
        (unsigned __int8 *)&byte_14004E47F,
        0LL,
        0LL,
        0x17u,
        v175);
    }
    if ( v155 == 1 )
    {
      if ( v83 )
        v156 = 0LL;
      else
        v156 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v156, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v107 )
    {
      HIDWORD(v168) = -1;
      v136 = ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v168, 8u, 0LL, 0LL, 0, 0);
      if ( (unsigned int)dword_140E07560 > 5 )
      {
        LODWORD(v156) = v136;
        v212 = 4LL;
        v211 = &v156;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07560,
          (unsigned __int8 *)&dword_14004E69C,
          0LL,
          0LL,
          3u,
          v210);
      }
    }
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopCB);
  return PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
}
