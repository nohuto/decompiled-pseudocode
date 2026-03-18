/*
 * XREFs of ?HashPath@CPathNameHashTable@UmfdReliabilityManager@@SA_NQEAGPEAK@Z @ 0x140109678
 * Callers:
 *     ??0LoadFontFileRequest@@QEAA@KPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1401095A8 (--0LoadFontFileRequest@@QEAA@KPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdReliabilityManager::CPathNameHashTable::HashPath(unsigned __int16 *const a1, unsigned int *a2)
{
  __int64 v2; // r8
  unsigned __int16 *v3; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  String = 0LL;
  if ( !a1 )
    return RtlHashUnicodeString(&String, 1u, 1u, a2) >= 0;
  v2 = 0x7FFFLL;
  v3 = a1;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  if ( v2 )
  {
    String.Buffer = a1;
    String.Length = 2 * (0x7FFF - v2);
    String.MaximumLength = String.Length + 2;
    return RtlHashUnicodeString(&String, 1u, 1u, a2) >= 0;
  }
  return 0;
}
