/*
 * XREFs of PnprRecopyMirrorPages @ 0x1405227D4
 * Callers:
 *     PnprSwapFinalize @ 0x1405DC07C (PnprSwapFinalize.c)
 * Callees:
 *     PnprCopyReservedMapping @ 0x14050D5C8 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x140522944 (PnprRecopyMappingReserve.c)
 *     PnprRecopyAddress @ 0x1405229F8 (PnprRecopyAddress.c)
 *     PnprGetStackLimits @ 0x140522A84 (PnprGetStackLimits.c)
 */

__int64 PnprRecopyMirrorPages()
{
  __int64 Number; // rcx
  __int64 i; // rbx
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // r8d
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // eax

  Number = KeGetPcr()->Prcb.Number;
  PnprGetStackLimits(PnprContext + 216 + 8 * Number, PnprContext + 16600 + 8 * Number);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(PnprContext + 176); i = (unsigned int)(i + 1) )
  {
    v2 = PnprRecopyAddress(
           *(_QWORD *)(PnprContext + 8 * i + 216),
           *(_DWORD *)(PnprContext + 8 * i + 16600) - (unsigned int)*(_QWORD *)(PnprContext + 8 * i + 216));
    v3 = v2;
    if ( v2 < 0 )
    {
      v5 = 5603;
      goto LABEL_11;
    }
    if ( (_DWORD)i != *(_DWORD *)(PnprContext + 180) )
    {
      v4 = PnprRecopyMappingReserve(*(_QWORD *)(PnprContext + 144) + 24 * i, (unsigned int)v2);
      v3 = v4;
      if ( v4 < 0 )
      {
        v5 = 5619;
        goto LABEL_11;
      }
      v3 = PnprRecopyMappingReserve(*(_QWORD *)(PnprContext + 136) + 24 * i, (unsigned int)v4);
      if ( v3 < 0 )
      {
        v5 = 5627;
LABEL_11:
        v6 = PnprContext;
        v7 = *(_DWORD *)(PnprContext + 33288);
        if ( !v7 )
          v7 = v5;
        *(_DWORD *)(PnprContext + 33288) = v7;
        v8 = *(_DWORD *)(v6 + 33292);
        if ( !v8 )
          v8 = 1;
        *(_DWORD *)(v6 + 33292) = v8;
        return (unsigned int)v3;
      }
    }
  }
  v10 = PnprRecopyAddress(PnprContext, 33352LL);
  if ( v10 >= 0 )
  {
    v10 = PnprCopyReservedMapping();
    if ( v10 >= 0 )
      return 0LL;
    v11 = 5651;
  }
  else
  {
    v11 = 5639;
  }
  v12 = PnprContext;
  v13 = *(_DWORD *)(PnprContext + 33288);
  if ( !v13 )
    v13 = v11;
  *(_DWORD *)(PnprContext + 33288) = v13;
  v14 = *(_DWORD *)(v12 + 33292);
  if ( !v14 )
    v14 = 1;
  *(_DWORD *)(v12 + 33292) = v14;
  return (unsigned int)v10;
}
