/*
 * XREFs of AdtpGetCategoryAndSubCategoryId @ 0x140AAED68
 * Callers:
 *     AdtpWriteToEtwEx @ 0x14046E82C (AdtpWriteToEtwEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AdtpGetCategoryAndSubCategoryId(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r10d
  unsigned int v4; // r9d
  __int64 i; // rcx

  v3 = 0;
  v4 = a1 - 100;
  if ( (unsigned int)(a1 - 100) > 0x3B || !a2 && !a3 )
    return 3221225485LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 9 )
      return 3221225473LL;
    if ( v3 + (unsigned int)*(unsigned __int16 *)&ExpPlatformBinaryLock.ApcStateFill[2 * i + 16] > v4 )
      break;
    v3 += *(unsigned __int16 *)&ExpPlatformBinaryLock.ApcStateFill[2 * i + 16];
  }
  if ( a2 )
    *a2 = i;
  if ( a3 )
    *a3 = v4 - v3;
  return 0LL;
}
