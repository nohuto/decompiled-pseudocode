/*
 * XREFs of StorExtPutScatterGatherList @ 0x14007B100
 * Callers:
 *     <none>
 * Callees:
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorExtPutScatterGatherList(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 - 16);
  result = (unsigned int)v1[62];
  if ( (result & 1) == 0 )
  {
    result = RaMiniportGetRaidAdapter(v1);
    if ( result )
      return (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(result + 896) + 8LL) + 96LL))();
  }
  return result;
}
