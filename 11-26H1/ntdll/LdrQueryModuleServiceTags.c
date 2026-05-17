/*
 * XREFs of LdrQueryModuleServiceTags @ 0x18015BB30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrQueryModuleServiceTags(unsigned __int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 *v11; // r8
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v12[0] = 0LL;
  result = LdrpFindLoadedDllByHandle(a1, v12, &v13, a4);
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, v7);
    v8 = v12[0];
    v9 = 0LL;
    v10 = *a3;
    v11 = *(__int64 **)(*(_QWORD *)(v12[0] + 152) + 16LL);
    while ( v11 )
    {
      if ( (unsigned int)v9 < v10 )
        *(_DWORD *)(a2 + 4 * v9) = *((_DWORD *)v11 + 2);
      v11 = (__int64 *)*v11;
      v9 = (unsigned int)(v9 + 1);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    *a3 = v9;
    LdrpDereferenceModule(v8);
    return v10 < (unsigned int)v9 ? 0xC0000023 : 0;
  }
  return result;
}
