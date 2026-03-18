/*
 * XREFs of BmlGetPixelFormatPreference @ 0x1402DEE24
 * Callers:
 *     BmlCompareSourceModes @ 0x1402DE178 (BmlCompareSourceModes.c)
 *     BmlGetNextBestSourceMode @ 0x1402DE3F8 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     Feature_HDRSourcePixFormatFix__private_IsEnabledDeviceUsageNoInline @ 0x1400982B0 (Feature_HDRSourcePixFormatFix__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall BmlGetPixelFormatPreference(int a1, int a2)
{
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  unsigned int v6; // eax
  unsigned int v7; // edx

  if ( a1 <= 31 )
  {
    if ( a1 != 31 )
    {
      if ( a1 )
      {
        v3 = a1 - 20;
        if ( !v3 )
          return 4LL;
        v4 = v3 - 1;
        if ( !v4 )
          return 4LL;
        if ( v4 == 2 )
          return 3LL;
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 323;
      }
      return 0xFFFFFFFFLL;
    }
    if ( (unsigned int)Feature_HDRSourcePixFormatFix__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_11;
    return 0xFFFFFFFFLL;
  }
  switch ( a1 )
  {
    case ' ':
      return 1LL;
    case '#':
      if ( !(unsigned int)Feature_HDRSourcePixFormatFix__private_IsEnabledDeviceUsageNoInline() )
      {
LABEL_11:
        result = 5LL;
        if ( a2 != 1 )
          return 0xFFFFFFFFLL;
        return result;
      }
      return 0xFFFFFFFFLL;
    case ')':
      return 2LL;
  }
  if ( a1 != 113 )
    return 0xFFFFFFFFLL;
  v6 = a2 - 2;
  v7 = 5;
  if ( v6 > 1 )
    return (unsigned int)-1;
  return v7;
}
