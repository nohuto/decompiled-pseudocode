/*
 * XREFs of ?sputc@?$basic_streambuf@GU?$char_traits@G@std@@@std@@QEAAGG@Z @ 0x180065C24
 * Callers:
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x18005F828 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@_W@Z @ 0x1800A5698 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@_W@.c)
 * Callees:
 *     ?_Pnavail@?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEBA_JXZ @ 0x18005C3F4 (-_Pnavail@-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEBA_JXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::basic_streambuf<unsigned short>::sputc(__int64 a1, unsigned __int16 a2)
{
  _WORD **v4; // rcx
  unsigned __int16 *v5; // r8

  if ( std::basic_streambuf<unsigned short>::_Pnavail(a1) <= 0 )
  {
    return (*(unsigned __int16 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2);
  }
  else
  {
    --**(_DWORD **)(a1 + 88);
    v4 = *(_WORD ***)(a1 + 64);
    v5 = (*v4)++;
    *v5 = a2;
  }
  return a2;
}
