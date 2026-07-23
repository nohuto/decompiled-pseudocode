/*
 * XREFs of MiLogProcessWorkingSetsStop @ 0x14053095C
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 *     MiTrimAllWorkingSets @ 0x14045F5B0 (MiTrimAllWorkingSets.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiLogProcessWorkingSetsStop(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int16 *v3; // r8
  ULONG v4; // r9d
  __int64 v5; // r10
  __int64 v6; // r11
  int v7; // [rsp+20h] [rbp-59h]
  int v8; // [rsp+28h] [rbp-51h]
  int v9; // [rsp+40h] [rbp-39h] BYREF
  __int64 v10; // [rsp+48h] [rbp-31h] BYREF
  __int64 v11; // [rsp+50h] [rbp-29h] BYREF
  __int64 v12; // [rsp+58h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+60h] [rbp-19h] BYREF
  int *v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  __int64 *v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 *v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  __int64 *v20; // [rsp+B0h] [rbp+37h]
  __int64 v21; // [rsp+B8h] [rbp+3Fh]

  v2 = *(_QWORD *)(a2 + 23456);
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 1LL) )
  {
    v9 = *v3;
    v15 = 4LL;
    v14 = &v9;
    v10 = *((_QWORD *)v3 + 2808);
    v16 = &v10;
    v18 = &v11;
    v20 = &v12;
    v17 = 8LL;
    v11 = v6;
    v19 = 8LL;
    v12 = v2;
    v21 = 8LL;
    tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&qword_140058EB8, (__int64)v3, v4, v7, v8, 6u, &v13);
  }
}
