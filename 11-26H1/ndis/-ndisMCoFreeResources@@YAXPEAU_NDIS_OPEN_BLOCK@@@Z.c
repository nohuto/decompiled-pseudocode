/*
 * XREFs of ?ndisMCoFreeResources@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400677B0
 * Callers:
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F330 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMCoFreeResources(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_AF_LIST **p_CallMgrAfList; // rbx
  struct _NDIS_OPEN_BLOCK **i; // rax

  p_CallMgrAfList = &a1->MiniportHandle->CallMgrAfList;
  for ( i = (struct _NDIS_OPEN_BLOCK **)*p_CallMgrAfList; *p_CallMgrAfList; i = (struct _NDIS_OPEN_BLOCK **)*p_CallMgrAfList )
  {
    if ( i[1] == a1 )
    {
      *p_CallMgrAfList = (_NDIS_AF_LIST *)*i;
      ExFreePoolWithTag(i, 0);
    }
    else
    {
      p_CallMgrAfList = (_NDIS_AF_LIST **)i;
    }
  }
}
