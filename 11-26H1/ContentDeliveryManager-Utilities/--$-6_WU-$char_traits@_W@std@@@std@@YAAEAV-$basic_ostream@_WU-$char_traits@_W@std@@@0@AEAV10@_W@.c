/*
 * XREFs of ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@_W@Z @ 0x1800A5698
 * Callers:
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800A718C (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 * Callees:
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x18004BDD0 (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x18004D36C (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18005F29C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     ?sputc@?$basic_streambuf@GU?$char_traits@G@std@@@std@@QEAAGG@Z @ 0x180065C24 (-sputc@-$basic_streambuf@GU-$char_traits@G@std@@@std@@QEAAGG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::operator<<<wchar_t,std::char_traits<wchar_t>>(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rsi
  __int16 v7; // ax
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  __int64 *v12; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+58h] [rbp+10h]

  v1 = a1;
  v2 = 0;
  v15 = 0;
  std::wostream::sentry::sentry((__int64)&v12, a1);
  if ( v13 )
  {
    v3 = *(_QWORD *)v1;
    v4 = *(int *)(*(_QWORD *)v1 + 4LL);
    v5 = *(_QWORD *)(v4 + v1 + 40);
    v6 = 0LL;
    if ( v5 > 1 )
      v6 = v5 - 1;
    try
    {
      if ( (*(_DWORD *)(v4 + v1 + 24) & 0x1C0) == 0x40 )
      {
LABEL_11:
        if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(
                                 *(_QWORD *)(*(int *)(v3 + 4) + v1 + 72),
                                 0x26u) == 0xFFFF )
          v2 = 4;
        v15 = v2;
        while ( !v2 && v6 > 0 )
        {
          v9 = std::basic_streambuf<unsigned short>::sputc(
                 *(_QWORD *)(*(int *)(*(_QWORD *)v1 + 4LL) + v1 + 72),
                 *(_WORD *)(*(int *)(*(_QWORD *)v1 + 4LL) + v1 + 88));
          --v6;
          v10 = 4;
          if ( v9 != -1 )
            v10 = 0;
          v2 = v10;
          v15 = v10;
        }
      }
      else
      {
        while ( !v2 )
        {
          if ( v6 <= 0 )
          {
            v3 = *(_QWORD *)v1;
            goto LABEL_11;
          }
          v7 = std::basic_streambuf<unsigned short>::sputc(
                 *(_QWORD *)(*(int *)(*(_QWORD *)v1 + 4LL) + v1 + 72),
                 *(_WORD *)(*(int *)(*(_QWORD *)v1 + 4LL) + v1 + 88));
          --v6;
          v8 = 4;
          if ( v7 != -1 )
            v8 = 0;
          v2 = v8;
          v15 = v8;
        }
      }
    }
    catch ( ... )
    {
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4, 1);
      v1 = a1;
      v2 = v15;
    }
  }
  *(_QWORD *)(*(int *)(*(_QWORD *)v1 + 4LL) + v1 + 40) = 0LL;
  std::basic_ios<unsigned short>::setstate(v1 + *(int *)(*(_QWORD *)v1 + 4LL), v2, 0);
  std::basic_ostream<unsigned short>::sentry::~sentry(&v12);
  return v1;
}
