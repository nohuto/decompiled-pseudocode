/*
 * XREFs of DpiPdoHandleStopDevice @ 0x1402568C0
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1403D1510 (DpiPdoDispatchPnp.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiPdoHandleStopDevice(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  bool v3; // zf
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v1 + 484) )
    DpiCheckForOutstandingD3Requests(v1);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 1u);
  *(_DWORD *)(v1 + 4LL * (*(_DWORD *)(v1 + 276) & 7) + 244) = *(_DWORD *)(v1 + 240);
  v2 = *(_DWORD *)(v1 + 236);
  ++*(_DWORD *)(v1 + 276);
  v3 = *(_BYTE *)(v1 + 484) == 0;
  *(_DWORD *)(v1 + 240) = v2;
  *(_DWORD *)(v1 + 236) = 4;
  if ( !v3 )
    DpiEnableD3Requests(*(_QWORD *)(v1 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
  KeLeaveCriticalRegion();
  WdLogSingleEntry1(4LL);
  result = 0LL;
  WdLogGlobalForLineNumber = 6025;
  return result;
}
