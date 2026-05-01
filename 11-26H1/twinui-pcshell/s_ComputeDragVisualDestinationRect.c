/*
 * XREFs of s_ComputeDragVisualDestinationRect @ 0x1804E628C
 * Callers:
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804E5C7C (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall s_ComputeDragVisualDestinationRect(_OWORD *a1, _DWORD *a2, __int64 a3)
{
  int v4; // r10d
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax

  *(_OWORD *)a3 = *a1;
  v4 = *(_DWORD *)(a3 + 4);
  v5 = *(_DWORD *)a3 + (*(_DWORD *)(a3 + 8) - *(_DWORD *)a3) / 2 - (a2[2] - *a2) / 2;
  *(_DWORD *)a3 = v5;
  *(_DWORD *)(a3 + 8) = v5 + a2[2] - *a2;
  v6 = (*(_DWORD *)(a3 + 12) - v4) / 2 - (a2[3] - a2[1]) / 2;
  *(_DWORD *)(a3 + 4) = v6 + v4;
  result = (unsigned int)(a2[3] + v6 + v4 - a2[1]);
  *(_DWORD *)(a3 + 12) = result;
  return result;
}
