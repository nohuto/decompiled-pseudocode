/*
 * XREFs of ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x140391310
 * Callers:
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1403912AC (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall OemSpecifiedViewDist(_QWORD *a1)
{
  __int64 v1; // rcx
  _DWORD *i; // rax
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1[27];
  v4 = 0;
  if ( (int)DpiReadPnpRegistryValue(v1, L"ViewDistanceOverride", &v4, 4LL, 2) >= 0 )
  {
    for ( i = &ViewDistanceArray; i != (_DWORD *)&EventExitDdiLinkDevice; ++i )
    {
      if ( v4 == *i )
        return v4;
    }
  }
  return 0LL;
}
