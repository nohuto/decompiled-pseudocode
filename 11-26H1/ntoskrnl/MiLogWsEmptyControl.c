/*
 * XREFs of MiLogWsEmptyControl @ 0x14070900C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140AEC57C (MmProcessWorkingSetControl.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     MiFillLogProcessInfo @ 0x14046E5B0 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiLogWsEmptyControl(__int64 a1, __int64 a2)
{
  char result; // al
  int v3; // edx
  __int64 v4; // r9
  int v5; // r11d
  __int64 v6; // r8
  ULONG v7; // r9d
  __int64 v8; // r10
  int v9; // [rsp+20h] [rbp-59h]
  int v10; // [rsp+28h] [rbp-51h]
  char v11; // [rsp+40h] [rbp-39h] BYREF
  int v12; // [rsp+44h] [rbp-35h] BYREF
  const CHAR *v13; // [rsp+48h] [rbp-31h] BYREF
  int v14; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-19h] BYREF
  char *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  _BYTE v18[16]; // [rsp+90h] [rbp+17h] BYREF
  int *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  const CHAR **v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  v13 = 0LL;
  v12 = 0;
  result = MiFillLogProcessInfo(a2, &v12, &v13);
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
  {
    result = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 16LL);
    if ( result )
    {
      v11 = *(_DWORD *)(v4 + 184) & 0xF;
      v16 = &v11;
      v17 = (unsigned int)(v3 - 15);
      tlgCreate1Sz_char((__int64)v18, v13);
      v19 = &v14;
      v14 = v12;
      v21 = &v13;
      v20 = 4LL;
      LODWORD(v13) = v5;
      v22 = 4LL;
      return tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)&word_14005A176, v6, v7, v9, v10, 6u, &v15);
    }
  }
  return result;
}
