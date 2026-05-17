/*
 * XREFs of RtlpFreeActivationContext @ 0x1800A1EC8
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x180042600 (sxsisol_SearchActCtxForDllName.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800A1D9C (RtlpMoveActCtxToFreeList.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x1800A2828 (RtlpUninitializeAssemblyStorageMap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpFreeActivationContext(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *); // rax
  __int64 result; // rax
  char v4; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(a1 + 32);
  v4 = 0;
  if ( v1 )
    v1(1LL, a1, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 40), 0LL, &v4);
  result = RtlpUninitializeAssemblyStorageMap(a1 + 112);
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
    return RtlFreeHeap_0();
  return result;
}
