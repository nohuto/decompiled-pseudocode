/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x18010C090
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x18010BE60 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x180063CA0 (RtlGetNtProductType.c)
 *     NtWriteFile @ 0x18015F040 (NtWriteFile.c)
 *     NtPowerInformation @ 0x18015FB10 (NtPowerInformation.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlRestoreBootStatusDefaults(__int64 a1)
{
  char v2; // cl
  int *v3; // rax
  __int64 v4; // rdx
  __int64 v6; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+78h] [rbp-88h] BYREF
  int v9; // [rsp+90h] [rbp-70h] BYREF
  int v10; // [rsp+94h] [rbp-6Ch] BYREF
  __int16 v11; // [rsp+99h] [rbp-67h]
  char v12; // [rsp+9Bh] [rbp-65h]
  char v13; // [rsp+C1h] [rbp-3Fh]
  char v14; // [rsp+C2h] [rbp-3Eh]
  int v15; // [rsp+148h] [rbp+48h]

  v8 = 0LL;
  memset_thunk_772440563353939046(&v10, 0, 0xC4uLL);
  v9 = 200;
  RtlGetNtProductType(&v10);
  v2 = 0;
  v11 = 286;
  v3 = &v9;
  v13 = 1;
  v4 = 200LL;
  v12 = 0;
  v15 = 0;
  do
  {
    v2 -= *(_BYTE *)v3;
    v3 = (int *)((char *)v3 + 1);
    --v4;
  }
  while ( v4 );
  v14 = v2;
  v6 = 0LL;
  v7[2] = 0LL;
  v7[3] = 1LL;
  v7[0] = &v9;
  v7[1] = 200LL;
  NtPowerInformation(94LL, v7, 32LL, 0LL, 0);
  return NtWriteFile(a1, 0LL, 0LL, 0LL, &v8, &v9, 200, &v6, 0LL);
}
