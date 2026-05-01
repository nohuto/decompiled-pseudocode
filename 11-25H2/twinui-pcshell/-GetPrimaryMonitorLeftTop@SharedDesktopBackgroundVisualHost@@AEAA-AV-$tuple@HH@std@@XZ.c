/*
 * XREFs of ?GetPrimaryMonitorLeftTop@SharedDesktopBackgroundVisualHost@@AEAA?AV?$tuple@HH@std@@XZ @ 0x1805E6154
 * Callers:
 *     ?Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z @ 0x1805E7090 (-Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1800A982C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

_DWORD *__fastcall SharedDesktopBackgroundVisualHost::GetPrimaryMonitorLeftTop(__int64 a1, _DWORD *a2)
{
  int v2; // ebx
  int v4; // edi
  _QWORD *i; // rdx
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v9 = 0LL;
  v4 = 0;
  v8 = 0LL;
  EnumDisplayMonitors(
    0LL,
    0LL,
    (MONITORENUMPROC)lambda_9c01280dcdfa2a6c98312ec0389307e5_::_lambda_invoker_cdecl_,
    (LPARAM)&v8);
  for ( i = (_QWORD *)v8; i != *((_QWORD **)&v8 + 1); i += 2 )
  {
    v6 = HIDWORD(*i);
    if ( v2 < (int)v6 )
      LODWORD(v6) = v2;
    v2 = v6;
    if ( v4 >= (int)*i )
      v4 = *i;
  }
  *a2 = -v2;
  a2[1] = -v4;
  std::vector<Geometry::CRect>::_Tidy((__int64)&v8);
  return a2;
}
