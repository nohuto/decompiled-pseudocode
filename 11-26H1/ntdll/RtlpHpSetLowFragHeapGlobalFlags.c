/*
 * XREFs of RtlpHpSetLowFragHeapGlobalFlags @ 0x1801451E4
 * Callers:
 *     RtlSetGlobalHeapFeatures @ 0x180144408 (RtlSetGlobalHeapFeatures.c)
 * Callees:
 *     RtlpHpStackTraceEnable @ 0x180122A60 (RtlpHpStackTraceEnable.c)
 */

char __fastcall RtlpHpSetLowFragHeapGlobalFlags(unsigned int a1, int a2)
{
  int v2; // eax
  char v3; // bl
  char result; // al

  v2 = RtlpLowFragHeapGlobalFlags;
  v3 = a1;
  if ( (a1 & 8) != 0 )
  {
    v2 = RtlpLowFragHeapGlobalFlags | 0x10;
    RtlpLowFragHeapGlobalFlags |= 0x10u;
  }
  if ( (a1 & 4) != 0 )
  {
    v2 |= 8u;
    RtlpLowFragHeapGlobalFlags = v2;
  }
  if ( (a2 & 0x100000) != 0 || (a1 & 2) != 0 )
  {
    v2 |= 2u;
    RtlpLowFragHeapGlobalFlags = v2;
  }
  if ( (a1 & 1) != 0 || (v2 & 2) != 0 )
    RtlpLowFragHeapGlobalFlags = v2 | 4;
  if ( (a1 & 0xFFFFFF00) != 0 )
    RtlpHpLfhPerfFlags = a1 >> 8;
  if ( (a1 & 0x10) != 0 )
    RtlpHpStackTraceEnable();
  result = RtlpHpHeapFeatures;
  if ( (v3 & 0x20) != 0 )
  {
    result = RtlpHpHeapFeatures | 8;
    RtlpHpHeapFeatures |= 8u;
  }
  if ( (v3 & 0x40) != 0 )
    RtlpHpAppCompatFlags |= 1u;
  if ( v3 < 0 )
  {
    result |= 0x10u;
    RtlpHpHeapFeatures = result;
  }
  return result;
}
