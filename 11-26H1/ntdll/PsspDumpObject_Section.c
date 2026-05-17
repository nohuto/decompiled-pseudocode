/*
 * XREFs of PsspDumpObject_Section @ 0x180100FD0
 * Callers:
 *     <none>
 * Callees:
 *     NtQuerySection @ 0x18015F960 (NtQuerySection.c)
 */

__int64 __fastcall PsspDumpObject_Section(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0;
  v6 = 0LL;
  if ( a3 < 0x18 )
    return 3221225507LL;
  result = NtQuerySection(a1, 0LL, a2, 24LL, &v6);
  if ( (int)result < 0 )
  {
    *a4 = 0;
  }
  else if ( HIDWORD(v6) )
  {
    return 2147483653LL;
  }
  else
  {
    *a4 = v6;
    return (unsigned int)result;
  }
  return result;
}
