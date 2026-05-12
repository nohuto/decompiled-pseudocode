/*
 * XREFs of RaidRefreshTcg @ 0x140095C48
 * Callers:
 *     RaidActivateTcgLocking @ 0x14009277C (RaidActivateTcgLocking.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140076CE0 (RtlStringCbCopyA.c)
 *     TcglibDiscoverDevice @ 0x140130E30 (TcglibDiscoverDevice.c)
 */

__int64 __fastcall RaidRefreshTcg(__int64 a1, char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // r10d

  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v3 = *(_QWORD *)(a1 + 3592);
    if ( !v3 )
      return (unsigned int)-1073741637;
    v4 = *(_QWORD *)(a1 + 3600);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v3 = *(_QWORD *)(a1 + 6120);
    if ( !v3 )
      return (unsigned int)-1073741637;
    v4 = *(_QWORD *)(a1 + 6128);
  }
  if ( !v4 )
    return (unsigned int)-1073741637;
  v5 = TcglibDiscoverDevice(a1, v3, v4);
  if ( v5 < 0 )
    RtlStringCbCopyA(a2, 0x20uLL, "TcglibDiscoverDevice");
  return (unsigned int)v5;
}
