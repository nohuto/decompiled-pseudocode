/*
 * XREFs of TopologyProcessInputTerminalUnit @ 0x140031AE0
 * Callers:
 *     TopologyBuildFilterTopology @ 0x140041998 (TopologyBuildFilterTopology.c)
 * Callees:
 *     TopologyConvertTermTypeToNodeType @ 0x140030FB8 (TopologyConvertTermTypeToNodeType.c)
 */

__int64 __fastcall TopologyProcessInputTerminalUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // eax
  GUID *v13; // rdx
  __int16 v14; // ax

  v10 = 168LL * (unsigned int)*a5;
  v11 = 2LL * (unsigned int)*a6;
  *(_DWORD *)(v10 + a3 + 80) = *(_DWORD *)(a2 + 16);
  v12 = *(_DWORD *)(a2 + 64);
  v13 = *(GUID **)(v10 + a3 + 8);
  *(_DWORD *)(v10 + a3 + 84) = v12;
  *(_DWORD *)(v10 + a3 + 76) = TopologyConvertTermTypeToNodeType((_DWORD *)a2, v13, *(GUID **)(v10 + a3 + 16));
  *(_DWORD *)(a4 + 8 * v11 + 4) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a4 + 8 * v11) = -1;
  *(_DWORD *)(a4 + 8 * v11 + 8) = (*a5)++;
  *(_DWORD *)(a4 + 8 * v11 + 12) = 1;
  ++*a6;
  v14 = *(_WORD *)(a2 + 40);
  if ( v14 )
  {
    *(_WORD *)(v10 + a3 + 112) = v14;
    *(_WORD *)(v10 + a3 + 114) = *(_WORD *)(a2 + 40);
    *(_QWORD *)(v10 + a3 + 120) = *(_QWORD *)(a2 + 48);
  }
  *(_QWORD *)(v10 + a3 + 128) = *(_QWORD *)(a2 + 80);
  return 0LL;
}
