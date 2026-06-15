/*
 * XREFs of McTemplateU0zqq_EventWriteTransfer @ 0x180022700
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     wil::details::lambda_call__lambda_fff9119fb840d357cf7d24802c9bd62a___::_lambda_call__lambda_fff9119fb840d357cf7d24802c9bd62a___ @ 0x180029DC8 (wil--details--lambda_call__lambda_fff9119fb840d357cf7d24802c9bd62a___--_lambda_call__lambda_fff9.c)
 *     wil::details::lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___::_lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___ @ 0x18002A764 (wil--details--lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___--_lambda_call__lambda_7405.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800227C8 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0zqq_EventWriteTransfer(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5)
{
  __int64 v5; // rax
  int v7; // eax
  _BYTE v9[16]; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-48h]
  int v11; // [rsp+48h] [rbp-40h]
  int v12; // [rsp+4Ch] [rbp-3Ch]
  int *v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+58h] [rbp-30h]
  char *v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+A8h] [rbp+20h] BYREF

  v17 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    while ( a3[++v5] != 0 )
      ;
    v7 = 2 * v5 + 2;
  }
  else
  {
    v7 = 10;
  }
  v11 = v7;
  v14 = 4LL;
  v13 = &v17;
  v16 = 4LL;
  if ( !a3 )
    a3 = L"NULL";
  v15 = &a5;
  v10 = a3;
  v12 = 0;
  return McGenEventWrite_EventWriteTransfer(0LL, a2, a3, 4LL, v9);
}
