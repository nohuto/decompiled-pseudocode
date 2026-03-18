/*
 * XREFs of sub_140049078 @ 0x140049078
 * Callers:
 *     sub_14000DA00 @ 0x14000DA00 (sub_14000DA00.c)
 *     DumpPreInitialize @ 0x140018E70 (DumpPreInitialize.c)
 * Callees:
 *     sub_1400323F4 @ 0x1400323F4 (sub_1400323F4.c)
 *     sub_140047070 @ 0x140047070 (sub_140047070.c)
 *     sub_140049168 @ 0x140049168 (sub_140049168.c)
 */

__int64 sub_140049078()
{
  int v0; // ebx
  _QWORD *i; // rcx
  _BYTE *v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( dword_1400423B0 )
    return 0LL;
  dword_1400423B0 = 1;
  v4 = RtlQueryFeatureConfigurationChangeStamp();
  sub_140049168();
  sub_140047070();
  for ( i = &off_140041188; ; i = v2 + 56 )
  {
    v2 = sub_1400323F4(i);
    if ( !v2 )
      break;
    if ( !v2[29] && !v2[30] && !v2[28] )
    {
      if ( (unsigned int)RtlRegisterFeatureConfigurationChangeNotification(sub_140047290, 0LL, &v4, &qword_140042330) )
        qword_140042330 = 0LL;
      else
        v0 = 1;
      break;
    }
  }
  qword_1400421D0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_140032570;
  result = RtlRegisterFeatureUsageProvider(sub_140047230, 0LL, &qword_140042088);
  if ( !(_DWORD)result )
    return 0LL;
  qword_140042088 = 0LL;
  if ( v0 )
    return 0LL;
  return result;
}
