/*
 * XREFs of ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140048D80
 * Callers:
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140047EA0 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x140048C90 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140060E30 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcStartRefTimeStats(struct _NDIS_MINIPORT_AOAC *a1)
{
  __int64 v1; // rax

  v1 = MEMORY[0xFFFFF78000000008];
  if ( *((int *)a1 + 132) > 0 )
  {
    *((_QWORD *)a1 + 98) = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( *((int *)a1 + 117) > 0 )
      *((_QWORD *)a1 + 68) = MEMORY[0xFFFFF78000000008];
    if ( *((int *)a1 + 118) > 0 )
      *((_QWORD *)a1 + 70) = v1;
    if ( *((int *)a1 + 119) > 0 )
      *((_QWORD *)a1 + 72) = v1;
    if ( *((int *)a1 + 120) > 0 )
      *((_QWORD *)a1 + 74) = v1;
    if ( *((int *)a1 + 121) > 0 )
      *((_QWORD *)a1 + 76) = v1;
    if ( *((int *)a1 + 122) > 0 )
      *((_QWORD *)a1 + 78) = v1;
    if ( *((int *)a1 + 123) > 0 )
      *((_QWORD *)a1 + 80) = v1;
    if ( *((int *)a1 + 124) > 0 )
      *((_QWORD *)a1 + 82) = v1;
    if ( *((int *)a1 + 125) > 0 )
      *((_QWORD *)a1 + 84) = v1;
    if ( *((int *)a1 + 126) > 0 )
      *((_QWORD *)a1 + 86) = v1;
    if ( *((int *)a1 + 127) > 0 )
      *((_QWORD *)a1 + 88) = v1;
    if ( *((int *)a1 + 128) > 0 )
      *((_QWORD *)a1 + 90) = v1;
    if ( *((int *)a1 + 129) > 0 )
      *((_QWORD *)a1 + 92) = v1;
    if ( *((int *)a1 + 130) > 0 )
      *((_QWORD *)a1 + 94) = v1;
    if ( *((int *)a1 + 131) > 0 )
      *((_QWORD *)a1 + 96) = v1;
    if ( *((int *)a1 + 133) > 0 )
      *((_QWORD *)a1 + 100) = v1;
  }
}
