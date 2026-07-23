/*
 * XREFs of LdrpPinModule @ 0x1800C3C6C
 * Callers:
 *     LdrGetDllHandleEx @ 0x18003B730 (LdrGetDllHandleEx.c)
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrInitShimEngineDynamic @ 0x1800C2AE0 (LdrInitShimEngineDynamic.c)
 *     LdrAddRefDll @ 0x1800C3BF0 (LdrAddRefDll.c)
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     LdrpInitShimEngine @ 0x1801180CC (LdrpInitShimEngine.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     LdrpPinNodeRecurse @ 0x180119670 (LdrpPinNodeRecurse.c)
 */

__int64 __fastcall LdrpPinModule(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v3 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v3 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v3 + 24) )
      LdrpPinNodeRecurse(*(_QWORD *)(a1 + 152));
    else
      v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
