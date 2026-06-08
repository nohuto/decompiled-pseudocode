/*
 * XREFs of DecodeAcpiIdleState @ 0x140026034
 * Callers:
 *     DecodeAcpi2CState @ 0x140025FD8 (DecodeAcpi2CState.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1400308EC (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     RegisterHiddenIdleStates @ 0x140034D40 (RegisterHiddenIdleStates.c)
 *     RegisterKernelLpiStates @ 0x140035BF4 (RegisterKernelLpiStates.c)
 *     RegisterHvLpiStates @ 0x14003DE6C (RegisterHvLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003ED00 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x140006208 (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     AcpiTranslateAccessSize @ 0x14002BABC (AcpiTranslateAccessSize.c)
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
  char v14; // cl
  const char *v15; // rdx
  unsigned __int16 v16; // r9
  int v17; // ecx
  __int64 v18; // xmm1_8
  void *v19; // rdx
  char v20; // r8
  unsigned __int64 v21; // rax
  __int64 (__fastcall *v22)(__int64, __int64, __int64); // r9
  int v23; // eax
  int v24; // eax
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
  if ( qword_1400157A8 )
  {
    v26 = qword_1400157A8(v12, a2, a3);
    if ( (v26 & 0x80000000) == 0 )
    {
LABEL_39:
      if ( a8 && byte_140015F02 )
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
    v12 = a1;
  }
  v14 = *a2;
  v15 = "LPI";
  if ( a3 != -1 )
    v15 = "C";
  if ( v14 != 127 )
  {
    if ( v14 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 16;
        goto LABEL_46;
      }
      return v26;
    }
    if ( a3 < 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 15;
        goto LABEL_46;
      }
      return v26;
    }
    if ( a3 != 2 && a3 != -1 )
    {
      v23 = *((_DWORD *)a2 + 2);
      v27 = *(_QWORD *)a2;
      v28 = v23;
      AcpiTranslateAccessSize(&v27, v15);
      v22 = C3IdleCheck;
      v18 = v27;
      v19 = C3Idle;
      v20 = 0;
      v21 = *a5 & 0xF40FFFFFFFFFFFFFuLL | 0xB20000000000000LL;
      v17 = v28;
LABEL_32:
      *a5 = v21;
      v9 = DecodeRegisterContext;
      *(_WORD *)a5 = WORD2(v27);
      goto LABEL_33;
    }
    v24 = *((_DWORD *)a2 + 2);
    v27 = *(_QWORD *)a2;
    v28 = v24;
    AcpiTranslateAccessSize(&v27, v15);
    v19 = C2Idle;
    v18 = v27;
    v20 = 0;
    v21 = *a5 & 0xFB0FFFFFFFFFFFFFuLL | 0x420000000000000LL;
    v17 = v28;
LABEL_31:
    v22 = 0LL;
    goto LABEL_32;
  }
  if ( a2[1] == 1 )
  {
    if ( a2[2] != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 13;
LABEL_46:
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v16,
          (__int64)&WPP_e5b2ff9ee5c1391ad3ffc5ec6d33a050_Traceguids,
          v15);
        return v26;
      }
      return v26;
    }
    v17 = *((_DWORD *)a2 + 2);
    v18 = *(_QWORD *)a2;
    v27 = *(_QWORD *)a2;
    if ( HIDWORD(v27) )
    {
      LODWORD(v27) = 134219777;
      v17 = 0;
      v18 = v27;
    }
    v19 = IoHaltC1Idle;
    v20 = 1;
    v21 = *a5 & 0xFF0FFFFFFFFFFFFFuLL | 0x10000000000000LL;
    goto LABEL_31;
  }
  if ( a3 == 1 || a3 == -1 && (*(_QWORD *)(v12 + 280) & 0x20E0000000000LL) != 0 )
  {
    v18 = *(_QWORD *)a2;
    v19 = C1Idle;
    v17 = *((_DWORD *)a2 + 2);
    *a5 &= 0xFF0FFFFFFFFFFFFFuLL;
    v20 = 1;
    v22 = 0LL;
LABEL_33:
    v26 = 0;
    if ( a8 )
    {
      *(_QWORD *)(a8 + 32) = v18;
      *(_DWORD *)(a8 + 40) = v17;
      *(_BYTE *)(a8 + 80) = 1;
      *(_QWORD *)(a8 + 16) = v22;
      *(_QWORD *)(a8 + 24) = v19;
      *(_QWORD *)(a8 + 64) = v9;
    }
    if ( a6 )
      *a6 = v20;
    if ( a7 )
      *a7 = 1;
    goto LABEL_39;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 14;
    goto LABEL_46;
  }
  return v26;
}
