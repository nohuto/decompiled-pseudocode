/*
 * XREFs of PiRestartDevice @ 0x140B3D230
 * Callers:
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 */

__int64 __fastcall PiRestartDevice(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // edx
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  v4 = *(_DWORD *)(v3 + 300);
  if ( v4 == 789 || v4 == 790 )
    return 3221225558LL;
  if ( (*(_DWORD *)(v3 + 396) & 0x6000) != 0 )
    return 3221225473LL;
  switch ( v4 )
  {
    case 769:
    case 770:
    case 773:
    case 774:
    case 776:
    case 777:
    case 783:
      goto LABEL_6;
    case 771:
    case 772:
    case 788:
      PnpRestartDeviceNode(v3);
LABEL_6:
      if ( *(_DWORD *)(a1 + 24) == 16 )
      {
        BYTE4(v6) = PnPBootDriversInitialized;
        LODWORD(v6) = 3;
        PsReferenceSiloContext(*(void **)(v3 + 32));
        PipProcessDevNodeTree(v3, a1, (__int64)&v6, 0, 0, 0, 0);
      }
      break;
    case 775:
    case 778:
    case 779:
    case 780:
    case 781:
    case 782:
      return 0LL;
    default:
      return 3221225473LL;
  }
  return 0LL;
}
