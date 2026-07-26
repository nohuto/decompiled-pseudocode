/*
 * XREFs of ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14009CA40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140024860 (-ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x14002C9F0 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400637B0 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 */

void __fastcall ndisFakeFilterSendHandler(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        char a4)
{
  struct _NDIS_OBJECT_HEADER *p_PktMonComp; // rcx
  struct _NET_BUFFER_LIST *i; // rcx
  unsigned int v9; // esi
  void *LowerFilter; // r8
  struct _NDIS_OBJECT_HEADER *v11; // r9
  void *v12; // rax
  void (*v13)(void *, struct _NET_BUFFER_LIST *, unsigned int); // rcx

  if ( byte_14011F740 )
  {
    p_PktMonComp = (struct _NDIS_OBJECT_HEADER *)&a1->PktMonComp;
    if ( (*(_DWORD *)&p_PktMonComp[14] & 2) != 0 )
      PktMonClientNblDropNdis((__int64)p_PktMonComp, (__int64)a2, a3, 2LL, a1->FakeStatus, -536866815);
  }
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = a1->FakeStatus;
  v9 = a4 & 1;
  if ( ndisIsNblContextVeriferEnabled(a1) )
    ndisRemoveNblContextTerminator(a2, &a1->Header);
  LowerFilter = a1->LowerFilter;
  if ( LowerFilter )
  {
    v11 = (struct _NDIS_OBJECT_HEADER *)*((_QWORD *)LowerFilter + 61);
    v12 = (void *)*((_QWORD *)LowerFilter + 59);
    v13 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)LowerFilter + 58);
  }
  else
  {
    LowerFilter = a1->Miniport;
    v11 = (struct _NDIS_OBJECT_HEADER *)*((_QWORD *)LowerFilter + 324);
    v12 = (void *)*((_QWORD *)LowerFilter + 322);
    v13 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)LowerFilter + 327);
  }
  ndisInvokeNextSendCompleteHandler(a2, v9, (struct _NDIS_FILTER_BLOCK *)LowerFilter, v11, v12, v13);
}
