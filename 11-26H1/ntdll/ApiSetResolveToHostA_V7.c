/*
 * XREFs of ApiSetResolveToHostA_V7 @ 0x18013B524
 * Callers:
 *     ApiSetResolveToHost2 @ 0x18013B31C (ApiSetResolveToHost2.c)
 * Callees:
 *     ApiSetpResolveHost @ 0x180031880 (ApiSetpResolveHost.c)
 */

__int64 __fastcall ApiSetResolveToHostA_V7(__int64 a1, __int64 a2, char *a3, _OWORD *a4)
{
  unsigned __int64 v5; // r8

  *a3 = 0;
  *a4 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a2 + v5) );
  if ( v5 <= 0xFFFF )
    return ApiSetpResolveHost(a1, a2, v5, 0, 0LL, a3, (__int64)a4);
  else
    return 3221225485LL;
}
