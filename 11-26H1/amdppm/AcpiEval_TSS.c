/*
 * XREFs of AcpiEval_TSS @ 0x1400299D8
 * Callers:
 *     InitAcpi3ThrottleStates @ 0x1400392F8 (InitAcpi3ThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14002A3D0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140040898 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_TSS(__int64 a1, _QWORD *a2)
{
  int v2; // r12d
  _DWORD *Pool2; // rdi
  int v6; // eax
  int v7; // edx
  unsigned int *v8; // r14
  int v9; // ebx
  int v10; // r9d
  unsigned int v12; // eax
  _WORD *v13; // rsi
  int v14; // edx
  __int64 v15; // rax
  int v16; // [rsp+40h] [rbp-79h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  char v18; // [rsp+50h] [rbp-69h] BYREF
  int v19; // [rsp+52h] [rbp-67h]
  const char *v20; // [rsp+58h] [rbp-61h]
  __int64 (__fastcall *v21)(); // [rsp+60h] [rbp-59h]
  char v22; // [rsp+68h] [rbp-51h]
  int v23; // [rsp+6Ah] [rbp-4Fh]
  const char *v24; // [rsp+70h] [rbp-49h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-41h]
  char v26; // [rsp+80h] [rbp-39h]
  int v27; // [rsp+82h] [rbp-37h]
  const char *v28; // [rsp+88h] [rbp-31h]
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-29h]
  char v30; // [rsp+98h] [rbp-21h]
  int v31; // [rsp+9Ah] [rbp-1Fh]
  const char *v32; // [rsp+A0h] [rbp-19h]
  __int64 (__fastcall *v33)(); // [rsp+A8h] [rbp-11h]
  char v34; // [rsp+B0h] [rbp-9h]
  int v35; // [rsp+B2h] [rbp-7h]
  const char *v36; // [rsp+B8h] [rbp-1h]
  __int64 (__fastcall *v37)(); // [rsp+C0h] [rbp+7h]

  v2 = 0;
  v23 = 0x40000;
  v16 = 0;
  v20 = "Percentage";
  v18 = 0;
  v24 = "Power";
  v19 = 0;
  v28 = "Latency";
  v22 = 1;
  v32 = "Control";
  v26 = 2;
  v21 = AcpiParseULong;
  v36 = "Status";
  Pool2 = 0LL;
  v25 = AcpiParseULong;
  v27 = 0x80000;
  v29 = AcpiParseULong;
  v30 = 3;
  v31 = 786432;
  v33 = AcpiParseULong;
  v34 = 4;
  v35 = 0x100000;
  v37 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x800u);
  v6 = AcpiEvaluateMethod(a1, 1397970015, 0, (unsigned int)&P, (__int64)&v16);
  v8 = (unsigned int *)P;
  v9 = v6;
  if ( v6 < 0 )
    goto LABEL_7;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x3000000;
  if ( !v16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_6:
      v9 = -1073741275;
      goto LABEL_7;
    }
    v10 = 36;
LABEL_5:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1,
      v10,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    goto LABEL_6;
  }
  v12 = v8[2];
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v10 = 37;
    goto LABEL_5;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20 * v12 + 4, 1919119952LL);
  if ( Pool2 )
  {
    v13 = v8 + 3;
    *Pool2 = v8[2];
    while ( 1 )
    {
      if ( v13 >= (_WORD *)((char *)v8 + v8[1]) )
      {
        *a2 = Pool2;
        Pool2 = 0LL;
        goto LABEL_8;
      }
      if ( *v13 != 3 )
      {
        v9 = -1072431096;
        goto LABEL_7;
      }
      v9 = AcpiParseCore(
             (unsigned int)&v18,
             5,
             (int)v13 + 4,
             (unsigned __int16)v13[1],
             (__int64)&Pool2[4 * v2 + 1 + v2],
             20,
             (__int64)"_TSS",
             0);
      if ( v9 < 0 )
        break;
      v15 = (unsigned __int16)v13[1];
      if ( (unsigned __int16)v15 < 4u )
        v15 = 4LL;
      v13 = (_WORD *)((char *)v13 + v15 + 4);
      ++v2;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        1,
        38,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
        v2);
    }
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_7:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x800u);
LABEL_8:
  if ( v8 )
    ExFreePoolWithTag(v8, (ULONG)0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
  return (unsigned int)v9;
}
