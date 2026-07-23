/*
 * XREFs of PopDiagTraceBsdWriteTime @ 0x14042520C
 * Callers:
 *     PopWriteBsdPoInfo @ 0x140425088 (PopWriteBsdPoInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTraceBsdWriteTime(int a1, unsigned int a2, int a3)
{
  NTSTATUS result; // eax
  int v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+34h] [rbp-35h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  __int64 v7; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-19h] BYREF
  int *v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  __int64 *v11; // [rsp+80h] [rbp+17h]
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  int *v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh]
  __int64 *v15; // [rsp+A0h] [rbp+37h]
  __int64 v16; // [rsp+A8h] [rbp+3Fh]

  if ( (a3 < 0 || a2) && (unsigned int)dword_140E07560 > 5 && (qword_140E07570 & 0x200000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_140E07578 & 0x200000000000LL) == qword_140E07578 )
    {
      v4 = a1;
      v9 = &v4;
      v6 = a2;
      v5 = a3;
      v11 = &v6;
      v10 = 4LL;
      v13 = &v5;
      v15 = &v7;
      v12 = 8LL;
      v14 = 4LL;
      v7 = 0x1000000LL;
      v16 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07560,
               (unsigned __int8 *)word_14004A612,
               0LL,
               0LL,
               6u,
               &v8);
    }
  }
  return result;
}
