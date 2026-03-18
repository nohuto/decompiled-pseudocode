/*
 * XREFs of DpiGetFdoFromDevice @ 0x14004083C
 * Callers:
 *     DpiGetSysMmAdapterFromDevice @ 0x1400407B4 (DpiGetSysMmAdapterFromDevice.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1403E76C0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x14042A5B4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetFdoFromDevice(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v4; // rcx

  v1 = 0LL;
  if ( !a1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 16) != 1953656900 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 20) == 3 )
  {
    v4 = *(_QWORD *)(v2 + 2832);
    if ( v4 )
    {
      v2 = *(_QWORD *)(v4 + 64);
      if ( !v2 )
        return 0LL;
    }
  }
  if ( *(_DWORD *)(v2 + 16) != 1953656900 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 20) == 2 )
    return v2;
  return v1;
}
