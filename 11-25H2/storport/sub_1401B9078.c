/*
 * XREFs of sub_1401B9078 @ 0x1401B9078
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400A59C4 @ 0x1400A59C4 (sub_1400A59C4.c)
 *     sub_140182D00 @ 0x140182D00 (sub_140182D00.c)
 *     sub_1401B9168 @ 0x1401B9168 (sub_1401B9168.c)
 */

__int64 sub_1401B9078()
{
  int v0; // ebx
  _QWORD *i; // rcx
  _BYTE *v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( dword_140169680 )
    return 0LL;
  dword_140169680 = 1;
  v4 = RtlQueryFeatureConfigurationChangeStamp();
  sub_1401B9168();
  sub_140182D00();
  for ( i = &off_140166B78; ; i = v2 + 56 )
  {
    v2 = sub_1400A59C4(i);
    if ( !v2 )
      break;
    if ( !v2[29] && !v2[30] && !v2[28] )
    {
      if ( (unsigned int)RtlRegisterFeatureConfigurationChangeNotification(sub_140182F20, 0LL, &v4, &qword_1401695D0) )
        qword_1401695D0 = 0LL;
      else
        v0 = 1;
      break;
    }
  }
  qword_140168690 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_1400A5B50;
  result = RtlRegisterFeatureUsageProvider(sub_140182EC0, 0LL, &qword_140168530);
  if ( !(_DWORD)result )
    return 0LL;
  qword_140168530 = 0LL;
  if ( v0 )
    return 0LL;
  return result;
}
