/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x14044E930
 * Callers:
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402CBA80 (RtlpxLookupFunctionTable.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     RtlFailFast2 @ 0x1405376C0 (RtlFailFast2.c)
 *     bsearch_s @ 0x140538ED0 (bsearch_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407809CC (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGuardCheckExceptionHandler(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 Config; // rax
  rsize_t v4; // r8
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  int v18; // r8d
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int Key; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-90h]
  _BYTE v25[16]; // [rsp+50h] [rbp-88h] BYREF
  int v26; // [rsp+60h] [rbp-78h]
  __int64 v27; // [rsp+68h] [rbp-70h]

  memset_0(v25, 0, 0x68uLL);
  if ( *(_QWORD *)&HvlpVsmVtlCallVa
    && !VslpNestedPageProtectionFlags
    && (int)VslpEnterIumSecureMode(2u, 0x10Bu, 0, (__int64)v25) >= 0 )
  {
    VslpSecurePtRoot = v27;
    v6 = (2 * (v26 & 1) + 4) | 0x20;
    if ( (v26 & 2) == 0 )
      v6 = 2 * (v26 & 1) + 4;
    v7 = v6 | 0x10;
    if ( (v26 & 4) != 0 )
      v7 = v6;
    v8 = v7 | 0x40;
    if ( (v26 & 8) == 0 )
      v8 = v7;
    v9 = v8 | 0x80;
    if ( (v26 & 0x10) == 0 )
      v9 = v8;
    v10 = v9 | 0x100;
    if ( (v26 & 0x20) == 0 )
      v10 = v9;
    v11 = v10 | 0x200;
    if ( (v26 & 0x40) == 0 )
      v11 = v10;
    v12 = v11 | 0x400;
    if ( (v26 & 0x80u) == 0 )
      v12 = v11;
    v13 = v12 | 0x800;
    if ( (v26 & 0x100) == 0 )
      v13 = v12;
    v14 = v13 | 0x1000;
    if ( (v26 & 0x200) == 0 )
      v14 = v13;
    v15 = v14 | 0x2000;
    if ( (v26 & 0x400) == 0 )
      v15 = v14;
    v16 = v15 | 0x20000;
    if ( (v26 & 0x4000) == 0 )
      v16 = v15;
    v17 = v16 | 0x4000;
    if ( (v26 & 0x800) == 0 )
      v17 = v16;
    v18 = v17 | 0x8000;
    if ( (v26 & 0x1000) == 0 )
      v18 = v17;
    v19 = v18 | 0x10000;
    if ( (v26 & 0x2000) == 0 )
      v19 = v18;
    v20 = v19 | 0x40000;
    if ( (v26 & 0x8000) == 0 )
      v20 = v19;
    v21 = v20 | 0x80000;
    if ( (v26 & 0x10000) == 0 )
      v21 = v20;
    VslpNestedPageProtectionFlags = v21;
  }
  if ( (VslpNestedPageProtectionFlags & 0x80u) != 0 )
  {
    v24 = 0LL;
    v23 = 0LL;
    if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
      || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
    {
      RtlpxLookupFunctionTable(a1, (__int64)&v23);
    }
    else
    {
      v23 = xmmword_141200030;
    }
    v2 = *((_QWORD *)&v23 + 1);
    if ( *((_QWORD *)&v23 + 1) )
    {
      Config = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v23 + 1));
      if ( Config )
      {
        if ( *(_DWORD *)Config >= 0x118u
          && (*(_DWORD *)(Config + 144) & 0x400000) != 0
          && *(_QWORD *)(Config + 264) > v2 )
        {
          Key = a1 - v2;
          v4 = *(_QWORD *)(Config + 272);
          if ( !v4
            || !bsearch_s(
                  &Key,
                  *(const void **)(Config + 264),
                  v4,
                  (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
                  RtlpTargetCompare,
                  0LL) )
          {
            RtlFailFast2(38LL, a1);
          }
        }
      }
    }
  }
  return 0LL;
}
