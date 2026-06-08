/*
 * XREFs of DecodeAcpiIdleState @ 0x140042754
 * Callers:
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x140034A2C (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     RegisterHiddenIdleStates @ 0x1400386F0 (RegisterHiddenIdleStates.c)
 *     RegisterKernelLpiStates @ 0x140038D9C (RegisterKernelLpiStates.c)
 *     RegisterHvLpiStates @ 0x14003EA7C (RegisterHvLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003F484 (LpiTranslateCoordinatedIdleStates.c)
 *     DecodeAcpi2CState @ 0x1400426F8 (DecodeAcpi2CState.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1400032E0 (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     AcpiTranslateAccessSize @ 0x1400310EC (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall DecodeAcpiIdleState(
        __int64 a1,
        char *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 *a5,
        char *a6,
        _BYTE *a7,
        __int64 a8)
{
  void (__fastcall *v9)(_QWORD *, __int64, _QWORD *); // r13
  __int64 v12; // r10
  int v13; // ecx
  char v15; // cl
  const char *v16; // rdx
  __int64 v17; // xmm1_8
  void *v18; // rdx
  int v19; // ecx
  char v20; // r8
  __int64 (*v21)(); // r9
  unsigned __int16 v22; // r9
  unsigned __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  int v28; // [rsp+68h] [rbp-8h]
  int v30; // [rsp+C0h] [rbp+50h]

  v9 = 0LL;
  v26 = -1073741823;
  *a5 = 0LL;
  v12 = a1;
  if ( a3 == -1 )
  {
    v30 = 3;
  }
  else
  {
    v13 = a3;
    if ( a3 >= 3 )
      v13 = 3;
    v30 = v13;
  }
  if ( !qword_140019378 )
  {
LABEL_12:
    v15 = *a2;
    v16 = "LPI";
    if ( a3 != -1 )
      v16 = "C";
    if ( v15 == 127 )
    {
      if ( a2[1] != 1 )
      {
        if ( a3 == 1 || a3 == -1 && (*(_QWORD *)(v12 + 280) & 0x20E0000000000LL) != 0 )
        {
          v17 = *(_QWORD *)a2;
          v18 = C1Idle;
          v19 = *((_DWORD *)a2 + 2);
          *a5 &= 0xFF0FFFFFFFFFFFFFuLL;
          v20 = 1;
          v21 = 0LL;
LABEL_18:
          v26 = 0;
          if ( a8 )
          {
            *(_QWORD *)(a8 + 32) = v17;
            *(_DWORD *)(a8 + 40) = v19;
            *(_BYTE *)(a8 + 80) = 1;
            *(_QWORD *)(a8 + 16) = v21;
            *(_QWORD *)(a8 + 24) = v18;
            *(_QWORD *)(a8 + 64) = v9;
          }
          if ( a6 )
            *a6 = v20;
          if ( a7 )
            *a7 = 1;
          goto LABEL_7;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v26;
        v22 = 14;
LABEL_48:
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v22,
          (__int64)&WPP_e5b2ff9ee5c1391ad3ffc5ec6d33a050_Traceguids,
          v16);
        return v26;
      }
      if ( a2[2] != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v26;
        v22 = 13;
        goto LABEL_48;
      }
      v19 = *((_DWORD *)a2 + 2);
      v17 = *(_QWORD *)a2;
      v27 = *(_QWORD *)a2;
      if ( HIDWORD(v27) )
      {
        LODWORD(v27) = 134219777;
        v19 = 0;
        v17 = v27;
      }
      v18 = IoHaltC1Idle;
      v20 = 1;
      v23 = *a5 & 0xFF0FFFFFFFFFFFFFuLL | 0x10000000000000LL;
    }
    else
    {
      if ( v15 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v26;
        v22 = 16;
        goto LABEL_48;
      }
      if ( a3 < 2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v26;
        v22 = 15;
        goto LABEL_48;
      }
      if ( a3 != 2 && a3 != -1 )
      {
        v24 = *((_DWORD *)a2 + 2);
        v27 = *(_QWORD *)a2;
        v28 = v24;
        AcpiTranslateAccessSize(&v27);
        v21 = C3IdleCheck;
        v17 = v27;
        v18 = C3Idle;
        v20 = 0;
        v23 = *a5 & 0xF40FFFFFFFFFFFFFuLL | 0xB20000000000000LL;
        v19 = v28;
LABEL_43:
        *a5 = v23;
        v9 = DecodeRegisterContext;
        *(_WORD *)a5 = WORD2(v27);
        goto LABEL_18;
      }
      v25 = *((_DWORD *)a2 + 2);
      v27 = *(_QWORD *)a2;
      v28 = v25;
      AcpiTranslateAccessSize(&v27);
      v18 = C2Idle;
      v17 = v27;
      v20 = 0;
      v23 = *a5 & 0xFB0FFFFFFFFFFFFFuLL | 0x420000000000000LL;
      v19 = v28;
    }
    v21 = 0LL;
    goto LABEL_43;
  }
  v26 = qword_140019378(v12, a2, a3);
  if ( (v26 & 0x80000000) != 0 )
  {
    v12 = a1;
    goto LABEL_12;
  }
LABEL_7:
  if ( a8 && byte_140019AD2 )
  {
    *(_QWORD *)(a8 + 24) = HvRequestIdle;
    *(_QWORD *)(a8 + 64) = HvIdleDecode;
    *(_QWORD *)(a8 + 32) = *a5;
    *(_DWORD *)(a8 + 40) = v30;
    *(_QWORD *)(a8 + 56) = *a5;
    *(_BYTE *)(a8 + 82) = 0;
  }
  return v26;
}
