/*
 * XREFs of TcglibEalLogError @ 0x14008D638
 * Callers:
 *     ParseAssignNamespace @ 0x1401323D0 (ParseAssignNamespace.c)
 *     ParseBandMetadata @ 0x140132530 (ParseBandMetadata.c)
 *     ParseLockingObjectInfo @ 0x1401326F0 (ParseLockingObjectInfo.c)
 *     ParseGetTableColumnData @ 0x140133860 (ParseGetTableColumnData.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 *     TcglibpConfigureLockingSp @ 0x140134684 (TcglibpConfigureLockingSp.c)
 *     ParseSecretProtection @ 0x1401353E0 (ParseSecretProtection.c)
 *     ParseBooleanData @ 0x140135B50 (ParseBooleanData.c)
 *     ParseSyncSessionData @ 0x140135C90 (ParseSyncSessionData.c)
 *     ParseTPerProperties @ 0x140135DF0 (ParseTPerProperties.c)
 *     TcglibpCloseSession @ 0x140136434 (TcglibpCloseSession.c)
 *     TcglibpOpenSessionWithRetry @ 0x140136870 (TcglibpOpenSessionWithRetry.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer @ 0x14008C6E4 (McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibEalLogError(int *a1, const char *a2, char a3, char a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  const char *v7; // rdi
  int v11; // r11d
  int *v12; // rbx
  const wchar_t *v13; // rsi
  char v14; // r11
  const wchar_t *v15; // rcx
  const char *v16; // r8
  const char *v17; // rdx
  const char *v18; // rdi
  int v20; // [rsp+A0h] [rbp-68h]
  __int128 v21; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v22; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v23; // [rsp+C8h] [rbp-40h] BYREF

  v6 = *a1;
  v7 = 0LL;
  v22 = 0LL;
  v20 = RaidNullAddress;
  v23 = 0LL;
  v21 = 0LL;
  if ( v6 == 1431193940 )
  {
    v11 = a1[26];
    v7 = (const char *)a1;
    v12 = (int *)*((_QWORD *)a1 + 3);
    v23 = *(_OWORD *)(a1 + 526);
    v20 = v11;
  }
  else
  {
    v12 = 0LL;
    if ( v6 == 1094997074 )
      v12 = a1;
  }
  v22 = *(_OWORD *)(v12 + 1282);
  v13 = (const wchar_t *)*((_QWORD *)v12 + 643);
  RaidDriverGetName(*((_QWORD *)v12 + 2), (__int64)&v21);
  if ( (byte_140173447 & 2) != 0 )
  {
    v15 = (const wchar_t *)&unk_140153274;
    if ( v13 )
      v15 = v13;
    if ( v7 )
    {
      v16 = v7 + 242;
      v17 = v7 + 177;
      v18 = v7 + 168;
    }
    else
    {
      v18 = (const char *)&dword_140154ADC;
      v16 = (const char *)&dword_140154ADC;
      v17 = (const char *)&dword_140154ADC;
    }
    McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer(
      (__int64)v15,
      &TcgError,
      (__int64)v16,
      v12[14],
      v14,
      SBYTE1(v20),
      SBYTE2(v20),
      (__int64)&v23,
      (__int64)&v22,
      *((const wchar_t **)&v21 + 1),
      v18,
      v17,
      v16,
      v15,
      a2,
      a3,
      a4,
      a5,
      a6);
  }
  return 0LL;
}
