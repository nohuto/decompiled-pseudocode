/*
 * XREFs of PiDrvDbFindNode @ 0x140528E14
 * Callers:
 *     PiDrvDbUnmountNode @ 0x14077B400 (PiDrvDbUnmountNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1407B672C (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1407B77A4 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbMountNode @ 0x140B65614 (PiDrvDbMountNode.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PiDrvDbFindNode(PCUNICODE_STRING String2, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v6; // rsi

  v2 = PiDrvDbNodeList;
  v3 = 0;
  if ( (__int64 *)PiDrvDbNodeList == &PiDrvDbNodeList )
    return (unsigned int)-1073741275;
  do
  {
    v6 = v2;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v2 + 16), String2, 1u) )
      break;
    v2 = *(_QWORD *)v2;
    v6 = 0LL;
  }
  while ( (__int64 *)v2 != &PiDrvDbNodeList );
  if ( !v6 )
    return (unsigned int)-1073741275;
  else
    *a2 = v6;
  return v3;
}
