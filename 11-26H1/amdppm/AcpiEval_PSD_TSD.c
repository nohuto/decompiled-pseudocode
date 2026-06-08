/*
 * XREFs of AcpiEval_PSD_TSD @ 0x1400291B4
 * Callers:
 *     InitAcpiPerfDomain @ 0x140037724 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140037978 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x140006208 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sd @ 0x140007DD8 (WPP_RECORDER_SF_sd.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14002A3D0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140040898 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PSD_TSD(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // r15d
  unsigned int v5; // r12d
  unsigned int v6; // eax
  _DWORD *Pool2; // r14
  int v8; // eax
  _WORD *v9; // rsi
  int v10; // ebx
  unsigned __int16 v11; // r9
  int v13; // eax
  _WORD *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-A9h]
  char v19[8]; // [rsp+40h] [rbp-89h] BYREF
  int v20; // [rsp+48h] [rbp-81h] BYREF
  PVOID P; // [rsp+50h] [rbp-79h] BYREF
  __int64 v22; // [rsp+58h] [rbp-71h]
  char v23; // [rsp+60h] [rbp-69h] BYREF
  int v24; // [rsp+62h] [rbp-67h]
  const char *v25; // [rsp+68h] [rbp-61h]
  __int64 (__fastcall *v26)(); // [rsp+70h] [rbp-59h]
  char v27; // [rsp+78h] [rbp-51h]
  int v28; // [rsp+7Ah] [rbp-4Fh]
  const char *v29; // [rsp+80h] [rbp-49h]
  __int64 (__fastcall *v30)(); // [rsp+88h] [rbp-41h]
  char v31; // [rsp+90h] [rbp-39h]
  int v32; // [rsp+92h] [rbp-37h]
  const char *v33; // [rsp+98h] [rbp-31h]
  __int64 (__fastcall *v34)(); // [rsp+A0h] [rbp-29h]
  char v35; // [rsp+A8h] [rbp-21h]
  int v36; // [rsp+AAh] [rbp-1Fh]
  const char *v37; // [rsp+B0h] [rbp-19h]
  __int64 (__fastcall *v38)(); // [rsp+B8h] [rbp-11h]
  char v39; // [rsp+C0h] [rbp-9h]
  int v40; // [rsp+C2h] [rbp-7h]
  const char *v41; // [rsp+C8h] [rbp-1h]
  __int64 (__fastcall *v42)(); // [rsp+D0h] [rbp+7h]
  int v43; // [rsp+E0h] [rbp+17h] BYREF
  char v44; // [rsp+E4h] [rbp+1Bh]

  v3 = 0;
  v22 = a1;
  *(_DWORD *)v19 = a2;
  v25 = "NumberOfEntries";
  v20 = 0;
  v26 = AcpiParseULong;
  v29 = "Revision";
  v30 = AcpiParseULong;
  v33 = "DomainNumber";
  v34 = AcpiParseULong;
  v37 = "CoordinationType";
  v5 = 512;
  v38 = AcpiParseULong;
  v41 = "MemberCount";
  v42 = AcpiParseULong;
  v6 = 512;
  v23 = 0;
  if ( a2 != 1146310751 )
    v6 = 0x2000;
  v24 = 0;
  v27 = 1;
  Pool2 = 0LL;
  v28 = 0x40000;
  v31 = 2;
  v32 = 0x80000;
  v35 = 3;
  v36 = 786432;
  v39 = 4;
  v40 = 0x100000;
  v43 = a2;
  v44 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), v6);
  v8 = AcpiEvaluateMethod(a1, *(_DWORD *)v19, 0, (unsigned int)&P, (__int64)&v20);
  v9 = P;
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_9;
  if ( !v20 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_8:
      v10 = -1073741275;
      goto LABEL_9;
    }
    v11 = 20;
LABEL_7:
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v11,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
      v19);
    goto LABEL_8;
  }
  v13 = *((_DWORD *)P + 2);
  if ( !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    v11 = 21;
    goto LABEL_7;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(20 * v13 + 4), 1919119952LL);
  if ( Pool2 )
  {
    v14 = v9 + 6;
    *Pool2 = *((unsigned __int8 *)v9 + 8);
    while ( 1 )
    {
      if ( v14 >= (_WORD *)((char *)v9 + *((unsigned int *)v9 + 1)) )
      {
        *a3 = Pool2;
        goto LABEL_13;
      }
      if ( *v14 != 3 )
      {
        v10 = -1072431096;
        goto LABEL_9;
      }
      v10 = AcpiParseCore(
              (unsigned int)&v23,
              5,
              (int)v14 + 4,
              (unsigned __int16)v14[1],
              (__int64)&Pool2[4 * v3 + 1 + v3],
              20,
              (__int64)&v43,
              0);
      if ( v10 < 0 )
        break;
      v17 = (unsigned __int16)v14[1];
      if ( (unsigned __int16)v17 < 4u )
        v17 = 4LL;
      v14 = (_WORD *)((char *)v14 + v17 + 4);
      ++v3;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, v15, v16, 0x16u, v18, (const char *)&v43);
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_9:
  if ( *(_DWORD *)v19 != 1146310751 )
    v5 = 0x2000;
  _InterlockedOr((volatile signed __int32 *)(v22 + 1112), v5);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
LABEL_13:
  if ( v9 )
    ExFreePoolWithTag(v9, (ULONG)0);
  return (unsigned int)v10;
}
