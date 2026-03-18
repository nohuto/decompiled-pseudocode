/*
 * XREFs of CmpInitializeParseContext @ 0x14097C5D0
 * Callers:
 *     CmpCreatePredefined @ 0x14084B04C (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x14084F320 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14084F540 (NtQueryOpenSubKeysEx.c)
 *     CmpDoBuildVirtualStack @ 0x140859914 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x140863A58 (CmpDoReOpenTransKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A31298 (CmpStartSiloRegistryNamespace.c)
 *     CmpResolveHiveLoadConflict @ 0x140AE1F04 (CmpResolveHiveLoadConflict.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4BD9C (CmKeyBodyRemapToVirtual.c)
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall CmpInitializeParseContext(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 100) = 0LL;
  *(_OWORD *)(a1 + 116) = 0LL;
  *(_QWORD *)(a1 + 132) = 0LL;
  *(_DWORD *)(a1 + 140) = 0;
  memset_0((void *)(a1 + 160), 0, 0xE0uLL);
  *(_DWORD *)(a1 + 96) = -1;
  result = a1 + 144;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  *(_OWORD *)(a1 + 384) = 0LL;
  *(_OWORD *)(a1 + 400) = 0LL;
  *(_OWORD *)(a1 + 416) = 0LL;
  *(_OWORD *)(a1 + 432) = 0LL;
  *(_OWORD *)(a1 + 448) = 0LL;
  return result;
}
