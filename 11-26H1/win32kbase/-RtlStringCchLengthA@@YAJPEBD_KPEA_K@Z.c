/*
 * XREFs of ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1401B4CD8
 * Callers:
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1401930EC (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x140210EE0 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchLengthA(const char *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !a1 )
  {
    result = 3221225485LL;
LABEL_12:
    if ( a3 )
      *a3 = 0LL;
    return result;
  }
  v3 = 2048LL;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( v3 )
      *a3 = 2048 - v3;
    else
      *a3 = 0LL;
  }
  if ( !v3 )
    goto LABEL_12;
  return result;
}
