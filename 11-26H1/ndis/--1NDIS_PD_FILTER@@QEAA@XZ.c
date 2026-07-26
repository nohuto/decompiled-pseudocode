/*
 * XREFs of ??1NDIS_PD_FILTER@@QEAA@XZ @ 0x14013C404
 * Callers:
 *     ??_GNDIS_PD_FILTER@@QEAAPEAXI@Z @ 0x14013C598 (--_GNDIS_PD_FILTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_PD_FILTER::~NDIS_PD_FILTER(NDIS_PD_FILTER *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 13);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
