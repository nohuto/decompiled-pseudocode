/*
 * XREFs of ?ndisOidPreStatistics@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140056420
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140056470 (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreStatistics(struct _NDIS_REQ_TRACKER *a1)
{
  unsigned __int8 result; // al
  __int64 v2; // r8
  int v3; // r9d

  result = 0;
  v2 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL);
  if ( !v3 || v3 == 2 )
  {
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 4448) )
        return ndisSSGetCachedOidValue(a1);
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  return result;
}
