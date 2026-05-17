/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800E0500
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpResetAppPackagesPath @ 0x1800E05FC (LdrpResetAppPackagesPath.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrUpdatePackageSearchPath(_WORD *Src)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  size_t v4; // rdi
  _WORD *Atom; // rax
  _WORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rsi

  v1 = 0;
  if ( !Src )
    return (unsigned int)LdrpResetAppPackagesPath();
  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v4 = 2 * v3;
  if ( v4 )
  {
    if ( v4 >= 0xFFFE )
    {
      return (unsigned int)-1073741562;
    }
    else
    {
      Atom = (_WORD *)RtlpAllocateAtom(v4 + 2);
      v7 = Atom;
      if ( Atom )
      {
        memmove(Atom, Src, v4);
        v7[v4 >> 1] = 0;
        RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock, v8);
        v9 = *((_QWORD *)&LdrpAppPackagesPath + 1);
        ++LdrpAppPackagesPathVersion;
        LOWORD(LdrpAppPackagesPath) = v4;
        WORD1(LdrpAppPackagesPath) = v4 + 2;
        *((_QWORD *)&LdrpAppPackagesPath + 1) = v7;
        RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
        if ( v9 != *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
          RtlpSysVolFree(v9);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)LdrpResetAppPackagesPath();
  }
  return v1;
}
