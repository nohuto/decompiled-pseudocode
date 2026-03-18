/*
 * XREFs of ?InitializeWinArrangeGlobal@@YAJXZ @ 0x140258F20
 * Callers:
 *     EditionDriverInitialize @ 0x1402A25E0 (EditionDriverInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeWinArrangeGlobal(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _OWORD *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 63432) )
  {
    v4 = Win32AllocPoolZInit(32LL, 1769239637LL);
    *(_QWORD *)(W32GetUserSessionState(v6, v5) + 63432) = v4;
    if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63432) )
    {
      v3 = *(_OWORD **)(W32GetUserSessionState(v3, v2) + 63432);
      *v3 = xmmword_140366B88;
      v3[1] = xmmword_140366B98;
    }
  }
  return *(_QWORD *)(W32GetUserSessionState(v3, v2) + 63432) == 0LL ? 0xC0000017 : 0;
}
