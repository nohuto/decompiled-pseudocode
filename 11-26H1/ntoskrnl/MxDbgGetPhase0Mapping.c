/*
 * XREFs of MxDbgGetPhase0Mapping @ 0x140D023D8
 * Callers:
 *     MiDbgMapPhysicalAddress @ 0x140703038 (MiDbgMapPhysicalAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MxDbgGetPhase0Mapping(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned int i; // r9d
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int j; // r8d
  int v8; // [rsp+0h] [rbp-10h] BYREF

  v2 = ((((unsigned __int64)&v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0xFFFFFFFFFFFFF000uLL;
  for ( i = 0; i < 0x200; ++i )
  {
    v4 = *(_QWORD *)v2;
    if ( (*(_QWORD *)v2 & 1) != 0 && (v4 & 0x42) != 0 && (v4 & 0x80u) == 0LL && ((v4 >> 12) & 0xFFFFFFFFFFLL) != a1 )
    {
      v5 = (__int64)(v2 << 25) >> 16;
      for ( j = 0; j < 0x200; ++j )
      {
        if ( !*(_QWORD *)v5 )
          return v5;
        v5 += 8LL;
      }
    }
    v2 += 8LL;
  }
  return 0LL;
}
