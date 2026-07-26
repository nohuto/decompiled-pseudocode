/*
 * XREFs of ?ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1400648D0
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14017A580 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140013E50 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 */

_BOOL8 __fastcall ndisReferenceFilterByHandle(struct _NDIS_FILTER_BLOCK *a1, enum _NDIS_LWF_REFTAG a2)
{
  bool v3; // di
  KIRQL v4; // si
  struct _NDIS_FILTER_BLOCK *i; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v7) = a2;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  for ( i = ndisGlobalFilterList; i; i = i->NextGlobalFilter )
  {
    if ( i == a1 )
    {
      v7 = 0;
      v3 = ndisReferenceRefEx(&a1->Ref.SpinLock, 0, (enum _NDIS_REFERENCE_STATUS *)&v7);
      break;
    }
  }
  KeReleaseSpinLock(&ndisGlobalFilterListLock, v4);
  return v3;
}
