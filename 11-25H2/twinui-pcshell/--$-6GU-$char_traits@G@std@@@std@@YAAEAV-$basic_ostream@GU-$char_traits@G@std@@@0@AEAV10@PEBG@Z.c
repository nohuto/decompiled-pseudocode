/*
 * XREFs of ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x18033B100
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180348DF0 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1804014B8 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     ?GetKeyPathForHwnd@Util@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@Z @ 0x180626F20 (-GetKeyPathForHwnd@Util@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_J@Z.c)
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x180340CC0 (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180341BF8 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::operator<<<unsigned short,std::char_traits<unsigned short>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned __int16 v8; // ax
  __int16 v9; // ax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int16 v13; // ax
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) - v5;
  }
  std::basic_ostream<unsigned short>::sentry::sentry(v15, v3);
  if ( v15[8] )
  {
    if ( (std::ios_base::flags((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v6 > 0 )
      {
        v7 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        v8 = std::basic_ios<unsigned short>::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        try
        {
          v9 = std::basic_streambuf<unsigned short>::sputc(v7, v8);
        }
        catch ( ... )
        {
          LOBYTE(v10) = 1;
          std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v10);
          v3 = a1;
          v4 = 0;
          goto LABEL_21;
        }
        if ( v9 == -1 )
        {
          v4 = 4;
          goto LABEL_19;
        }
        --v6;
      }
    }
    v11 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
    if ( std::basic_streambuf<unsigned short>::sputn(v11, a2, v5) == v5 )
    {
      while ( v6 > 0 )
      {
        v12 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        v13 = std::basic_ios<unsigned short>::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v12, v13) == 0xFFFF )
          goto LABEL_18;
        --v6;
      }
    }
    else
    {
LABEL_18:
      v4 = 4;
    }
LABEL_19:
    std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
LABEL_21:
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0LL);
  std::basic_ostream<unsigned short>::sentry::~sentry(v15);
  return v3;
}
