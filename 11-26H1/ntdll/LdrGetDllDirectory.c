/*
 * XREFs of LdrGetDllDirectory @ 0x180075EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlCopyUnicodeString @ 0x180075F50 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall LdrGetDllDirectory(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  unsigned int v4; // eax
  unsigned int v5; // edi

  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock, a2);
  v3 = *(unsigned __int16 *)(a1 + 2);
  v4 = (unsigned __int16)LdrpDllDirectory + 2;
  if ( v3 >= v4 )
  {
    RtlCopyUnicodeString(a1, &LdrpDllDirectory);
    v5 = 0;
  }
  else
  {
    *(_WORD *)a1 = v4;
    v5 = -1073741789;
    if ( (_WORD)v3 )
      **(_WORD **)(a1 + 8) = 0;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  return v5;
}
