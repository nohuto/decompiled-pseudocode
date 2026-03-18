/*
 * XREFs of FsRtlpPrepareExtraCreateParametersForCreate @ 0x1409B4620
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x1409B321C (IopOpenLinkOrRenameTarget.c)
 *     IopCreateFile @ 0x1409B3A58 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1409B46E0 (IoQueryInformationByName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall FsRtlpPrepareExtraCreateParametersForCreate(ULONG_PTR BugCheckParameter4)
{
  int v1; // r8d
  char v3; // dl
  int v4; // r8d
  __int64 *v5; // rax
  __int64 *v6; // rcx

  v1 = *(_DWORD *)(BugCheckParameter4 + 4);
  if ( (v1 & 9) != 0 )
  {
    v3 = 0;
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x3F0) == 0x3F0 )
      return 3221226539LL;
    v4 = v1 + 16;
  }
  else
  {
    v3 = 1;
    v4 = v1 | 1;
  }
  v5 = *(__int64 **)(BugCheckParameter4 + 8);
  *(_DWORD *)(BugCheckParameter4 + 4) = v4;
  v6 = (__int64 *)(BugCheckParameter4 + 8);
  if ( v5 == v6 )
    KeBugCheckEx(0x10Cu, 0x15uLL, 0LL, 0LL, BugCheckParameter4);
  do
  {
    if ( v3 )
      *((_DWORD *)v5 + 10) |= 1u;
    v5 = (__int64 *)*v5;
  }
  while ( v5 != v6 );
  return 0LL;
}
