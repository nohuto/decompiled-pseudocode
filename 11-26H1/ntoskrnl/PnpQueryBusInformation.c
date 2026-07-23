/*
 * XREFs of PnpQueryBusInformation @ 0x1409DBB28
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     PpIrpQueryBusInformation @ 0x1409DBBC0 (PpIrpQueryBusInformation.c)
 *     PnpBusTypeGuidGetIndex @ 0x1409DBC34 (PnpBusTypeGuidGetIndex.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueryBusInformation(__int64 a1)
{
  int v2; // esi
  _DWORD *v4; // rbx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = PpIrpQueryBusInformation(*(_QWORD *)(a1 + 32), &P);
  if ( v2 >= 0 )
  {
    v4 = P;
    *(_WORD *)(a1 + 464) = PnpBusTypeGuidGetIndex(P);
    *(_DWORD *)(a1 + 456) = v4[4];
    *(_DWORD *)(a1 + 460) = v4[5];
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    *(_WORD *)(a1 + 464) = -1;
    *(_DWORD *)(a1 + 456) = -1;
    *(_DWORD *)(a1 + 460) = -16;
  }
  return (unsigned int)v2;
}
