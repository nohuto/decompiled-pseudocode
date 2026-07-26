/*
 * XREFs of ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x140044040
 * Callers:
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400BFDF8 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisBuildScatterGatherList @ 0x1400CAE90 (NdisBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwAddEvent(struct NDIS_PCW_CONTEXT *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx

  if ( *((_DWORD *)a1 + 4) == -1 )
    *((_DWORD *)a1 + 4) = KeGetPcr()->Prcb.Number;
  v3 = ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * *((_DWORD *)a1 + 4) + 8 * a2;
  *(_QWORD *)(v3 + *(_QWORD *)a1) += a3;
}
