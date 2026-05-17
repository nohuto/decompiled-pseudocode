/*
 * XREFs of RtlEqualDomainName @ 0x1800ABC40
 * Callers:
 *     RtlEqualComputerName @ 0x180140560 (RtlEqualComputerName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlCanonicalizeDomainName @ 0x1800AC4D0 (RtlCanonicalizeDomainName.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

bool __fastcall RtlEqualDomainName(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // si
  __int64 v5; // r8
  __int64 v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  LOBYTE(a3) = 1;
  v4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( (int)RtlCanonicalizeDomainName(&v8, a1, a3) >= 0 )
  {
    LOBYTE(v5) = 1;
    if ( (int)RtlCanonicalizeDomainName(&v9, a2, v5) >= 0 )
    {
      v6 = *((_QWORD *)&v9 + 1);
      if ( (unsigned __int16)v8 == (unsigned __int16)v9 )
        v4 = memcmp(*((const void **)&v8 + 1), *((const void **)&v9 + 1), (unsigned __int16)v8) == 0;
      if ( v6 )
        RtlpSysVolFree(v6);
    }
    if ( *((_QWORD *)&v8 + 1) )
      RtlpSysVolFree(*((__int64 *)&v8 + 1));
  }
  return v4;
}
