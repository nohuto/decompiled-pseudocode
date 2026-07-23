/*
 * XREFs of MiGetLargePoolPages @ 0x1403D1B98
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     MiObtainPoolCharges @ 0x140368124 (MiObtainPoolCharges.c)
 *     MiGetLargePageChain @ 0x1403D1D00 (MiGetLargePageChain.c)
 *     MiReturnExcessPoolCharges @ 0x1403D1EA0 (MiReturnExcessPoolCharges.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetLargePoolPages(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r11
  int v4; // r8d
  unsigned __int64 v5; // r9
  _DWORD *v6; // r10
  __int64 v7; // rcx
  __int64 i; // rax
  _OWORD v10[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v11; // [rsp+50h] [rbp-30h]
  __int128 v12; // [rsp+60h] [rbp-20h]
  char vars0; // [rsp+80h] [rbp+0h] BYREF

  *(_QWORD *)&v12 = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  memset(v10, 0, sizeof(v10));
  DWORD2(v12) = 0;
  v11 = 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v2, 0) )
    return 3221225626LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (unsigned __int16)KeNumberNodes;
  v5 = v3 >> 9;
  if ( (((unsigned __int8)&vars0 - 80) & 4) != 0 )
    LODWORD(v10[0]) = (unsigned __int16)KeNumberNodes;
  v6 = v10;
  if ( (((unsigned __int8)&vars0 - 80) & 4) != 0 )
    v6 = (_DWORD *)v10 + 1;
  memset64(v6, (unsigned __int16)KeNumberNodes | ((unsigned __int64)(unsigned __int16)KeNumberNodes << 32), 1uLL);
  if ( (((unsigned __int8)&vars0 - 80) & 4) == 0 )
    v6[2] = v4;
  v7 = 0LL;
  for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
  {
    if ( MiPageSizes[i] == 512 )
    {
      v7 = MiDemandLargePageCoalesceTimeBounds[i];
      break;
    }
  }
  LOBYTE(v4) = *(_BYTE *)(a1 + 102);
  if ( v5 >= 8 )
    v5 = 8LL;
  v12 = 0LL;
  *((_QWORD *)&v11 + 1) = v5 * v7;
  MiGetLargePageChain(*(_DWORD *)(a1 + 96), v3, v4, (unsigned int)v10, a1 + 16);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    MiReturnExcessPoolCharges(*(_QWORD *)(a1 + 8), 0LL);
    return 3221225626LL;
  }
  return 0LL;
}
