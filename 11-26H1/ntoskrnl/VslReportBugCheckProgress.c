/*
 * XREFs of VslReportBugCheckProgress @ 0x1405C6500
 * Callers:
 *     PopCheckpointSystemSleepUnsafe @ 0x140C041C8 (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslReportBugCheckProgress(char *a1, __int128 *a2, const void *a3, unsigned int a4, int a5)
{
  size_t v6; // rbx
  __int64 i; // rax
  __int64 v10; // rsi
  unsigned __int16 *v11; // rcx
  int v12; // r8d
  int v13; // edx
  __int64 result; // rax
  __int128 v15; // xmm0
  char v16[8]; // [rsp+20h] [rbp-51h] BYREF
  __int64 v17; // [rsp+28h] [rbp-49h]
  __int128 v18; // [rsp+30h] [rbp-41h]
  __int64 v19; // [rsp+40h] [rbp-31h] BYREF
  size_t v20; // [rsp+48h] [rbp-29h]
  __int64 v21; // [rsp+50h] [rbp-21h]

  v6 = a4;
  if ( (a5 & 1) == 0 || a4 > 8 )
    return 3221225485LL;
  memset_0(v16, 0, 0x68uLL);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v10 = (unsigned int)i;
    if ( (unsigned int)i >= 4 )
      break;
    v11 = (unsigned __int16 *)a1;
    do
    {
      v12 = *(unsigned __int16 *)((char *)v11 + (char *)IumBugCheckVariables[i] - a1);
      v13 = *v11 - v12;
      if ( v13 )
        break;
      ++v11;
    }
    while ( v12 );
    if ( !v13 )
    {
      v17 = (unsigned int)i;
      goto LABEL_12;
    }
  }
  if ( (_DWORD)i == 4 )
    return 3221225485LL;
LABEL_12:
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v18 = *a2;
  if ( (a5 & 0x40) != 0 )
    result = 3221225485LL;
  else
    result = VslpEnterIumSecureMode(2u, 0x117u, 0, (__int64)v16);
  if ( (_DWORD)v6 )
  {
    memmove(&v19, a3, v6);
    v15 = *a2;
    v17 = v10;
    v20 = v6;
    v21 = a5 | 6u;
    v18 = v15;
    return VslpEnterIumSecureMode(2u, 0x117u, 0, (__int64)v16);
  }
  return result;
}
