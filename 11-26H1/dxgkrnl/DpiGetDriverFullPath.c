/*
 * XREFs of DpiGetDriverFullPath @ 0x14042E03C
 * Callers:
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x14038C110 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1403FB3D8 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x14041978C (DpiFdoValidateKmdAndPnpVersionMatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDriverFullPath(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 32LL), a2);
  if ( (int)result < 0 )
    *a2 = 0LL;
  return result;
}
