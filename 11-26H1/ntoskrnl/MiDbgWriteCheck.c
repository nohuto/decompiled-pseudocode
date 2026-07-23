/*
 * XREFs of MiDbgWriteCheck @ 0x140703A18
 * Callers:
 *     MiDbgCopyMemoryInternal @ 0x1407025C0 (MiDbgCopyMemoryInternal.c)
 * Callees:
 *     MiDbgMarkPfnModified @ 0x1407031F0 (MiDbgMarkPfnModified.c)
 *     MiDbgPrivilegedWriteCheck @ 0x1407036F0 (MiDbgPrivilegedWriteCheck.c)
 */

__int64 __fastcall MiDbgWriteCheck(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rcx

  v2 = 1;
  if ( (MiFlags & 0x10000) != 0 || (MiFlags & 0x20000) != 0 )
  {
    v2 = MiDbgPrivilegedWriteCheck((int *)a1);
    if ( !v2 )
      return 0LL;
  }
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
    return v2;
  if ( !*(_BYTE *)(a1 + 52) )
    return v2;
  if ( *(_DWORD *)(a1 + 48) )
    return v2;
  v3 = *(_QWORD *)(a1 + 40);
  if ( (v3 & 1) == 0 || (v3 & 0x800) != 0 && (v3 & 0x42) != 0 )
    return v2;
  return (unsigned int)MiDbgMarkPfnModified(v3, *(_DWORD *)(a1 + 88)) != 0 ? v2 : 0;
}
