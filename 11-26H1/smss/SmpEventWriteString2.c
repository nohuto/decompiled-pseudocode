/*
 * XREFs of SmpEventWriteString2 @ 0x14000D480
 * Callers:
 *     SmpProcessFileRenames @ 0x1400173C0 (SmpProcessFileRenames.c)
 * Callees:
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

void __fastcall SmpEventWriteString2(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v5; // r8d
  unsigned __int16 v6; // ax
  __int64 v7; // rax
  __int16 v8; // [rsp+20h] [rbp-60h] BYREF
  __int16 v9; // [rsp+24h] [rbp-5Ch] BYREF
  _QWORD v10[5]; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+5Ch] [rbp-24h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]

  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, &SmssEvt_FileRename_Info) )
    {
      v5 = *a3;
      v6 = *a2;
      v11 = *a2;
      v8 = v6 >> 1;
      v9 = (unsigned __int16)v5 >> 1;
      v10[0] = &v8;
      v10[2] = &v9;
      v10[4] = *((_QWORD *)a2 + 1);
      v7 = *((_QWORD *)a3 + 1);
      v14 = v5;
      v13 = v7;
      v10[1] = 2LL;
      v10[3] = 2LL;
      v12 = 0;
      v15 = 0;
      EtwEventWrite(SmpTraceHandle, &SmssEvt_FileRename_Info, 4LL, v10);
    }
  }
}
