/*
 * XREFs of IsFileObjectForNetworkInterface @ 0x14000A960
 * Callers:
 *     ndisLwmCreateIrpHandler @ 0x14000A790 (ndisLwmCreateIrpHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

char __fastcall IsFileObjectForNetworkInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int16 Length; // dx
  int v6; // r9d
  UNICODE_STRING v7; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING v8; // [rsp+40h] [rbp-48h] BYREF
  _OWORD v9[2]; // [rsp+50h] [rbp-38h] BYREF
  int v10; // [rsp+70h] [rbp-18h]
  wchar_t v11; // [rsp+74h] [rbp-14h]

  v2 = *(_QWORD *)(a1 + 48);
  v3 = a2;
  if ( !v2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v6 = 11;
LABEL_13:
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      v6,
      (struct _GUID *)&WPP_256fc262f79a3bb49efbb755fab9107e_Traceguids);
    return 0;
  }
  if ( !*(_WORD *)(v2 + 88) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v6 = 12;
    goto LABEL_13;
  }
  v10 = *(_DWORD *)L"e\\";
  v11 = aNetworkinterfa[18];
  v7.Buffer = (wchar_t *)v9;
  v9[0] = *(_OWORD *)L"\\NetworkInterface\\";
  *(_QWORD *)&v7.Length = 2490404LL;
  v9[1] = *(_OWORD *)L"Interface\\";
  if ( *(_WORD *)(v2 + 88) < 0x24u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v6 = 13;
    goto LABEL_13;
  }
  *(_DWORD *)(&v8.MaximumLength + 1) = 0;
  v8.Buffer = *(wchar_t **)(v2 + 96);
  *(_DWORD *)&v8.Length = 2359332;
  if ( RtlEqualUnicodeString(&v8, &v7, 1u) )
  {
    Length = v7.Length;
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(v2 + 96) + 2 * ((unsigned __int64)v7.Length >> 1);
    *(_WORD *)v3 = *(_WORD *)(v2 + 88) - Length;
    *(_WORD *)(v3 + 2) = *(_WORD *)(v2 + 90) - Length;
    return 1;
  }
  return 0;
}
