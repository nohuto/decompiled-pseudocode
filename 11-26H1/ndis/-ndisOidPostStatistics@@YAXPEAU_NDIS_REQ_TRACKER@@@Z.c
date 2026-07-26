/*
 * XREFs of ?ndisOidPostStatistics@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140050F30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140050F70 (-ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostStatistics(struct _NDIS_REQ_TRACKER *a1)
{
  int v1; // r8d

  if ( *(_QWORD *)a1 )
  {
    v1 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL);
    if ( !v1 || v1 == 2 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 4448LL) )
        ndisSSUpdateOidCacheValue(a1);
    }
  }
}
