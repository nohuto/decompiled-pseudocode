/*
 * XREFs of DpiKsrSetBootGraphicsInformation @ 0x1402529D8
 * Callers:
 *     DxgkStopAdapters @ 0x1401E0C3C (DxgkStopAdapters.c)
 *     DpiFdoHandleSystemPower @ 0x1403BA2FC (DpiFdoHandleSystemPower.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

NTSTATUS DpiKsrSetBootGraphicsInformation()
{
  __int64 SystemInformation; // [rsp+20h] [rbp-30h] BYREF
  int v2; // [rsp+28h] [rbp-28h]
  __int64 v3; // [rsp+2Ch] [rbp-24h]
  __int64 v4; // [rsp+34h] [rbp-1Ch]
  int v5; // [rsp+3Ch] [rbp-14h]

  v4 = 0LL;
  v5 = 0;
  v2 = xmmword_140169130;
  v3 = DWORD1(xmmword_140169130);
  SystemInformation = xmmword_140169140;
  if ( HIDWORD(xmmword_140169130) == 20 )
  {
    HIDWORD(v4) = 3;
    HIDWORD(v3) = DWORD2(xmmword_140169130) / 3;
    return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
  }
  if ( HIDWORD(xmmword_140169130) == 21 || HIDWORD(xmmword_140169130) == 22 )
  {
    HIDWORD(v4) = 4;
    goto LABEL_8;
  }
  if ( (unsigned int)(HIDWORD(xmmword_140169130) - 32) < 2 )
  {
    HIDWORD(v4) = 2;
LABEL_8:
    HIDWORD(v3) = DWORD2(xmmword_140169130) >> 2;
    return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
  }
  HIDWORD(v4) = 0;
  return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
}
