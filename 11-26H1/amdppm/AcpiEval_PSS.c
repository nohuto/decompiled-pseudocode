/*
 * XREFs of AcpiEval_PSS @ 0x1400294D0
 * Callers:
 *     InitAcpiPerfStates @ 0x14003943C (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_sD @ 0x14000725C (WPP_RECORDER_SF_sD.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14002A3D0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140040898 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PSS(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  _DWORD *Pool2; // r15
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // rdi
  int v9; // ebx
  int v11; // r9d
  int v12; // eax
  _WORD *v13; // r14
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp-99h]
  int v17; // [rsp+40h] [rbp-89h] BYREF
  int v18; // [rsp+44h] [rbp-85h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  char v20; // [rsp+50h] [rbp-79h] BYREF
  int v21; // [rsp+52h] [rbp-77h]
  const char *v22; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v23)(); // [rsp+60h] [rbp-69h]
  char v24; // [rsp+68h] [rbp-61h]
  int v25; // [rsp+6Ah] [rbp-5Fh]
  const char *v26; // [rsp+70h] [rbp-59h]
  __int64 (__fastcall *v27)(); // [rsp+78h] [rbp-51h]
  char v28; // [rsp+80h] [rbp-49h]
  int v29; // [rsp+82h] [rbp-47h]
  const char *v30; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v31)(); // [rsp+90h] [rbp-39h]
  char v32; // [rsp+98h] [rbp-31h]
  int v33; // [rsp+9Ah] [rbp-2Fh]
  const char *v34; // [rsp+A0h] [rbp-29h]
  __int64 (__fastcall *v35)(); // [rsp+A8h] [rbp-21h]
  char v36; // [rsp+B0h] [rbp-19h]
  int v37; // [rsp+B2h] [rbp-17h]
  const char *v38; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v39)(); // [rsp+C0h] [rbp-9h]
  char v40; // [rsp+C8h] [rbp-1h]
  int v41; // [rsp+CAh] [rbp+1h]
  const char *v42; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall *v43)(); // [rsp+D8h] [rbp+Fh]

  v2 = 0;
  v25 = 0x40000;
  v17 = 0;
  v22 = "CoreFrequency";
  v20 = 0;
  v26 = "Power";
  v21 = 0;
  v30 = "Latency";
  v24 = 1;
  v32 = 3;
  v28 = 2;
  v23 = AcpiParseULong;
  v34 = "BmLatency";
  Pool2 = 0LL;
  v27 = AcpiParseULong;
  v38 = "Control";
  v42 = "Status";
  v29 = 0x80000;
  v31 = AcpiParseULong;
  v33 = 786432;
  v35 = AcpiParseULong;
  v36 = 4;
  v37 = 0x100000;
  v39 = AcpiParseULong;
  v40 = 5;
  v41 = 1572864;
  v43 = AcpiParseULong;
  P = 0LL;
  v18 = 1397968991;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x40u);
  v6 = AcpiEvaluateMethod(a1, v18, 0, (unsigned int)&P, (__int64)&v17);
  v8 = P;
  v9 = v6;
  if ( v6 >= 0 )
  {
    *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x30000000;
    if ( !v8 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v7,
          3,
          23,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      }
      v9 = -1073741823;
      goto LABEL_6;
    }
    if ( !v17 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_15:
        v9 = -1073741275;
        goto LABEL_6;
      }
      v11 = 24;
LABEL_14:
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        1,
        v11,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      goto LABEL_15;
    }
    v12 = v8[2];
    if ( !v12 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v11 = 25;
      goto LABEL_14;
    }
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(48 * v12 + 8), 1919119952LL);
    if ( Pool2 )
    {
      v13 = v8 + 3;
      *Pool2 = *((unsigned __int8 *)v8 + 8);
      while ( 1 )
      {
        if ( v2 >= v8[2] )
        {
          *a2 = Pool2;
          goto LABEL_8;
        }
        if ( *v13 != 3 )
          break;
        v9 = AcpiParseCore(
               (unsigned int)&v20,
               6,
               (int)v13 + 4,
               (unsigned __int16)v13[1],
               (__int64)&Pool2[12 * v2 + 2],
               48,
               (__int64)"_PSS",
               0);
        if ( v9 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 2;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v14,
              1,
              27,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
              v2);
          }
          goto LABEL_6;
        }
        v15 = (unsigned __int16)v13[1];
        if ( (unsigned __int16)v15 < 4u )
          v15 = 4LL;
        v13 = (_WORD *)((char *)v13 + v15 + 4);
        ++v2;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = v2;
        WPP_RECORDER_SF_sD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x1Au,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
          (const char *)&v18,
          v16);
      }
      v9 = -1072431096;
    }
    else
    {
      v9 = -1073741670;
    }
  }
LABEL_6:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
LABEL_8:
  if ( v8 )
    ExFreePoolWithTag(v8, (ULONG)1919119952);
  return (unsigned int)v9;
}
