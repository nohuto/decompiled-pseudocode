/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x1800101D0
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlUpcaseUnicodeString @ 0x18003AB90 (RtlUpcaseUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1800A72E0 (RtlPrefixUnicodeString.c)
 *     SymCryptSha256 @ 0x1800FDF8C (SymCryptSha256.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

__int64 __fastcall RtlDeriveCapabilitySidsFromName(__int64 a1, __int64 a2, _OWORD *a3)
{
  _OWORD *v3; // rbx
  __int64 result; // rax
  __int64 v7; // r8
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  unsigned int v10; // edi
  __int128 v11; // xmm1
  void *Buf1[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v13; // [rsp+30h] [rbp-58h]
  __int128 v14; // [rsp+40h] [rbp-48h] BYREF
  __int128 v15; // [rsp+50h] [rbp-38h]

  v3 = a3;
  *(_OWORD *)Buf1 = 0LL;
  if ( !a1 || !a2 || !a3 )
    __fastfail(5u);
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  LOBYTE(a3) = 1;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 40) = 0;
  result = RtlUpcaseUnicodeString(Buf1, a1, a3);
  if ( (int)result >= 0 )
  {
    SymCryptSha256(Buf1[1], LOWORD(Buf1[0]), &v14);
    v8 = v14;
    *(_WORD *)a2 = 2305;
    *(_DWORD *)(a2 + 2) = RtlpNtAuthority;
    *(_WORD *)(a2 + 6) = 1280;
    *(_DWORD *)(a2 + 8) = 32;
    *(_OWORD *)(a2 + 12) = v8;
    v13 = v8;
    v9 = v15;
    *(_OWORD *)(a2 + 28) = v15;
    v10 = 0;
    v14 = v9;
    while ( v10 < 0xC )
    {
      if ( LOWORD(Buf1[0]) == *((unsigned __int16 *)&RtlpLegacyApplicationCapabilityNames + 8 * v10)
        && !memcmp(Buf1[1], *((const void **)&RtlpLegacyApplicationCapabilityNames + 2 * v10 + 1), LOWORD(Buf1[0])) )
      {
        *(_WORD *)v3 = 513;
        *(_DWORD *)((char *)v3 + 2) = RtlpAppPackageAuthority;
        *((_WORD *)v3 + 3) = 3840;
        *((_DWORD *)v3 + 2) = 3;
        *((_DWORD *)v3 + 3) = v10 + 1;
        break;
      }
      ++v10;
    }
    if ( Buf1[1] )
      RtlpSysVolFree(Buf1[1]);
    if ( v10 == 12 )
    {
      *(_WORD *)v3 = 2561;
      LOBYTE(v7) = 1;
      *(_DWORD *)((char *)v3 + 2) = RtlpAppPackageAuthority;
      *((_WORD *)v3 + 3) = 3840;
      *((_DWORD *)v3 + 2) = 3;
      *((_DWORD *)v3 + 3) = (unsigned __int8)RtlPrefixUnicodeString(&unk_180171290, a1, v7) != 0 ? 0x10000 : 1024;
      v11 = v14;
      v3[1] = v13;
      v3[2] = v11;
    }
    return 0LL;
  }
  return result;
}
