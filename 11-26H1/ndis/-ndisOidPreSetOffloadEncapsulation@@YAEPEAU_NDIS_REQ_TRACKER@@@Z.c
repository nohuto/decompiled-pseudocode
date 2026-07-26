/*
 * XREFs of ?ndisOidPreSetOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14008E5D0
 * Callers:
 *     ?ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140035890 (-ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140071930 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400751C0 (-ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreSetOffloadEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  unsigned __int8 result; // al

  v1 = *((_QWORD *)a1 + 4);
  if ( (*(_DWORD *)(v1 + 88) & 0x20) == 0
    || (result = ndisOidPreOpenSetEncapsulation(
                   *((struct _NDIS_OPEN_BLOCK **)a1 + 3),
                   *((struct _NDIS_OID_REQUEST **)a1 + 4),
                   (int *)a1 + 10),
        result != 1) )
  {
    if ( *(_QWORD *)a1 )
      return ndisOidPreMiniportSetEncapsulation(
               *(struct _NDIS_MINIPORT_BLOCK **)a1,
               (struct _NDIS_OID_REQUEST *)v1,
               (int *)a1 + 10);
    else
      return 0;
  }
  return result;
}
