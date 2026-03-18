/*
 * XREFs of DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x14034038C
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x14033E1B0 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 *     DxgkEnumerateModesForPathsModality @ 0x1403D6DA0 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_WORD *)(a2 + 40) = *(_WORD *)a1;
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a2 + 44) = (int)(*(_DWORD *)(a1 + 48) << 29) >> 29;
  result = (unsigned __int16)*(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = (result ^ ((*(_DWORD *)(a1 + 48) & 0xFFFFFFF8) << 13)) & 0x3FFFFF;
  return result;
}
