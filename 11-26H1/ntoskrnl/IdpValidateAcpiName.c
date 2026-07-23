/*
 * XREFs of IdpValidateAcpiName @ 0x14089BF9C
 * Callers:
 *     IidValidateDeviceId @ 0x140781B7C (IidValidateDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IdpValidateAcpiName(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  bool v6; // cf

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    return 3221225990LL;
  if ( v2 < a1 + 24 )
    return 3221225793LL;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(v2 + v4) );
  v6 = v4 == -1;
  v5 = v4 + 1;
  if ( v6 || v5 == 1 )
    return 3221487672LL;
  else
    return a1 + a2 < v2 + v5 ? 0x80000005 : 0;
}
