/*
 * XREFs of sub_1400167D0 @ 0x1400167D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400167D0(__int64 a1, __int64 a2)
{
  int v2; // r10d
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // edx
  int v9; // eax
  int v11; // eax
  int v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+34h] [rbp-24h]
  int v14; // [rsp+3Ch] [rbp-1Ch]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v2 = a1;
  if ( !a1 || (v3 = *(_QWORD *)(a1 + 64), *(_DWORD *)v3 != 1094997074) )
    v3 = 0LL;
  if ( *(_DWORD *)v3 == 1314275652 )
  {
    v4 = v3 + 184;
  }
  else
  {
    v4 = v3 + 392;
    if ( *(_DWORD *)v3 != 1094997074 )
      v4 = 8LL;
  }
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v5 + 3) |= 1u;
  if ( *(_DWORD *)v4 == 5 )
  {
    v11 = *(_DWORD *)(v6 + 4);
    if ( (v11 & 0x10) != 0 )
      *(_DWORD *)(v6 + 4) = v11 & 0xFFFFFDFF;
  }
  if ( (*(_BYTE *)(v3 + 104) & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(v3 + 608) + 184LL) & 4) != 0 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    v13 = 0LL;
    v15 = 0LL;
    v12 = 1572865;
    v8 = v7 & 0x3FF | (v7 >> 7) & 0x400;
    v9 = *(_DWORD *)(v6 + 12);
    LODWORD(v13) = v8;
    v14 = v9;
    sub_140016AA8(v2, 9, 0, (unsigned int)&v12, 24);
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 336));
  return 0LL;
}
