/*
 * XREFs of PopDirectedDripsDiagRundownDevices @ 0x140B0ACE8
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140B0A9B8 (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1407E70B4 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1407E7120 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     PopDirectedDripsDiagExtractDeviceDescription @ 0x1407E72A8 (PopDirectedDripsDiagExtractDeviceDescription.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x1407E732C (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x140B5369C (PopDirectedDripsDiagSanitizeHardwareId.c)
 */

void PopDirectedDripsDiagRundownDevices()
{
  _DWORD *InitialStack; // rbx
  __int64 v1; // rax
  unsigned int v2; // r9d
  unsigned int v3; // edx
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  int *v6; // rdi
  UNICODE_STRING *v7; // rsi
  UNICODE_STRING *v8; // r14
  UNICODE_STRING *v9; // r15
  unsigned __int16 *v10; // r8
  int Length; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  wchar_t *v15; // rcx
  int v16; // edx
  wchar_t *v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // edi
  _QWORD *v23; // r11
  int v24; // r8d
  _DWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  ULONGLONG v28; // rax
  __int64 v29; // rcx
  ULONGLONG v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  _BYTE v35[4]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-BCh] BYREF
  int v37; // [rsp+50h] [rbp-B8h] BYREF
  int v38; // [rsp+54h] [rbp-B4h] BYREF
  int v39; // [rsp+58h] [rbp-B0h] BYREF
  int v40; // [rsp+5Ch] [rbp-ACh] BYREF
  int v41; // [rsp+60h] [rbp-A8h] BYREF
  int v42; // [rsp+64h] [rbp-A4h] BYREF
  int v43; // [rsp+68h] [rbp-A0h] BYREF
  int v44; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v45; // [rsp+70h] [rbp-98h] BYREF
  int v46; // [rsp+74h] [rbp-94h] BYREF
  UNICODE_STRING *v47; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING *v48; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING *v49; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING *v50; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING *v51; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING *v52; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C8h] [rbp-40h] BYREF
  int *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  _DWORD *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  wchar_t *Buffer; // [rsp+108h] [rbp+0h]
  _DWORD v62[2]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD *v63; // [rsp+118h] [rbp+10h]
  __int64 v64; // [rsp+120h] [rbp+18h]
  __int64 v65; // [rsp+128h] [rbp+20h]
  _DWORD v66[2]; // [rsp+130h] [rbp+28h] BYREF
  _DWORD *v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  wchar_t *v69; // [rsp+148h] [rbp+40h]
  _DWORD v70[2]; // [rsp+150h] [rbp+48h] BYREF
  _DWORD *v71; // [rsp+158h] [rbp+50h]
  __int64 v72; // [rsp+160h] [rbp+58h]
  wchar_t *v73; // [rsp+168h] [rbp+60h]
  _DWORD v74[2]; // [rsp+170h] [rbp+68h] BYREF
  int *v75; // [rsp+178h] [rbp+70h]
  __int64 v76; // [rsp+180h] [rbp+78h]
  int *v77; // [rsp+188h] [rbp+80h]
  __int64 v78; // [rsp+190h] [rbp+88h]
  int *v79; // [rsp+198h] [rbp+90h]
  __int64 v80; // [rsp+1A0h] [rbp+98h]
  int *v81; // [rsp+1A8h] [rbp+A0h]
  __int64 v82; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v83; // [rsp+1B8h] [rbp+B0h]
  __int64 v84; // [rsp+1C0h] [rbp+B8h]
  wchar_t *v85; // [rsp+1C8h] [rbp+C0h]
  _DWORD v86[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 *v87; // [rsp+1D8h] [rbp+D0h]
  __int64 v88; // [rsp+1E0h] [rbp+D8h]
  int *v89; // [rsp+1E8h] [rbp+E0h]
  __int64 v90; // [rsp+1F0h] [rbp+E8h]
  _DWORD *v91; // [rsp+1F8h] [rbp+F0h]
  __int64 v92; // [rsp+200h] [rbp+F8h]
  wchar_t *v93; // [rsp+208h] [rbp+100h]
  _DWORD v94[2]; // [rsp+210h] [rbp+108h] BYREF
  __int64 *v95; // [rsp+218h] [rbp+110h]
  __int64 v96; // [rsp+220h] [rbp+118h]
  _QWORD v97[28]; // [rsp+228h] [rbp+120h] BYREF

  v35[0] = PopWnfCsEnterScenarioId;
  v36 = 0;
  v47 = 0LL;
  v40 = 0;
  v48 = 0LL;
  v41 = 0;
  v49 = 0LL;
  v38 = 0;
  v52 = 0LL;
  v39 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v53 = PopWnfCsEnterScenarioId;
  while ( 1 )
  {
    InitialStack = PopDirectedDripsDiagLock.InitialStack;
    if ( PopDirectedDripsDiagLock.InitialStack == &PopDirectedDripsDiagLock.InitialStack )
      break;
    if ( *((struct _KTHREAD **)PopDirectedDripsDiagLock.InitialStack + 1) != (struct _KTHREAD *)&PopDirectedDripsDiagLock.InitialStack
      || (v1 = *(_QWORD *)PopDirectedDripsDiagLock.InitialStack,
          *(void **)(*(_QWORD *)PopDirectedDripsDiagLock.InitialStack + 8LL) != PopDirectedDripsDiagLock.InitialStack) )
    {
      __fastfail(3u);
    }
    PopDirectedDripsDiagLock.InitialStack = *(void **)PopDirectedDripsDiagLock.InitialStack;
    *(_QWORD *)(v1 + 8) = &PopDirectedDripsDiagLock.InitialStack;
    v2 = 0;
    v36 = 0;
    v3 = 0;
    v4 = InitialStack[39];
    if ( v4 )
    {
      PopDirectedDripsDiagCreateBlockerEntryULong((__int64)v97, (__int64)L"DFX Transition Count", v4);
      v2 = v36 + 1;
      v36 = v2;
      v3 = v2;
    }
    v5 = InitialStack[40];
    if ( v5 )
    {
      PopDirectedDripsDiagCreateBlockerEntryULong((__int64)&v97[7 * v3], (__int64)L"PS4 Transition Count", v5);
      v2 = v36 + 1;
      v36 = v2;
      v3 = v2;
    }
    v6 = InitialStack + 38;
    if ( *((_WORD *)InitialStack + 76) )
    {
      PopDirectedDripsDiagCreateBlockerEntryBoolean((__int64)&v97[7 * v3], (__int64)L"Problem Device");
      v2 = v36 + 1;
      v36 = v2;
      v3 = v2;
    }
    if ( (*v6 & 0x10000) != 0 )
    {
      PopDirectedDripsDiagCreateBlockerEntryBoolean((__int64)&v97[7 * v3], (__int64)L"Initiated PS4 Transition");
      v2 = ++v36;
    }
    if ( (*v6 & 0x40000) != 0 )
    {
      PopDirectedDripsDiagExtractDeviceDescription((UNICODE_STRING *)InitialStack, &v49, &v52, &v47, &v48, &v50, &v51);
      PopDirectedDripsDiagSanitizeHardwareId(InitialStack + 16);
      v7 = v47;
      v8 = v48;
      v9 = v49;
      if ( (unsigned int)dword_140FD68F0 > 5 && tlgKeywordOn((__int64)&dword_140FD68F0, 0x400000000000LL) )
      {
        LOBYTE(v37) = v35[0];
        v57 = &v37;
        v58 = 1LL;
        Length = v9->Length;
        Buffer = v9->Buffer;
        v63 = v66;
        v65 = *((_QWORD *)v10 + 1);
        v66[0] = *v10;
        v59 = v62;
        v60 = 2LL;
        v62[0] = Length;
        v62[1] = 0;
        v64 = 2LL;
        v66[1] = 0;
        v12 = v7->Length;
        v69 = v7->Buffer;
        v67 = v70;
        v70[0] = v12;
        v68 = 2LL;
        v70[1] = 0;
        v13 = v8->Length;
        v73 = v8->Buffer;
        v42 = InitialStack[37];
        v75 = &v42;
        v43 = InitialStack[39];
        v77 = &v43;
        v44 = InitialStack[40];
        v79 = &v44;
        v45 = *v6;
        v81 = &v45;
        v71 = v74;
        v72 = 2LL;
        v74[0] = v13;
        v74[1] = 0;
        v76 = 4LL;
        v78 = 4LL;
        v80 = 4LL;
        v82 = 4LL;
        v14 = v50->Length;
        v15 = v50->Buffer;
        v83 = v86;
        v54 = v53;
        v87 = &v54;
        v46 = InitialStack[6];
        v89 = &v46;
        v84 = 2LL;
        v85 = v15;
        v86[0] = v14;
        v86[1] = 0;
        v88 = 8LL;
        v90 = 4LL;
        v16 = v51->Length;
        v17 = v51->Buffer;
        v91 = v94;
        v93 = v17;
        v95 = &v55;
        v94[0] = v16;
        v92 = 2LL;
        v94[1] = 0;
        v55 = 0x1000000LL;
        v96 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140FD68F0,
          (unsigned __int8 *)&dword_140050CAC,
          0LL,
          0LL,
          0x16u,
          &v56);
      }
      if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_STATS) )
      {
        PopDirectedDripsDiagEventData.Ptr = (ULONGLONG)v35;
        *(_QWORD *)&PopDirectedDripsDiagEventData.Size = 1LL;
        qword_140F0AF70 = (__int64)(InitialStack + 4);
        qword_140F0AF78 = 8LL;
        v38 = v9->Length >> 1;
        qword_140F0AF80 = (__int64)&v38;
        qword_140F0AF88 = 4LL;
        v18 = v9->Length;
        qword_140F0AF90 = (__int64)v9->Buffer;
        dword_140F0AF98 = v18;
        dword_140F0AF9C = 0;
        v39 = v52->Length >> 1;
        qword_140F0AFA0 = (__int64)&v39;
        qword_140F0AFA8 = 4LL;
        v19 = v52->Length;
        qword_140F0AFB0 = (__int64)v52->Buffer;
        dword_140F0AFB8 = v19;
        dword_140F0AFBC = 0;
        v40 = v7->Length >> 1;
        qword_140F0AFC0 = (__int64)&v40;
        qword_140F0AFC8 = 4LL;
        v20 = v7->Length;
        qword_140F0AFD0 = (__int64)v7->Buffer;
        dword_140F0AFD8 = v20;
        dword_140F0AFDC = 0;
        v41 = v8->Length >> 1;
        qword_140F0AFE0 = (__int64)&v41;
        qword_140F0AFE8 = 4LL;
        v21 = v8->Length;
        qword_140F0AFF0 = (__int64)v8->Buffer;
        dword_140F0AFF8 = v21;
        qword_140F0B000 = (__int64)(InitialStack + 37);
        dword_140F0AFFC = 0;
        qword_140F0B008 = 4LL;
        qword_140F0B010 = (__int64)(InitialStack + 39);
        qword_140F0B018 = 4LL;
        qword_140F0B020 = (__int64)(InitialStack + 40);
        qword_140F0B028 = 4LL;
        qword_140F0B030 = (__int64)(InitialStack + 38);
        qword_140F0B038 = 4LL;
        EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_STATS, 0LL, 0xEu, &PopDirectedDripsDiagEventData);
      }
      v2 = v36;
    }
    if ( PopDiagSleepStudyHandleRegistered && v2 )
    {
      v22 = 0;
      v23 = v97;
      do
      {
        v24 = 5 * v22++;
        v25 = v23 + 2;
        v26 = 2LL * (unsigned int)(v24 + 2);
        v27 = 2LL * (unsigned int)(v24 + 3);
        *(&PopDirectedDripsDiagEventData.Ptr + v26) = (ULONGLONG)(InitialStack + 8);
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v26) = 16LL;
        v28 = v23[1];
        *(&PopDirectedDripsDiagEventData.Ptr + v27) = (ULONGLONG)v23;
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v27) = 4LL;
        v29 = 2LL * (unsigned int)(v24 + 4);
        *(&PopDirectedDripsDiagEventData.Ptr + v29) = v28;
        LODWORD(v28) = *(_DWORD *)v23;
        *(&PopDirectedDripsDiagEventData.Reserved + 2 * v29) = 0;
        *(&PopDirectedDripsDiagEventData.Size + 2 * v29) = 2 * v28;
        v30 = (ULONGLONG)v23 + 20;
        v23 += 7;
        v31 = 2LL * (unsigned int)(v24 + 5);
        *(&PopDirectedDripsDiagEventData.Ptr + v31) = (ULONGLONG)v25;
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v31) = 4LL;
        v32 = 2LL * (unsigned int)(v24 + 6);
        *(&PopDirectedDripsDiagEventData.Ptr + v32) = v30;
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v32) = (unsigned int)(2 * *v25);
      }
      while ( v22 < v2 );
      *(_QWORD *)&PopDirectedDripsDiagEventData.Size = 1LL;
      PopDirectedDripsDiagEventData.Ptr = (ULONGLONG)v35;
      v33 = 2LL * (unsigned int)(v24 + 7);
      qword_140F0AF78 = 4LL;
      qword_140F0AF70 = (__int64)&v36;
      *(&PopDirectedDripsDiagEventData.Ptr + v33) = (ULONGLONG)&v53;
      *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v33) = 8LL;
      EtwWrite(
        PopDiagSleepStudyHandle,
        &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA,
        0LL,
        5 * v2 + 3,
        &PopDirectedDripsDiagEventData);
    }
    v34 = *((_QWORD *)InitialStack + 2);
    if ( v34 )
    {
      *(_QWORD *)(v34 + 776) = 0LL;
      *((_QWORD *)InitialStack + 2) = 0LL;
    }
    PopDirectedDripsDiagFreeDeviceDiagnostic(InitialStack);
  }
}
