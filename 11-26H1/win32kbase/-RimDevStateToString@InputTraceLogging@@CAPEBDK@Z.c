/*
 * XREFs of ?RimDevStateToString@InputTraceLogging@@CAPEBDK@Z @ 0x1401AE324
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1401BF788 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RimDevStateToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Created";
  v2 = v1 - 1;
  if ( !v2 )
    return "Opened";
  v3 = v2 - 1;
  if ( !v3 )
    return "Closed";
  v4 = v3 - 1;
  if ( !v4 )
    return "Destroyed";
  v5 = v4 - 1;
  if ( !v5 )
    return "Reset";
  if ( v5 == 1 )
    return "QueryRemove";
  return (const char *)&unk_140269890;
}
