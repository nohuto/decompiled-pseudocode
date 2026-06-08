/*
 * XREFs of AcpiEval_CSD @ 0x1400282D4
 * Callers:
 *     InitAcpiIdleDomain @ 0x1400375B8 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14002A3D0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140040898 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_CSD(__int64 a1, _QWORD *a2)
{
  int v2; // r15d
  _DWORD *Pool2; // r14
  int v6; // eax
  int v7; // edx
  _WORD *v8; // rsi
  int v9; // ebx
  int v10; // r9d
  int v12; // eax
  _WORD *v13; // rdi
  int v14; // edx
  __int64 v15; // rax
  int v16; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  char v18; // [rsp+50h] [rbp-79h] BYREF
  int v19; // [rsp+52h] [rbp-77h]
  const char *v20; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v21)(); // [rsp+60h] [rbp-69h]
  char v22; // [rsp+68h] [rbp-61h]
  int v23; // [rsp+6Ah] [rbp-5Fh]
  const char *v24; // [rsp+70h] [rbp-59h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-51h]
  char v26; // [rsp+80h] [rbp-49h]
  int v27; // [rsp+82h] [rbp-47h]
  const char *v28; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-39h]
  char v30; // [rsp+98h] [rbp-31h]
  int v31; // [rsp+9Ah] [rbp-2Fh]
  const char *v32; // [rsp+A0h] [rbp-29h]
  __int64 (__fastcall *v33)(); // [rsp+A8h] [rbp-21h]
  char v34; // [rsp+B0h] [rbp-19h]
  int v35; // [rsp+B2h] [rbp-17h]
  const char *v36; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v37)(); // [rsp+C0h] [rbp-9h]
  char v38; // [rsp+C8h] [rbp-1h]
  int v39; // [rsp+CAh] [rbp+1h]
  const char *v40; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall *v41)(); // [rsp+D8h] [rbp+Fh]

  v2 = 0;
  v23 = 0x40000;
  v16 = 0;
  v20 = "NumberOfEntries";
  v18 = 0;
  v24 = "Revision";
  v19 = 0;
  v28 = "DomainNumber";
  v34 = 4;
  v32 = "CoordinationType";
  v22 = 1;
  v36 = "MemberCount";
  v26 = 2;
  v21 = AcpiParseULong;
  v40 = "Index";
  Pool2 = 0LL;
  v25 = AcpiParseULong;
  v27 = 0x80000;
  v29 = AcpiParseULong;
  v30 = 3;
  v31 = 786432;
  v33 = AcpiParseULong;
  v35 = 0x100000;
  v37 = AcpiParseULong;
  v38 = 5;
  v39 = 1310720;
  v41 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x10u);
  v6 = AcpiEvaluateMethod(a1, 1146307423, 0, (unsigned int)&P, (__int64)&v16);
  v8 = P;
  v9 = v6;
  if ( v6 >= 0 )
  {
    if ( !v16 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v9 = -1073741275;
        goto LABEL_7;
      }
      v10 = 42;
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
    v12 = *((_DWORD *)P + 2);
    if ( !v12 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v10 = 43;
      goto LABEL_5;
    }
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(24 * v12 + 4), 1919119952LL);
    if ( Pool2 )
    {
      v13 = v8 + 6;
      *Pool2 = *((unsigned __int8 *)v8 + 8);
      while ( 1 )
      {
        if ( v13 >= (_WORD *)((char *)v8 + *((unsigned int *)v8 + 1)) )
        {
          *a2 = Pool2;
          goto LABEL_9;
        }
        if ( *v13 != 3 )
        {
          v9 = -1072431096;
          goto LABEL_7;
        }
        v9 = AcpiParseCore(
               (unsigned int)&v18,
               6,
               (int)v13 + 4,
               (unsigned __int16)v13[1],
               (__int64)&Pool2[6 * v2 + 1],
               24,
               (__int64)"_CSD",
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
          44,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
          v2);
      }
    }
    else
    {
      v9 = -1073741670;
    }
  }
LABEL_7:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
LABEL_9:
  if ( v8 )
    ExFreePoolWithTag(v8, (ULONG)0);
  return (unsigned int)v9;
}
