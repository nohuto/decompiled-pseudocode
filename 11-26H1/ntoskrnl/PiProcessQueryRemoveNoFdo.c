/*
 * XREFs of PiProcessQueryRemoveNoFdo @ 0x1407BB834
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipIsProblemReadonly @ 0x1407A7F2C (PipIsProblemReadonly.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PiGetTargetDeviceNode @ 0x1409B45EC (PiGetTargetDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 */

__int64 __fastcall PiProcessQueryRemoveNoFdo(__int64 a1)
{
  _DWORD *TargetDeviceNode; // rdi
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ecx

  TargetDeviceNode = (_DWORD *)PiGetTargetDeviceNode();
  v3 = 0;
  v4 = TargetDeviceNode[75];
  if ( v4 == 772 || v4 == 771 || v4 == 788 )
  {
    if ( (TargetDeviceNode[99] & 0x6000) != 0 && !PipIsProblemReadonly((__int64)TargetDeviceNode, TargetDeviceNode[101]) )
      PipClearDevNodeProblem(v5);
    v6 = *(_DWORD *)(a1 + 152) & 2;
    if ( (TargetDeviceNode[99] & 0x6000) != 0 )
    {
      if ( !v6 )
        return (unsigned int)-1073741811;
    }
    else if ( v6 )
    {
      PipSetDevNodeProblem(TargetDeviceNode, *(unsigned int *)(a1 + 16), 0LL);
    }
    else
    {
      PnpRestartDeviceNode(TargetDeviceNode);
    }
  }
  return v3;
}
