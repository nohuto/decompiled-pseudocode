/*
 * XREFs of IommupHvConfigureDeviceDomain @ 0x1405A062C
 * Callers:
 *     IommuDomainConfigure @ 0x140789A70 (IommuDomainConfigure.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvConfigureDeviceDomain(int a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  if ( !a2 )
    return 3221225659LL;
  v6 = 0LL;
  v9 = 0LL;
  v5 = *(_QWORD *)(a4 + 8);
  v7[0] = 0LL;
  v7[1] = v5;
  LOBYTE(v5) = *(_BYTE *)(a4 + 16);
  v8 = 0LL;
  LOBYTE(v8) = v5;
  LODWORD(v7[0]) = *(_DWORD *)a4;
  LODWORD(v6) = a1;
  BYTE4(v6) = a2;
  return guard_dispatch_icall_no_overrides(&v6, v7);
}
