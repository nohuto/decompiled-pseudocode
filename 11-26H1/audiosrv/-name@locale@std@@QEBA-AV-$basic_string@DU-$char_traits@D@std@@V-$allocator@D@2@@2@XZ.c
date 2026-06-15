/*
 * XREFs of ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18014E3FC
 * Callers:
 *     ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18014D5E4 (-_Getcat@-$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$_Construct@$00PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXQEBD_K@Z @ 0x180148CC0 (--$_Construct@$00PEBD@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXQEBD_K@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18014A61C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::locale::name(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v4; // rdx
  size_t v5; // r8
  _OWORD *v6; // rax
  int v7; // ecx
  int v8; // edi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _OWORD v12[2]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = *(_BYTE **)(v2 + 40);
    if ( !v4 )
      v4 = (_BYTE *)(v2 + 48);
    memset(v13, 0, sizeof(v13));
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
    std::string::_Construct<1,char const *>(v13, v4, v5);
    v6 = v13;
    v7 = 0;
    v8 = 1;
  }
  else
  {
    v6 = v12;
    v8 = 0;
    v12[0] = 0LL;
    LOBYTE(v12[0]) = 0;
    v12[1] = _mm_load_si128((const __m128i *)&_xmm);
    v7 = 2;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  v9 = *v6;
  v10 = v6[1];
  *((_QWORD *)v6 + 2) = 0LL;
  *((_QWORD *)v6 + 3) = 15LL;
  *(_BYTE *)v6 = 0;
  *(_OWORD *)a2 = v9;
  *(_OWORD *)(a2 + 16) = v10;
  if ( v7 )
    std::string::~string((__int64)v12);
  if ( v8 )
    std::string::~string((__int64)v13);
  return a2;
}
