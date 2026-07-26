/*
 * XREFs of ?ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@PEAE@Z @ 0x1400C15C4
 * Callers:
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400BCC78 (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140013E50 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x14004A920 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 */

struct _NDIS_FILTER_BLOCK *__fastcall ndisRefNextFilterForOidCancellation(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        unsigned __int8 *a3)
{
  __int64 v3; // rdi
  unsigned __int64 RequestHandle; // rbx
  unsigned __int64 *p_Lock; // rcx
  unsigned __int64 NextRequestHandle; // rsi
  KIRQL NewIrql; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  NewIrql = 0;
  if ( a2 )
  {
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a2, &NewIrql);
    NextRequestHandle = (unsigned __int64)a2->NextRequestHandle;
    if ( *(_BYTE *)NextRequestHandle == 5 )
    {
      *a3 = 0;
      v12 = 0;
      v3 = NextRequestHandle & -(__int64)ndisReferenceRefEx(
                                           (PKSPIN_LOCK)(NextRequestHandle + 312),
                                           1u,
                                           (enum _NDIS_REFERENCE_STATUS *)&v12);
    }
    else
    {
      *a3 = 1;
    }
    a2->LockThread = 0LL;
    p_Lock = &a2->Lock;
  }
  else
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    RequestHandle = (unsigned __int64)a1->Next.RequestHandle;
    if ( *(_BYTE *)RequestHandle == 5 )
    {
      *a3 = 0;
      v12 = 0;
      v3 = RequestHandle & -(__int64)ndisReferenceRefEx(
                                       (PKSPIN_LOCK)(RequestHandle + 312),
                                       1u,
                                       (enum _NDIS_REFERENCE_STATUS *)&v12);
    }
    else
    {
      *a3 = 1;
    }
    a1->MiniportThread = 0LL;
    p_Lock = &a1->Lock;
  }
  KeReleaseSpinLock(p_Lock, NewIrql);
  return (struct _NDIS_FILTER_BLOCK *)v3;
}
