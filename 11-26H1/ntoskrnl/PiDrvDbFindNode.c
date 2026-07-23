/*
 * XREFs of PiDrvDbFindNode @ 0x14052C028
 * Callers:
 *     PiDrvDbUnmountNode @ 0x14077E040 (PiDrvDbUnmountNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1407B978C (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1407BA804 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbMountNode @ 0x140B686B4 (PiDrvDbMountNode.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
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
