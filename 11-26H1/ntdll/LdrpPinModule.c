/*
 * XREFs of LdrpPinModule @ 0x1800C64AC
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800511B0 (LdrGetDllHandleEx.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrInitShimEngineDynamic @ 0x1800C5320 (LdrInitShimEngineDynamic.c)
 *     LdrAddRefDll @ 0x1800C6430 (LdrAddRefDll.c)
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     LdrpInitShimEngine @ 0x18011831C (LdrpInitShimEngine.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpPinNodeRecurse @ 0x1801198C0 (LdrpPinNodeRecurse.c)
 */

__int64 __fastcall LdrpPinModule(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx

  v3 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, a2);
  v4 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v4 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v4 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v4 + 24) )
      LdrpPinNodeRecurse(*(_QWORD *)(a1 + 152));
    else
      v3 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v3;
}
