/*
 * XREFs of LdrpInitializeDllPath @ 0x18009B960
 * Callers:
 *     LdrpLoadWow64 @ 0x180086710 (LdrpLoadWow64.c)
 *     LdrpGetDelayloadExportDll @ 0x1800C57B0 (LdrpGetDelayloadExportDll.c)
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106D68 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpInitShimEngine @ 0x18011831C (LdrpInitShimEngine.c)
 *     LdrpMapDllSearchPath @ 0x18011C9D0 (LdrpMapDllSearchPath.c)
 *     LdrpInitializeImportRedirection @ 0x18011D004 (LdrpInitializeImportRedirection.c)
 *     LdrLoadEnclaveModule @ 0x1801394E0 (LdrLoadEnclaveModule.c)
 *     LdrpLoadPatchImage @ 0x18015BE70 (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 */

__int64 __fastcall LdrpInitializeDllPath(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_OWORD *)(a3 + 48) = 0LL;
  *(_OWORD *)(a3 + 64) = 0LL;
  *(_OWORD *)(a3 + 80) = 0LL;
  *(_OWORD *)(a3 + 96) = 0LL;
  *(_OWORD *)(a3 + 112) = 0LL;
  if ( (a2 & 1) != 0 || !a2 )
  {
    *(_QWORD *)(a3 + 32) = a1;
    *(_DWORD *)(a3 + 24) = a2 & 0xFFFFFFFE;
  }
  else
  {
    *(_QWORD *)a3 = a2;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrutil.c",
      1552,
      (__int64)"LdrpInitializeDllPath",
      2,
      "DLL search path passed in externally: %ws\n",
      a2);
    return LdrpLogDllStateEx2(v5, a1, *(_QWORD *)a3, 5312LL);
  }
  return result;
}
