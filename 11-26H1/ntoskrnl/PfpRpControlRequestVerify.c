/*
 * XREFs of PfpRpControlRequestVerify @ 0x1404ED988
 * Callers:
 *     PfpRpControlRequest @ 0x140B04938 (PfpRpControlRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpRpControlRequestVerify(_DWORD *a1)
{
  unsigned int v2; // r9d
  _DWORD *v3; // rcx
  __int64 result; // rax
  unsigned int i; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // edx
  _QWORD *v8; // rcx

  v2 = a1[1] + a1[2];
  v3 = a1 + 6;
  result = 0LL;
  for ( i = 0; i < v2; ++i )
  {
    if ( !*v3 )
      return 1000LL;
    v3 += 2;
  }
  v6 = a1[3] + a1[4];
  v7 = 0;
  v8 = (_QWORD *)(((unsigned __int64)v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  while ( v7 < v6 )
  {
    if ( !*v8 )
      return 2000LL;
    ++v8;
    ++v7;
  }
  return result;
}
