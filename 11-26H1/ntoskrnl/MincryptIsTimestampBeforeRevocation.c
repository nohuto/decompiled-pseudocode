/*
 * XREFs of MincryptIsTimestampBeforeRevocation @ 0x1408A82E4
 * Callers:
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     I_MinCryptIsCertificateHashRevokedV2 @ 0x1407215F0 (I_MinCryptIsCertificateHashRevokedV2.c)
 *     I_MinCryptIsTimestampSignerTrusted @ 0x1408A7F54 (I_MinCryptIsTimestampSignerTrusted.c)
 */

__int64 __fastcall MincryptIsTimestampBeforeRevocation(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rcx
  bool v6; // bl
  int v7; // esi
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  int v10; // r12d
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  bool v13; // [rsp+80h] [rbp+40h] BYREF
  __int64 v14; // [rsp+90h] [rbp+50h]
  unsigned int v15; // [rsp+98h] [rbp+58h] BYREF

  v14 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = 1;
  v12 = 0LL;
  v7 = 0;
  v13 = 0;
  v8 = -1073740285;
  v15 = 0;
  v9 = 0;
  if ( !*(_DWORD *)(v4 + 48) )
    return v8;
  do
  {
    v10 = v7;
    if ( !I_MinCryptIsCertificateHashRevokedV2(
            *(_DWORD *)(120LL * v9 + *(_QWORD *)(v4 + 40)),
            (const void *)(120LL * v9 + *(_QWORD *)(v4 + 40) + 8LL),
            *(_DWORD *)(120LL * v9 + *(_QWORD *)(v4 + 40) + 4),
            &v12,
            &v13,
            (int *)&v15) )
      goto LABEL_15;
    ++v7;
    if ( *a2 )
    {
      if ( *a2 < v12 )
      {
        if ( v15 && I_MinCryptIsTimestampSignerTrusted(v15, *(_QWORD *)(v14 + 16)) )
        {
          v7 = v10;
          v8 = 0;
          goto LABEL_15;
        }
        *(_DWORD *)(a1 + 8) |= 0x2000000u;
      }
      else
      {
        *(_DWORD *)(a1 + 8) |= 0x1000000u;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 8) |= 0x4000000u;
    }
    v6 = v6 && v13;
LABEL_15:
    v4 = *(_QWORD *)(a1 + 16);
    ++v9;
  }
  while ( v9 < *(_DWORD *)(v4 + 48) );
  if ( v7 )
  {
    v8 = -1073740285;
    if ( v6 )
      *(_DWORD *)(a1 + 8) |= 0x800000u;
  }
  return v8;
}
