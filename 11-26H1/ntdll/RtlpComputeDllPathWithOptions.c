/*
 * XREFs of RtlpComputeDllPathWithOptions @ 0x18009B0E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x18009B210 (RtlpComputePath.c)
 */

__int64 __fastcall RtlpComputeDllPathWithOptions(__int16 a1, __int64 a2)
{
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rax
  bool v12; // zf
  _DWORD v13[14]; // [rsp+20h] [rbp-38h] BYREF

  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v5 = v13[0];
  if ( (a1 & 0x100) != 0 )
    v5 = 5;
  v13[0] = v5;
  LODWORD(v6) = (a1 & 0x100) != 0;
  if ( (a1 & 0x200) != 0 )
  {
    LODWORD(v6) = v6 + 1;
    v13[(a1 & 0x100) != 0] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v11 = (unsigned int)v6;
    v6 = (unsigned int)(v6 + 1);
    v12 = LdrpDllDirectory.Length == 0;
    v13[v11] = 6;
    if ( !v12 )
    {
      v13[v6] = 0;
      LODWORD(v6) = v6 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v7 = (unsigned int)v6;
    LODWORD(v6) = v6 + 1;
    v13[v7] = 7;
  }
  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) == 0 || (LOBYTE(v4) = 1, (a1 & 0x800) == 0) )
    LOBYTE(v4) = 0;
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v8 = (unsigned int)v6;
    LODWORD(v6) = v6 + 1;
    v13[v8] = 8;
  }
  v9 = RtlpComputePath(v13, (unsigned int)v6, a2, v4);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v9 )
    *(_BYTE *)(v9 + 116) = 1;
  return v9;
}
