/*
 * XREFs of ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x14010F6F4
 * Callers:
 *     ?DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z @ 0x14022338C (-DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z.c)
 *     ?QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z @ 0x140224774 (-QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InputTraceLogging::Enabled(int a1, unsigned __int8 a2)
{
  unsigned int v2; // eax
  char v3; // dl

  v2 = a2;
  v3 = 0;
  if ( v2 < dword_1402A9E40
    && (!a1 || (a1 & (unsigned __int64)qword_1402A9E50) != 0 && (qword_1402A9E58 & a1) == qword_1402A9E58) )
  {
    return 1;
  }
  return v3;
}
