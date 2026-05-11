/*
 * XREFs of TopologyProcessOutputTerminalUnit @ 0x140031DE0
 * Callers:
 *     TopologyBuildFilterTopology @ 0x140041998 (TopologyBuildFilterTopology.c)
 * Callees:
 *     TopologyConvertTermTypeToNodeType @ 0x140030FB8 (TopologyConvertTermTypeToNodeType.c)
 */

__int64 __fastcall TopologyProcessOutputTerminalUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  int v11; // eax
  GUID *v12; // rdx
  unsigned int i; // edx
  __int64 v14; // rax
  __int16 v15; // ax

  v9 = 168LL * (unsigned int)*a5;
  v10 = a4 + 16LL * (unsigned int)*a6;
  *(_DWORD *)(a3 + v9 + 80) = *(_DWORD *)(a2 + 16);
  v11 = *(_DWORD *)(a2 + 64);
  v12 = *(GUID **)(a3 + v9 + 8);
  *(_DWORD *)(a3 + v9 + 84) = v11;
  *(_DWORD *)(a3 + v9 + 76) = TopologyConvertTermTypeToNodeType((_DWORD *)a2, v12, *(GUID **)(a3 + v9 + 16));
  for ( i = 0; i < *(_DWORD *)(a2 + 32); ++*a6 )
  {
    v14 = i++;
    *(_QWORD *)v10 = *(unsigned int *)(*(_QWORD *)(a2 + 56) + 12 * v14);
    *(_DWORD *)(v10 + 8) = (*a5)++;
    *(_DWORD *)(v10 + 12) = 1;
    v10 += 16LL;
  }
  *(_DWORD *)v10 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)(v10 + 12) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(v10 + 8) = -1;
  ++*a6;
  v15 = *(_WORD *)(a2 + 40);
  if ( v15 )
  {
    *(_WORD *)(a3 + v9 + 112) = v15;
    *(_WORD *)(a3 + v9 + 114) = *(_WORD *)(a2 + 40);
    *(_QWORD *)(a3 + v9 + 120) = *(_QWORD *)(a2 + 48);
  }
  return 0LL;
}
