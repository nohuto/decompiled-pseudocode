/*
 * XREFs of OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140413470
 * Callers:
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ObpCreateSymbolicLinkName @ 0x1409DE86C (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  __int64 v3; // r8
  unsigned __int64 result; // rax

  if ( a1 )
    v1 = *(_QWORD *)(a1 + 1536);
  else
    v1 = qword_140FC9E30;
  v2 = PsObjectDirectorySiloContextSlot;
  if ( (unsigned int)PsObjectDirectorySiloContextSlot >= 0x20 )
  {
    v2 = PsObjectDirectorySiloContextSlot - 32;
    if ( (unsigned int)(PsObjectDirectorySiloContextSlot - 32) >= 0x100 )
      return *(_QWORD *)&ObpStackTraceLock.PriorityFloorCounts[24];
    v1 = *(_QWORD *)(v1 + 512);
    if ( !v1 )
      return *(_QWORD *)&ObpStackTraceLock.PriorityFloorCounts[24];
  }
  v3 = *(_QWORD *)(v1 + 16LL * v2 + 8);
  result = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v3 & 0xFFFFFFFFFFFFFFFEuLL) == 0 || (v3 & 1) == 0 )
    return *(_QWORD *)&ObpStackTraceLock.PriorityFloorCounts[24];
  return result;
}
