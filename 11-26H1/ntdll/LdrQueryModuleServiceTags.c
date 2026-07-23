/*
 * XREFs of LdrQueryModuleServiceTags @ 0x18015B9F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 */

NTSTATUS __cdecl LdrQueryModuleServiceTags(PVOID DllHandle, PULONG ServiceTagBuffer, PULONG BufferSize)
{
  char *v3; // r9
  NTSTATUS result; // eax
  char *v7; // rsi
  __int64 v8; // rbx
  ULONG v9; // edi
  __int64 *v10; // r8
  PVOID BaseAddress[5]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress[0] = 0LL;
  result = LdrpFindLoadedDllByHandle(DllHandle, (__int64 *)BaseAddress, &v12, v3);
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v7 = (char *)BaseAddress[0];
    v8 = 0LL;
    v9 = *BufferSize;
    v10 = *(__int64 **)(*((_QWORD *)BaseAddress[0] + 19) + 16LL);
    while ( v10 )
    {
      if ( (unsigned int)v8 < v9 )
        ServiceTagBuffer[v8] = *((_DWORD *)v10 + 2);
      v10 = (__int64 *)*v10;
      v8 = (unsigned int)(v8 + 1);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    *BufferSize = v8;
    LdrpDereferenceModule(v7);
    return v9 < (unsigned int)v8 ? 0xC0000023 : 0;
  }
  return result;
}
