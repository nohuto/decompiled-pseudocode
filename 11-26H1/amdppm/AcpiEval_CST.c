/*
 * XREFs of AcpiEval_CST @ 0x1400285D8
 * Callers:
 *     InitAcpi2CStates @ 0x140026670 (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14002A3D0 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x14002BABC (AcpiTranslateAccessSize.c)
 *     AcpiEvaluateMethod @ 0x140040898 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_CST(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  int v4; // eax
  int v5; // edx
  _DWORD *v6; // rsi
  int v7; // ebx
  int v8; // r9d
  int v9; // r13d
  _DWORD *Pool2; // r12
  __int64 v11; // rax
  _WORD *v12; // r15
  int v13; // edx
  int v14; // r9d
  __int64 v15; // rdx
  PVOID v16; // r8
  _BYTE *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  char v22; // [rsp+28h] [rbp-81h]
  int v23; // [rsp+40h] [rbp-69h] BYREF
  PVOID P; // [rsp+48h] [rbp-61h] BYREF
  _QWORD *v25; // [rsp+50h] [rbp-59h]
  char v26; // [rsp+60h] [rbp-49h] BYREF
  int v27; // [rsp+62h] [rbp-47h]
  const char *v28; // [rsp+68h] [rbp-41h]
  __int64 (__fastcall *v29)(); // [rsp+70h] [rbp-39h]
  char v30; // [rsp+78h] [rbp-31h]
  int v31; // [rsp+7Ah] [rbp-2Fh]
  const char *v32; // [rsp+80h] [rbp-29h]
  __int64 (__fastcall *v33)(); // [rsp+88h] [rbp-21h]
  char v34; // [rsp+90h] [rbp-19h]
  int v35; // [rsp+92h] [rbp-17h]
  const char *v36; // [rsp+98h] [rbp-11h]
  __int64 (__fastcall *v37)(); // [rsp+A0h] [rbp-9h]
  char v38; // [rsp+A8h] [rbp-1h]
  int v39; // [rsp+AAh] [rbp+1h]
  const char *v40; // [rsp+B0h] [rbp+7h]
  __int64 (__fastcall *v41)(); // [rsp+B8h] [rbp+Fh]

  v2 = 0;
  v25 = a2;
  v23 = 0;
  v28 = "Register";
  v26 = 0;
  v31 = 786432;
  v29 = AcpiParseRegister;
  v27 = 2;
  v32 = "StateType";
  v30 = 1;
  v36 = "Latency";
  v33 = AcpiParseULong;
  v40 = "PowerConsumption";
  v34 = 2;
  v35 = 917504;
  v37 = AcpiParseULong;
  v38 = 3;
  v39 = 0x100000;
  v41 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 8u);
  v4 = AcpiEvaluateMethod(a1, 1414742879, 0, (unsigned int)&P, (__int64)&v23);
  v6 = P;
  v7 = v4;
  if ( v4 >= 0 )
  {
    *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x7F070;
    if ( !v23 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v7 = -1073741275;
        goto LABEL_49;
      }
      v8 = 10;
LABEL_5:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        1,
        v8,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      goto LABEL_6;
    }
    if ( !v6[2] )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v8 = 11;
      goto LABEL_5;
    }
    if ( *((_WORD *)v6 + 6) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          1,
          12,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      }
      v7 = -1072431096;
    }
    else
    {
      v9 = v6[4];
      if ( v9 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(20 * v9 + 4), 1919119952LL);
        if ( Pool2 )
        {
          v11 = *((unsigned __int16 *)v6 + 7);
          if ( (unsigned __int16)v11 < 4u )
            v11 = 4LL;
          v12 = (_WORD *)((char *)v6 + v11 + 16);
          v13 = 0;
          v23 = 0;
          while ( v12 < (_WORD *)((char *)v6 + (unsigned int)v6[1]) )
          {
            if ( v2 == v9 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v13) = 2;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v13,
                  1,
                  13,
                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
              }
LABEL_44:
              v7 = -1072431096;
LABEL_47:
              ExFreePoolWithTag(Pool2, (ULONG)0);
              goto LABEL_49;
            }
            if ( *v12 != 3 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v22 = v13;
                LOBYTE(v13) = 2;
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v13,
                  1,
                  14,
                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                  v22);
              }
              goto LABEL_44;
            }
            v14 = (unsigned __int16)v12[1];
            P = (PVOID)(5LL * v2);
            v7 = AcpiParseCore(
                   (unsigned int)&v26,
                   4,
                   (int)v12 + 4,
                   v14,
                   (__int64)&Pool2[(_QWORD)P + 1],
                   20,
                   (__int64)"_CST",
                   0);
            if ( v7 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v15) = 2;
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v15,
                  1,
                  15,
                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                  v23);
              }
              v7 = -1072431089;
              goto LABEL_47;
            }
            v16 = P;
            v17 = &Pool2[(_QWORD)P + 1];
            if ( *v17 != 127 )
            {
              AcpiTranslateAccessSize(v17, v15);
              v16 = P;
            }
            v18 = (unsigned __int16)v12[1];
            if ( (unsigned __int16)v18 < 4u )
              v18 = 4LL;
            v19 = *(_QWORD *)(a1 + 280);
            v12 = (_WORD *)((char *)v12 + v18 + 4);
            v20 = Pool2[(_QWORD)v16 + 4];
            v13 = ++v23;
            if ( (v19 & 0x1010) == 0 && v20 == 1 || (v19 & 0x2020) == 0 && v20 == 2 || (v19 & 0x4040) == 0 && v20 >= 3u )
              --v2;
            ++v2;
          }
          if ( !v2 )
          {
            v7 = -1073741823;
            goto LABEL_47;
          }
          *Pool2 = (unsigned __int8)v2;
          *v25 = Pool2;
        }
        else
        {
          v7 = -1073741670;
        }
      }
      else
      {
        v7 = -1073741823;
      }
    }
  }
LABEL_49:
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)0);
  if ( v7 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
  return (unsigned int)v7;
}
