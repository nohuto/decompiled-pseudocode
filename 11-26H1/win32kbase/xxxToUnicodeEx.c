/*
 * XREFs of xxxToUnicodeEx @ 0x1400E74C0
 * Callers:
 *     NtUserToUnicodeEx @ 0x140193C60 (NtUserToUnicodeEx.c)
 *     NtUserGetKeyEventInfo @ 0x1401E45E0 (NtUserGetKeyEventInfo.c)
 * Callees:
 *     xxxInternalToUnicode @ 0x1400E7610 (xxxInternalToUnicode.c)
 *     Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline @ 0x1400E85E0 (Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall xxxToUnicodeEx(
        unsigned int a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        int a5,
        __int16 a6,
        int a7,
        __int64 a8)
{
  bool v10; // zf
  unsigned int v11; // eax
  __int16 v12; // r8
  int i; // edx
  unsigned __int64 v14; // r9
  int v15; // ecx
  char v16; // r11
  int v17; // ecx
  char v18; // r10
  int v19; // ecx
  __int64 v21; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v22[64]; // [rsp+60h] [rbp-88h] BYREF

  memset(v22, 0, sizeof(v22));
  LODWORD(v21) = 0;
  v10 = (unsigned int)Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline() == 0;
  v11 = a7;
  if ( v10 )
  {
    v12 = 0;
  }
  else
  {
    v12 = a6;
    v11 = a7 & 0xFFFFFFF7;
    if ( a6 )
      v11 = a7;
  }
  for ( i = 0; i < 256; ++i )
  {
    v14 = (unsigned __int64)(unsigned __int8)i >> 2;
    v15 = (unsigned __int8)v22[v14];
    v16 = 2 * (i & 3);
    if ( *a3 < 0 )
      v17 = v15 | (1 << v16);
    else
      v17 = v15 & ~(1 << v16);
    v18 = 2 * (i & 3) + 1;
    if ( (*a3 & 1) != 0 )
      v19 = (unsigned __int8)v17 | (1 << v18);
    else
      v19 = (unsigned __int8)v17 & ~(1 << v18);
    v22[v14] = v19;
    ++a3;
  }
  return xxxInternalToUnicode(a1, a5, v12, v11, (__int64)&v21, a8);
}
